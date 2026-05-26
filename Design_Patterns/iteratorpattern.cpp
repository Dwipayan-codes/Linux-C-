#include<iostream>
#include<vector>

class Iterator
{
  public:
      virtual bool hasNext() = 0;
      virtual int next() = 0;
      virtual ~Iterator() = default;
};

class Numbers{
      private:
           std::vector<int> data = { 10, 20 , 30 , 40};

      public:
           friend class NumbersIterator;
};

class NumbersIterator : public Iterator{

      private:
         Numbers* numbers;
         std::size_t index;

      public:
            NumbersIterator(Numbers* n){
                   numbers = n;
            }

            bool hasNext() override{
                  return index < numbers->data.size();
            }

            int next() override{
                  return numbers->data[index++];
            }
};


int main()
{
   Numbers num;
   NumbersIterator it(&num);

   while(it.hasNext()){
        std::cout << it.next() << std::endl;
   }
   return 0;
}

