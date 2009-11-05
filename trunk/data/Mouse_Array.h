const int array_size = 1000;
const float default_life = 15; 

struct Mouse_Pos
{
  float x_pos, y_pos, lifetime;
  bool in_use;
};

class Mouse_Array
{
 public:
  Mouse_Pos Pos_Array[array_size]; //Saves 1000 positions on the screen to etch in
  Mouse_Array();
  void add_position(float x, float y, float lifetime = default_life);
  void update();
  void purge();
};

Mouse_Array::Mouse_Array() 
{
 for(int i = 0; i < array_size; i++) {Pos_Array[i].in_use = false;}            
}

void Mouse_Array::add_position(float x, float y, float lifetime)
{
 for(int i = 0; i < array_size; i++)
  {
   if(Pos_Array[i].in_use) //Free memspace
    {
     Pos_Array[i].in_use   = true; //Mark it as used
     Pos_Array[i].x_pos    = x;
     Pos_Array[i].y_pos    = y;
     Pos_Array[i].lifetime = lifetime;
     i = array_size;
    }
  }
}

void Mouse_Array::update()
{
 
}

void Mouse_Array::purge()
{
     
}
 
