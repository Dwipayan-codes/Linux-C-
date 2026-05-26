#include<iostream>
#include<string>
#include<vector>

struct Character{
        int x;
        int y;
        std::string name;

        Character(std::string _name)
        {
           name = _name;
        }

        void move(int _x, int _y)
        {
           x = _x;
           y = _y;
        }
};

class Command{
     public:
         virtual ~Command() {}
         virtual void execute(Character& c) = 0;
         virtual void undo(Character& c) = 0;
};

class Move: public Command{
       public:
       void execute(Character& c){
           std::cout<< c.x << " " << c.y << " " <<"Moved\n";
       }

       void undo(Character& c){
           std::cout<< c.x << " " << c.y << " " <<"Undo\n";
       }
};

int main(){

  Character character("Yo");
  character.move(1,3);
  std::vector<Command*> command_queue;

  Move* m1 = new Move;
  Move* m2 = new Move;
  Move* m3 = new Move;
  Move* m4 = new Move;

  command_queue.push_back(m1);
  command_queue.push_back(m2);
  command_queue.push_back(m3);
  command_queue.push_back(m4);

  for(std::size_t i = 0; i < command_queue.size(); i++)
  {
     command_queue[i]->execute(character);
  }

  return 0;
}

