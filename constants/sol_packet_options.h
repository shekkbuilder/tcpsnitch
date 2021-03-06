static const IntStrPair SOL_PACKET_OPTIONS[] = {
#ifdef PACKET_ADD_MEMBERSHIP
    ADD(PACKET_ADD_MEMBERSHIP),
#endif
#ifdef PACKET_DROP_MEMBERSHIP
    ADD(PACKET_DROP_MEMBERSHIP),
#endif
#ifdef PACKET_RECV_OUTPUT
    ADD(PACKET_RECV_OUTPUT),
#endif
#ifdef PACKET_RX_RING
    ADD(PACKET_RX_RING),
#endif
#ifdef PACKET_STATISTICS
    ADD(PACKET_STATISTICS),
#endif
#ifdef PACKET_COPY_THRESH
    ADD(PACKET_COPY_THRESH),
#endif
#ifdef PACKET_AUXDATA
    ADD(PACKET_AUXDATA),
#endif
#ifdef PACKET_ORIGDEV
    ADD(PACKET_ORIGDEV),
#endif
#ifdef PACKET_VERSION
    ADD(PACKET_VERSION),
#endif
#ifdef PACKET_HDRLEN
    ADD(PACKET_HDRLEN),
#endif
#ifdef PACKET_RESERVE
    ADD(PACKET_RESERVE),
#endif
#ifdef PACKET_TX_RING
    ADD(PACKET_TX_RING),
#endif
#ifdef PACKET_LOSS
    ADD(PACKET_LOSS),
#endif
#ifdef PACKET_VNET_HDR
    ADD(PACKET_VNET_HDR),
#endif
#ifdef PACKET_TX_TIMESTAMP
    ADD(PACKET_TX_TIMESTAMP),
#endif
#ifdef PACKET_TIMESTAMP
    ADD(PACKET_TIMESTAMP),
#endif
#ifdef PACKET_FANOUT
    ADD(PACKET_FANOUT),
#endif
#ifdef PACKET_TX_HAS_OFF
    ADD(PACKET_TX_HAS_OFF),
#endif
#ifdef PACKET_QDISC_BYPASS
    ADD(PACKET_QDISC_BYPASS),
#endif
#ifdef PACKET_ROLLOVER_STATS
    ADD(PACKET_ROLLOVER_STATS),
#endif
#ifdef PACKET_FANOUT_DATA
    ADD(PACKET_FANOUT_DATA)
#endif
};
