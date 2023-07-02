bool test_config()
{
    return true;
}
int get_earned_points(int sold){
    int earned;
    if(sold>=1 && sold<=5){
        earned = sold * 1;
    } else if(sold>=6 && sold<=10){
        earned = sold * 5;
    } else if(sold>=11 && sold<=15){
        earned = sold * 10;
    } else if(sold>=16){
        earned = sold * 15;
    } else{
        earned = 0;
    }
    return earned;
}