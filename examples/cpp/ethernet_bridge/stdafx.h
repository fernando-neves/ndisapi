// --------------------------------------------------------------------------------
/// <summary>
/// include file for standard system include files,or project specific include 
/// files that are used frequently, but are changed infrequently 
/// </summary>
// --------------------------------------------------------------------------------

#pragma once

#include "targetver.h"

#include <winsock2.h>
#include <in6addr.h>
#include <tchar.h>
#include <ws2ipdef.h>
#include <IPHlpApi.h>
#include <Mstcpip.h>
#include <conio.h>
#include <WinDNS.h>

#include <memory>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <limits>
#include <atomic>
#include <string>
#include <functional>
#include <vector>
#include <cassert>
#include <array>
#include <map>
#include <cctype>
#include <shared_mutex>
#include <set>
#include <algorithm>
#include <variant>
#include <bitset>
#include <optional>
#include <charconv>
#include <gsl/gsl>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "Ws2_32.lib")

using namespace std;

#include <plog/Log.h>

#include "../../../include/common.h"
#include "../../../include/ndisapi.h"
#include "../common/iphlp.h"
#include "../common/dhcp_typedefs.h"
#include "../common/net/ip_address.h"
#include "../common/net/mac_address.h"
#include "../common/winsys/object.h"
#include "../common/winsys/event.h"

#include "../common/net/ip_endpoint.h"
#include "../common/iphelper/process_lookup.h"

#include "NetworkAdapter.h"
#include "EthernetBridge.h"

