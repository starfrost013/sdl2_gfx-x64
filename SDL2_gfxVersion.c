/* 
	SDL2_gfxVersion.c

	April 12, 2022

	Allows the SDL2_gfx version to be returned to P/Invoke applications such as Lightning2.
*/

#include "SDL2_gfxVersion.h"

/// <summary>
/// Gets the current version of SDL2_gfx. 
/// 
/// Returns a pointer to an SDL_version struct.
/// </summary>
/// <param name="ver">The pointer to the version you wish to populate</param>
/// <returns>An SDL_version struct containing teh version of SDL2_gfx being used.</returns>
SDL2_GFXPRIMITIVES_SCOPE SDL_version* gfxGetVersion(SDL_version* ver)
{
	ver->major = SDL2_GFXPRIMITIVES_MAJOR;
	ver->minor = SDL2_GFXPRIMITIVES_MINOR;
	ver->patch = SDL2_GFXPRIMITIVES_MICRO;

	return ver; 
}