void view_urecord(int id)
{
    printf("Your name is %s\nYour id is %d\nYour age is %d\nYour gender is %s\n",(students+id)->name, (students+id)->id, (students+id)->age, (students+id)->gender);
}
