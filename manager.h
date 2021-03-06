#include "product.h"

int selectMenu();//메뉴의 리스트를 알려주는 함수
void listProduct(Product *p,int count); //전체 제품의 리스트를 출력하는 함수
void saveData(Product *p, int count); //등록된 제품 리스트를 파일에 저장
void searchName(Product *p, int count); //파일 속의 이름을 찾는 함수
void searchColor(Product *p,int count); //제품의 색깔을 찾는 함수
void PersonalColor(Product *p, int count); //자신의 퍼스널 컬러에 맞는 화장품을 보여주는 함수
int selectDataNo(Product *p, int count); //제품의 번호를 선택하는 함수
int loadData(Product *p); // 파일을 불러오는 함수
void eventProduct(Product *p,int count); //이벤트하는 제품들을 보여주는 함수
int loadColor(Product *p);//Color리스트를 불러오는 함수
int selectColor(Product *p, int colorNo); // 제품의 색을 선택하는 함수
