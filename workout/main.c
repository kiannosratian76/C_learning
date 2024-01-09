#include <stdio.h>
/* program to find area and circumference of circle*/
// area
int circle_are(int x)
{
    double pi = 3.14;
    /// area of circle
    int area = 0;
    area = x * x * pi;

    return area;
}
// circumference
int circle_circumference(int y)
{
    double pi = 3.14;
    // circumference of circle
    int circum = 0;
    circum = y * pi;

    return circum;
}

/*print ascii value of charecter */
void get_char()
{
    char word;
    int size;
    printf("Enter some charecter:\n");
    scanf("%c", &word);
    size = word;
    printf("%d", size);
}
/*Program to Find Area of Triangle Given Base And Height*/
int Triangle_Area()
{
    int Base;

    int Height;

    printf("Enter base\n");
    scanf("%d", &Base);
    printf("Enter Height\n");
    scanf("%d", &Height);
    int area = 0;
    area = Base * Height / 2;
    return area;
};

/*Convert a Person's Name in Abbreviated Form*/
void abbForm()
{
    char fname[30];
    char mname[20];
    char lname[20];
    printf("plaese Enter Your Fname , Mname,Lname\n");
    scanf("%s %s %s", &fname, &mname, &lname);
    printf("Youre Abbreiatived name is: %c_%c_%s\n", fname[0], mname[0], lname);
};

int main()
{
    // printf("the area of circle is = %d\n", circle_are(7));
    // printf("the circum  of circle is = %d\n", circle_circumference(7));
    // get_char();
    // int somTrang = Triangle_Area();
    // printf("are of triangle = %d", somTrang);
    abbForm();
}