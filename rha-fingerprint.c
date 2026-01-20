#include <stdio.h>
#include <string.h>

static int final_hex;
int capitalized_count = 0;

void count_characters(const char *str) {
  int counts[256] = {0};
  int bit;
  int multiplier;
  int hex_sig = 256;
  static int hex_whitespace = 0;
  static int hex_r;
  static int hex_a;
  static int hex_b, hex_c, hex_d, hex_e, hex_f, hex_g, hex_h, hex_i, hex_j,
      hex_k, hex_l, hex_m, hex_n, hex_o, hex_p, hex_q, hex_s, hex_t, hex_u,
      hex_v;
  static int hex_w, hex_x, hex_y, hex_z;

  // for capitalized letters

  static int hex_R;
  static int hex_A;
  static int hex_B, hex_C, hex_D, hex_E, hex_F, hex_G, hex_H, hex_I, hex_J,
      hex_K, hex_L, hex_M, hex_N, hex_O, hex_P, hex_Q, hex_S, hex_T, hex_U,
      hex_V;
  static int hex_W, hex_X, hex_Y, hex_Z;
  int hex_sig_Capitalized = 512;

  for (int i = 0; str[i] != '\0'; i++) {
    unsigned char index = (unsigned char)str[i];
    counts[index]++;
  }

  for (int i = 0; i < 256; i++) {
    if (counts[i] > 0) {
      if (i > 31 && i < 127) {
        if (i == 'a') {
          bit = 1;
          multiplier = counts[i];
          hex_a = bit * multiplier;
        }
        if (i == 'b') {
          bit = 2;
          multiplier = counts[i];
          hex_b = bit * multiplier;
        }
        if (i == 'c') {
          bit = 3;
          multiplier = counts[i];
          hex_c = bit * multiplier;
        }
        if (i == 'd') {
          bit = 4;
          multiplier = counts[i];
          hex_d = bit * multiplier;
        }
        if (i == 'e') {
          bit = 5;
          multiplier = counts[i];
          hex_e = bit * multiplier;
        }
        if (i == 'f') {
          bit = 6;
          multiplier = counts[i];
          hex_f = bit * multiplier;
        }
        if (i == 'g') {
          bit = 7;
          multiplier = counts[i];
          hex_g = bit * multiplier;
        }
        if (i == 'h') {
          bit = 8;
          multiplier = counts[i];
          hex_h = bit * multiplier;
        }
        if (i == 'i') {
          bit = 9;
          multiplier = counts[i];
          hex_i = bit * multiplier;
        }
        if (i == 'j') {
          bit = 10;
          multiplier = counts[i];
          hex_j = bit * multiplier;
        }
        if (i == 'k') {
          bit = 11;
          multiplier = counts[i];
          hex_k = bit * multiplier;
        }
        if (i == 'l') {
          bit = 12;
          multiplier = counts[i];
          hex_l = bit * multiplier;
        }
        if (i == 'm') {
          bit = 13;
          multiplier = counts[i];
          hex_m = bit * multiplier;
        }
        if (i == 'n') {
          bit = 14;
          multiplier = counts[i];
          hex_n = bit * multiplier;
        }
        if (i == 'o') {
          bit = 15;
          multiplier = counts[i];
          hex_o = bit * multiplier;
        }
        if (i == 'p') {
          bit = 16;
          multiplier = counts[i];
          hex_p = bit * multiplier;
        }
        if (i == 'q') {
          bit = 17;
          multiplier = counts[i];
          hex_q = bit * multiplier;
        }
        if (i == 'r') {
          bit = 18;
          multiplier = counts[i];
          hex_r = bit * multiplier;
        }
        if (i == 's') {
          bit = 19;
          multiplier = counts[i];
          hex_s = bit * multiplier;
        }
        if (i == 't') {
          bit = 20;
          multiplier = counts[i];
          hex_t = bit * multiplier;
        }
        if (i == 'u') {
          bit = 21;
          multiplier = counts[i];
          hex_u = bit * multiplier;
        }
        if (i == 'v') {
          bit = 22;
          multiplier = counts[i];
          hex_v = bit * multiplier;
        }
        if (i == 'w') {
          bit = 23;
          multiplier = counts[i];
          hex_w = bit * multiplier;
        }
        if (i == 'x') {
          bit = 24;
          multiplier = counts[i];
          hex_x = bit * multiplier;
        }
        if (i == 'y') {
          bit = 25;
          multiplier = counts[i];
          hex_y = bit * multiplier;
        }
        if (i == 'z') {
          bit = 26;
          multiplier = counts[i];
          hex_z = bit * multiplier;
        }

        // for capitalized letters

        if (i == 'A') {
          bit = 1;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_A = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'B') {
          bit = 2;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_B = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'C') {
          bit = 3;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_C = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'D') {
          bit = 4;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_D = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'E') {
          bit = 5;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_E = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'F') {
          bit = 6;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_F = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'G') {
          bit = 7;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_G = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'H') {
          bit = 8;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_H = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'I') {
          bit = 9;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_I = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'J') {
          bit = 10;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_J = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'K') {
          bit = 11;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_K = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'L') {
          bit = 12;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_L = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'M') {
          bit = 13;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_M = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'N') {
          bit = 14;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_N = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'O') {
          bit = 15;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_O = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'P') {
          bit = 16;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_P = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'Q') {
          bit = 17;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_Q = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'R') {
          bit = 18;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_R = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'S') {
          bit = 19;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_S = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'T') {
          bit = 20;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_T = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'U') {
          bit = 21;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_U = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'V') {
          bit = 22;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_V = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'W') {
          bit = 23;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_W = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'X') {
          bit = 24;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_X = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'Y') {
          bit = 25;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_Y = bit * multiplier + hex_sig_Capitalized;
        }
        if (i == 'Z') {
          bit = 26;
          multiplier = counts[i];
          capitalized_count = capitalized_count + counts[i];
          hex_Z = bit * multiplier + hex_sig_Capitalized;
        }

        final_hex = hex_a + hex_b + hex_c + hex_d + hex_e + hex_f + hex_g +
                    hex_h + hex_i + hex_j + hex_k + hex_l + hex_m + hex_n +
                    hex_o + hex_p + hex_q + hex_r + hex_s + hex_t + hex_u +
                    hex_v + hex_w + hex_x + hex_y + hex_z + hex_whitespace +
                    hex_A + hex_B + hex_C + hex_D + hex_E + hex_F + hex_G +
                    hex_H + hex_I + hex_J + hex_K + hex_L + hex_M + hex_N +
                    hex_O + hex_P + hex_Q + hex_R + hex_S + hex_T + hex_U +
                    hex_V + hex_W + hex_X + hex_Y + hex_Z;

        final_hex = final_hex + hex_sig;

      } else {
        printf("0rX0%02X : %d\n", i, counts[i]);
        printf("tip: type rha256 -h for learning current limitations.\n");
      }
    }
  }
}

void hexabyte() {
  int hexabyte = final_hex ^ final_hex;
  if (capitalized_count > 0) {
    printf("0rX%d%d%d\n", capitalized_count, hexabyte,
           final_hex); // token with CAPITALIZED
  } else {
    printf("0rX0%d%d\n", hexabyte, final_hex); // token
  }
}

int main(int argc, char *argv[]) {

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-h") == 0) {
      printf("----------------------------------\n");
      printf("rha-fingerprint - RHA Fingerprint Encoder:\n");
      printf("----------------------------------\n");
      printf(">Current limitations:\n");
      printf("-No signs,symbols support.\n");
      printf("-Only english is supported.\n");
      printf("-This project is in alpha state, please use with caution!\n");
      return 0;
    } else if (argv[i][0] == '-') {
      printf("undefined argument: %s\n", argv[i]);
      return 1;
    } else {
      printf("not an argument: %s\n", argv[i]);
      return 1;
    }
  }

  char code[100];
  printf("enter code to encode: ");
  fgets(code, sizeof(code), stdin);
  size_t len = strcspn(code, "\n");
  if (len < sizeof(code)) {
    code[len] = '\0';
  }
  printf("%s\n", code);
  count_characters(code);
  hexabyte();
  return 0;
}
