class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setDetails(int L,int W,int H);

        int getLength();
        int getWidth();
        int getHeight();
 
       int calcVolume();
};
