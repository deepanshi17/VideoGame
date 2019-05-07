// images.h
// contains image buffers for simple space invaders
// Jonathan Valvano, March 5, 2018
// Capture image dimensions from BMP files

#ifndef __images_h
#define __images_h
#include <stdint.h>


// *************************** Images ***************************
// enemy ship that starts at the top of the screen (arms/mouth closed)
// width=16 x height=10
const unsigned short SmallEnemy10pointA[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
//18x8 (wxh)
const unsigned short ns[] = {
 0xE7FF, 0x0000, 0xBF7F, 0xA71F, 0x8E9F, 0x6D9D, 0x4C9C, 0x54DF, 0x337D, 0x231D, 0x22FD, 0x2B5C, 0x3BFE, 0x653F, 0x4439, 0x8E7F,
 0x9EDF, 0xB75F, 0xF7FF, 0xDFDF, 0xC79F, 0xAF3F, 0x9EDF, 0x865F, 0x75FF, 0x6D7F, 0x443D, 0x2B7B, 0x339C, 0x33BB, 0x54DE, 0x6D9F,
 0x863F, 0x8E9F, 0xA6FF, 0xBF7F, 0xF7FF, 0x0000, 0xCFBF, 0xAF3F, 0xAF3F, 0x969F, 0x8E5F, 0x7E1F, 0x653E, 0x2B98, 0x3C3A, 0x33F9,
 0x7DFF, 0x7E3F, 0x96BF, 0x9EFF, 0xAF3F, 0xBF7F, 0xFFFF, 0xF7FF, 0xD7DF, 0xCFBF, 0xBF7F, 0x9EFF, 0x9EDF, 0x969F, 0x7E1F, 0x4C99,
 0x4CBA, 0x54FB, 0x969F, 0x96BF, 0xA6FF, 0xAF3F, 0xBF7F, 0xCFBF, 0x0000, 0xF7FF, 0xEFFF, 0xD7DF, 0xC79F, 0xB75F, 0xAF3F, 0x9EDF,
 0xA71F, 0x5D19, 0x5CF8, 0x75DC, 0xA71F, 0xA71F, 0xB75F, 0xBF7F, 0xD7DF, 0xE7DF, 0x0000, 0xFFFF, 0xF7FF, 0xE7FF, 0xD7DF, 0xC79F,
 0xBF7F, 0xB75F, 0xB77F, 0x8E3B, 0x64F6, 0xAF3F, 0xBF7F, 0xBF7F, 0xC79F, 0xCFBF, 0x0000, 0xEFFF, 0x0000, 0x0000, 0x0000, 0xF7FF,
 0xEFFF, 0xDFDF, 0xCFBF, 0xC79F, 0xC79F, 0xBF7F, 0x9E5B, 0xC7BF, 0xC79F, 0xCFBF, 0xDFDF, 0xE7DF, 0x0000, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xF7FF, 0xEFFF, 0xE7FF, 0xDFDF, 0xDFFF, 0xDFFF, 0xD7BF, 0xDFDF, 0xE7FF, 0x0000, 0xFFFF, 0x0000, 0xFFFF
};


//18x8
const unsigned short sp[] = {
 0x0000, 0x0000, 0xBF7F, 0xA71F, 0x8E9F, 0x6D9D, 0x4C9C, 0x54DF, 0x337D, 0x231D, 0x22FD, 0x2B5C, 0x3BFE, 0x653F, 0x4439, 0x8E7F,
 0x9EDF, 0xB75F, 0xF7FF, 0x0000, 0xC79F, 0xAF3F, 0x9EDF, 0x865F, 0x75FF, 0x6D7F, 0x443D, 0x2B7B, 0x339C, 0x33BB, 0x54DE, 0x6D9F,
 0x863F, 0x8E9F, 0xA6FF, 0xBF7F, 0xF7FF, 0xE7DF, 0xCFBF, 0xAF3F, 0xAF3F, 0x969F, 0x8E5F, 0x7E1F, 0x653E, 0x2B98, 0x3C3A, 0x33F9,
 0x7DFF, 0x7E3F, 0x96BF, 0x9EFF, 0xAF3F, 0xBF7F, 0x0000, 0xF7FF, 0xD7DF, 0xCFBF, 0xBF7F, 0x9EFF, 0x9EDF, 0x969F, 0x7E1F, 0x4C99,
 0x4CBA, 0x54FB, 0x969F, 0x96BF, 0xA6FF, 0xAF3F, 0xBF7F, 0x0000, 0x0000, 0xF7FF, 0xEFFF, 0xD7DF, 0xC79F, 0xB75F, 0xAF3F, 0x9EDF,
 0xA71F, 0x5D19, 0x5CF8, 0x75DC, 0xA71F, 0xA71F, 0xB75F, 0xBF7F, 0xD7DF, 0xE7DF, 0x0000, 0xFFFF, 0xF7FF, 0xE7FF, 0xD7DF, 0xC79F,
 0xBF7F, 0xB75F, 0xB77F, 0x8E3B, 0x64F6, 0xAF3F, 0xBF7F, 0xBF7F, 0xC79F, 0xCFBF, 0xDFDF, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7FF,
 0xEFFF, 0xDFDF, 0xCFBF, 0xC79F, 0xC79F, 0xBF7F, 0x9E5B, 0xC7BF, 0xC79F, 0xCFBF, 0xDFDF, 0xE7DF, 0xF7FF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xF7FF, 0xEFFF, 0xE7FF, 0xDFDF, 0xDFFF, 0xDFFF, 0xD7BF, 0xDFDF, 0xE7FF, 0xEFFF, 0x0000, 0xFFFF, 0x0000
};


// enemy ship that starts at the top of the screen (arms/mouth open)
// width=16 x height=10
const unsigned short SmallEnemy10pointB[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

// enemy ship that starts in the middle of the screen (arms together)
// width=16 x height=10
const unsigned short SmallEnemy20pointA[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

// enemy ship that starts in the middle of the screen (arms apart)
// width=16 x height=10
const unsigned short SmallEnemy20pointB[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};



// enemy ship that starts at the bottom of the screen (arms down)
// width=16 x height=10
const unsigned short SmallEnemy30pointA[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

// enemy ship that starts at the bottom of the screen (arms up)
// width=16 x height=10
const unsigned short SmallEnemy30pointB[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

// image of the player's ship
// includes two blacked out columns on the left and right sides of the image to prevent smearing when moved 2 pixels to the left or right
// width=18 x height=8
const unsigned short PlayerShip0[] = {
 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0,
 0x0000, 0x0000, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0,
 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0,
 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0,
 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07E0,
 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x07E0, 0x07E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const unsigned short pship[] = {
 0xE7FF, 0xD7DF, 0xBF7F, 0xA71F, 0x8E9F, 0x6D9D, 0x4C9C, 0x54DF, 0x337D, 0x231D, 0x22FD, 0x2B5C, 0x3BFE, 0x653F, 0x4439, 0x8E7F,
 0x9EDF, 0xB75F, 0x0000, 0xDFDF, 0xC79F, 0xAF3F, 0x9EDF, 0x865F, 0x75FF, 0x6D7F, 0x443D, 0x2B7B, 0x339C, 0x33BB, 0x54DE, 0x6D9F,
 0x863F, 0x8E9F, 0xA6FF, 0xBF7F, 0x0000, 0xE7DF, 0xCFBF, 0xAF3F, 0xAF3F, 0x969F, 0x8E5F, 0x7E1F, 0x653E, 0x2B98, 0x3C3A, 0x33F9,
 0x7DFF, 0x7E3F, 0x96BF, 0x9EFF, 0xAF3F, 0xBF7F, 0xFFFF, 0xF7FF, 0xD7DF, 0xCFBF, 0xBF7F, 0x9EFF, 0x9EDF, 0x969F, 0x7E1F, 0x4C99,
 0x4CBA, 0x54FB, 0x969F, 0x96BF, 0xA6FF, 0xAF3F, 0xBF7F, 0xCFBF, 0x0000, 0xF7FF, 0xEFFF, 0xD7DF, 0xC79F, 0xB75F, 0xAF3F, 0x9EDF,
 0xA71F, 0x5D19, 0x5CF8, 0x75DC, 0xA71F, 0xA71F, 0xB75F, 0xBF7F, 0xD7DF, 0xE7DF, 0x0000, 0xFFFF, 0xF7FF, 0xE7FF, 0xD7DF, 0xC79F,
 0xBF7F, 0xB75F, 0xB77F, 0x8E3B, 0x64F6, 0xAF3F, 0xBF7F, 0xBF7F, 0xC79F, 0xCFBF, 0xDFDF, 0xEFFF, 0x0000, 0x0000, 0x0000, 0xF7FF,
 0xEFFF, 0xDFDF, 0xCFBF, 0xC79F, 0xC79F, 0xBF7F, 0x9E5B, 0xC7BF, 0xC79F, 0xCFBF, 0x0000, 0xE7DF, 0x0000, 0xFFFF, 0x0000, 0x0000,
 0x0000, 0x0000, 0xFFFF, 0xF7FF, 0xEFFF, 0xE7FF, 0xDFDF, 0xDFFF, 0xDFFF, 0xD7BF, 0xDFDF, 0xE7FF, 0xEFFF, 0xFFFF, 0x0000, 0x0000
};

// small shield floating in space to cover the player's ship from enemy fire (undamaged)
// width=18 x height=5
const unsigned short Bunker0[] = {
 0x079F, 0x079F, 0x079F, 0x079F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x079F, 0x079F,
 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x079F,
 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F,
 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x0000, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F,
 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x0000, 0x0000, 0x0000, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F,
 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x079F, 0x0000, 0x0000,

};

const unsigned short Fire2[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0043, 0x0086,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0064, 0x11F2, 0x092C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x08E9, 0x10CA, 0x1A53, 0x231A, 0x0043, 0x0000, 0x0000, 0x0000, 0x0000, 0x118E, 0x23DF, 0x233C, 0x239E, 0x23DE, 0x08E9,
 0x0000, 0x0000, 0x0000, 0x0085, 0x1B3B, 0x23FF, 0x23FF, 0x23FF, 0x23FF, 0x094C, 0x0000, 0x0000, 0x0000, 0x08A6, 0x233A, 0x23FF,
 0x23FF, 0x23FF, 0x23DF, 0x08C8, 0x0000, 0x0000, 0x0000, 0x08C9, 0x2299, 0x23FF, 0x23FF, 0x23FF, 0x231A, 0x08EA, 0x0064, 0x0000,
 0x0000, 0x08A6, 0x1A77, 0x239F, 0x239F, 0x237F, 0x22BC, 0x1AB8, 0x0063, 0x0000, 0x0000, 0x0064, 0x1A57, 0x239F, 0x23DF, 0x23BF,
 0x237F, 0x11AF, 0x0000, 0x0000, 0x0000, 0x11F1, 0x23DF, 0x23FF, 0x23FF, 0x23FF, 0x23FF, 0x2319, 0x08C7, 0x0000, 0x0000, 0x1B19,
 0x23FF, 0x23FF, 0x23FF, 0x23FF, 0x23FF, 0x23FF, 0x11AF, 0x0000, 0x0001, 0x1B1A, 0x23FF, 0x237B, 0x23BC, 0x237A, 0x23FE, 0x23FF,
 0x11F1, 0x0000, 0x0000, 0x1AD8, 0x23FF, 0x23DE, 0x23FF, 0x23DE, 0x23FF, 0x23FF, 0x11AF, 0x0000, 0x0000, 0x11D0, 0x239E, 0x1A96,
 0x239D, 0x23FF, 0x23FF, 0x23DF, 0x08C7, 0x0000, 0x0000, 0x08A7, 0x1A98, 0x0064, 0x1B3A, 0x237C, 0x19F3, 0x1214, 0x0042, 0x0000,
 0x0000, 0x08C8, 0x19D3, 0x08A7, 0x1234, 0x0888, 0x0864, 0x092D, 0x0042, 0x0000, 0x0000, 0x0043, 0x0865, 0x0022, 0x11B0, 0x0043,
 0x0000, 0x0885, 0x0042, 0x0000, 0x0000, 0x0022, 0x08A7, 0x0000, 0x0044, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

const unsigned short EraseSprite[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

};

#endif /* __images_h */
