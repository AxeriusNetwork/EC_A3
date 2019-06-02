#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "includes\CfgPatches.hpp"
#include "includes\CfgFactionClasses.hpp"
#include "includes\CfgVehicleClasses.hpp"
#include "includes\CfgVehicles.hpp"
#include "includes\CfgGroups.hpp"
#include "includes\crates.hpp"