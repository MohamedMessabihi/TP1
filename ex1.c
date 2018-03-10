int main ()
{
int age = 0; // On initialise la variable a 0
printf (" Quel age avez - vous ? ");
scanf ("%d", &age); // On demande d'entrer l'age avec scanf
if (age <= 120)

   printf("Ah ! Vous avez donc %d ans\n", age);
else
    printf("votre age nest pas raisonnable ");

return 0;
}
