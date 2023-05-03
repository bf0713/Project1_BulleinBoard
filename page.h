class Page {
    public:
    //    Page(int x, int y, int width, int height, int id, char content);
    //    int get_id();
        
    private:
        int x, y; // position of the page on the board
        int width, height; // width and height of the page 
        int id; // unique id for each page
        char content; 
};

//Page::Page(int x, int y, int width, int height, int id, char content): x(x), y(y), width(width), height(height), id(id), content(content) {}

//int Page::get_id(){
//   return id;
//}