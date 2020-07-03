/*
 * lib/pathnames.h    This file contains the definitions of the path
 *                      names used by the NET-LIB.
 *
 * NET-LIB
 *
 * Version:     lib/pathnames.h 1.37 (1997-08-23)
 *
 * Author:      Fred N. van Kempen, <waltje@uwalt.nl.mugnet.org>
 */

/* pathnames of the procfs files used by NET. */
#define _PATH_PROCNET_IGMP		"/tmp/procsys/net/igmp"
#define _PATH_PROCNET_IGMP6		"/tmp/procsys/net/igmp6"
#define _PATH_PROCNET_TCP		"/tmp/procsys/net/tcp"
#define _PATH_PROCNET_TCP6		"/tmp/procsys/net/tcp6"
#define _PATH_PROCNET_UDP		"/tmp/procsys/net/udp"
#define _PATH_PROCNET_UDP6		"/tmp/procsys/net/udp6"
#define _PATH_PROCNET_UDPLITE           "/tmp/procsys/net/udplite"
#define _PATH_PROCNET_UDPLITE6          "/tmp/procsys/net/udplite6"
#define _PATH_PROCNET_SCTPEPTS		"/tmp/procsys/net/sctp/eps"
#define _PATH_PROCNET_SCTP6EPTS		"/tmp/procsys/net/sctp6/eps"
#define _PATH_PROCNET_SCTPASSOCS	"/tmp/procsys/net/sctp/assocs"
#define _PATH_PROCNET_SCTP6ASSOCS	"/tmp/procsys/net/sctp6/assocs"
#define _PATH_PROCNET_RAW		"/tmp/procsys/net/raw"
#define _PATH_PROCNET_RAW6		"/tmp/procsys/net/raw6"
#define _PATH_PROCNET_UNIX		"/tmp/procsys/net/unix"
#define _PATH_PROCNET_ROUTE		"/tmp/procsys/net/route"
#define _PATH_PROCNET_ROUTE6		"/tmp/procsys/net/ipv6_route"
#define _PATH_PROCNET_RTCACHE		"/tmp/procsys/net/rt_cache"
#define _PATH_PROCNET_AX25_ROUTE	"/tmp/procsys/net/ax25_route"
#define _PATH_PROCNET_NR		"/tmp/procsys/net/nr"
#define _PATH_PROCNET_NR_NEIGH		"/tmp/procsys/net/nr_neigh"
#define _PATH_PROCNET_NR_NODES		"/tmp/procsys/net/nr_nodes"
#define _PATH_PROCNET_ARP		"/tmp/procsys/net/arp"
#define _PATH_PROCNET_AX25		"/tmp/procsys/net/ax25"
#define _PATH_PROCNET_IPX_SOCKET1	"/tmp/procsys/net/ipx/socket"
#define _PATH_PROCNET_IPX_SOCKET2	"/tmp/procsys/net/ipx"
#define _PATH_PROCNET_IPX_ROUTE1	"/tmp/procsys/net/ipx/route"
#define _PATH_PROCNET_IPX_ROUTE2	"/tmp/procsys/net/ipx_route"
#define _PATH_PROCNET_ATALK		"/tmp/procsys/net/appletalk"
#define _PATH_PROCNET_IP_BLK		"/tmp/procsys/net/ip_block"
#define _PATH_PROCNET_IP_FWD		"/tmp/procsys/net/ip_forward"
#define _PATH_PROCNET_IP_ACC		"/tmp/procsys/net/ip_acct"
#define _PATH_PROCNET_IP_MASQ		"/tmp/procsys/net/ip_masquerade"
#define _PATH_PROCNET_NDISC		"/tmp/procsys/net/ndisc"
#define _PATH_PROCNET_IFINET6		"/tmp/procsys/net/if_inet6"
#define _PATH_PROCNET_DEV		"/tmp/procsys/net/dev"
#define _PATH_PROCNET_RARP		"/tmp/procsys/net/rarp"
#define _PATH_ETHERS			"/etc/ethers"
#define _PATH_PROCNET_ROSE		"/tmp/procsys/net/rose"
#define _PATH_PROCNET_ROSE_NEIGH	"/tmp/procsys/net/rose_neigh"
#define _PATH_PROCNET_ROSE_NODES	"/tmp/procsys/net/rose_nodes"
#define _PATH_PROCNET_ROSE_ROUTE	"/tmp/procsys/net/rose_routes"
#define _PATH_PROCNET_X25		"/tmp/procsys/net/x25"
#define _PATH_PROCNET_X25_ROUTE		"/tmp/procsys/net/x25/route"
#define _PATH_PROCNET_DEV_MCAST		"/tmp/procsys/net/dev_mcast"
#define _PATH_PROCNET_ATALK_ROUTE	"/tmp/procsys/net/atalk_route"
#define _PATH_SYS_BLUETOOTH_L2CAP	"/sys/kernel/debug/bluetooth/l2cap"
#define _PATH_SYS_BLUETOOTH_RFCOMM	"/sys/kernel/debug/bluetooth/rfcomm"

/* pathname for the netlink device */
#define _PATH_DEV_ROUTE	"/dev/route"

/* End of pathnames.h */
