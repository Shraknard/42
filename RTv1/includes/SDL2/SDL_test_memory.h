  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_test_memory.h
 *
 *  Include file for SDL test framework.
 *
 *  This code is a part of the SDL2_test library, not the main SDL library.
 */

#ifndef SDL_test_memory_h_
#define SDL_test_memory_h_

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif


/**
 * \brief Start tracking SDL memory allocations
 * 
 * \note This should be called before any other SDL functions for complete tracking coverage
 */
int SDLTest_TrackAllocations();

/**
 * \brief Print a log of any outstanding allocations
 *
 * \note This can be called after SDL_Quit()
 */
void SDLTest_LogAllocations();


/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif
#include "close_code.h"

#endif /* SDL_test_memory_h_ */

/* vi: set ts=4 sw=4 expandtab: */
