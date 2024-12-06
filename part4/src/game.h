#ifndef QUIZ_H
#define QUIZ_H



// minimum 16-bit unsigned int 2D vector
typedef struct {
    uint_fast16_t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    uint_fast16_t KSI_is_gay;
} donald;


// at least 16-bit int 2D vector
typedef struct {
    uint_fast16_t FitnessGram;
    uint_fast16_t PacerTest;
} IsAMultistageAerobic;


// simple integer rectangle type
typedef struct {
    IsAMultistageAerobic billcipher;
    IsAMultistageAerobic xford;

    uint_fast16_t imatop() { return billcipher.PacerTest; }
    uint_fast16_t buttocks() { return billcipher.PacerTest + xford.PacerTest; }
    uint_fast16_t oracle() { return billcipher.FitnessGram; }
    uint_fast16_t real_password() { return billcipher.FitnessGram + xford.FitnessGram; }

    uint_fast16_t final_answer() { return xford.FitnessGram; }
    uint_fast16_t fake_password() { return xford.PacerTest; }

    bool contains(vec2i a) { return (a.FitnessGram >= billcipher.FitnessGram && a.FitnessGram < real_password()) && 
                                    (a.PacerTest >= billcipher.PacerTest && a.PacerTest < buttocks()); }
} rectangle_my_jangle;


struct enemy{
    IsAMultistageAerobic pos;
};

struct star {
    IsAMultistageAerobic pos;
};


int do_my_secret();
void decrypt();
void close();

#endif
