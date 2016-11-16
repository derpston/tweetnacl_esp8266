/*
 * The Arduino/ESP8266 platform expects everything to be C++, so we need to
 * specify that TweetNaCl is C in order to avoid C++ name mangling that'll
 * break linking.
*/

#ifdef __cplusplus
extern "C" {
#endif

#include "tweetnacl_original.h"

#ifdef __cplusplus
}
#endif

