//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnel.h>

@class NPTuscanyOnRamp, NSDate, NSObject;
@protocol OS_nw_connection;

@interface NPTunnelTuscany : NPTunnel
{
    unsigned long long _nextFlowID;
    NSObject<OS_nw_connection> *_UDPSession;
    void *_connectionTimer;
    BOOL _shouldReportUsage;
    void *_pingTimer;
    void *_usageReportTimer;
    NPTuscanyOnRamp *_onRamp;
    unsigned int _waldoTimestamp;
    BOOL _ignoreWaldoTimestamp;
    BOOL _isFirstTunnel;
    void *_clientRef;
    CDUnknownBlockType _pendingPingCompletionHandler;
}

@property (nonatomic) void *clientRef; // @synthesize clientRef=_clientRef;
@property (readonly, nonatomic) long long currentMTU;
@property (readonly, nonatomic) NSDate *dayPassCreationDate;
@property (readonly, nonatomic) unsigned int dayPassSessionCounter;
@property (nonatomic) BOOL ignoreWaldoTimestamp; // @synthesize ignoreWaldoTimestamp=_ignoreWaldoTimestamp;
@property (nonatomic) BOOL isFirstTunnel; // @synthesize isFirstTunnel=_isFirstTunnel;
@property (readonly, nonatomic) unsigned long long maxFrameSize;
@property (copy, nonatomic) CDUnknownBlockType pendingPingCompletionHandler; // @synthesize pendingPingCompletionHandler=_pendingPingCompletionHandler;

- (void).cxx_destruct;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (unsigned long long)allocateFlowID;
- (BOOL)canHandleMoreData;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)closeFlow:(id)arg1;
- (id)createConnectionInfo;
- (void)createTuscanyClient;
- (void)dealloc;
- (void)destroyConnection;
- (BOOL)flowIsFirstFlow:(id)arg1;
- (void)handleConnected;
- (void)handleConnectionError;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (void)handleHelloAck:(unsigned int)arg1;
- (void)handleInputAvailable;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (void)handleReadData:(struct nw_frame_array_s *)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (BOOL)isTFOProbeSucceeded;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (BOOL)start;
- (void)startConnectionTimer;
- (void)writeInitialData;

@end

