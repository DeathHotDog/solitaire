/* GIMP RGB C-Source image dump (und.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[85 * 31 * 3 + 1];
} und = {
  85, 31, 3,
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062"
  "\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377"
  "\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377"
  "\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377"
  "\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377"
  "\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062"
  "\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377"
  "\377\377\377\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062\062"
  "\062\062\062\062\062\062\062\062\062\062\062\062\062\062",
};
