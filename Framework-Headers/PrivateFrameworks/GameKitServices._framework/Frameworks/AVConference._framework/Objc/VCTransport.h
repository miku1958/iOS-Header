//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTransport : NSObject
{
    struct tagHANDLE *tpHandle;
    NSMutableDictionary *iceBlocks;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSMutableDictionary *dataReceivedHandlers;
    NSObject<OS_dispatch_queue> *dataReceivedHandlerQueue;
}

+ (id)sharedInstance;
- (void)cleanup;
- (void)dealloc;
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned int)arg1;
- (int)discardRelayBindingForCallID:(unsigned int)arg1;
- (int)discardRelayBindingForCallID:(unsigned int)arg1 withChannelNumber:(int)arg2;
- (int)getConnectionDataForCallID:(unsigned int)arg1 version:(unsigned char)arg2 useCompressedData:(BOOL)arg3 pConnectionData:(void **)arg4 connectDataSizeInBytes:(int *)arg5 relayDictionary:(struct __CFDictionary *)arg6 interfaceUpdate:(BOOL)arg7 nonCellularCandidateTimeout:(double)arg8;
- (int)getLoopbackIP:(struct tagIPPORT *)arg1;
- (int)getNextBestCandidate:(struct tagCANDIDATE *)arg1 callID:(unsigned int)arg2 isLocal:(int)arg3 IPPortToExclude:(struct tagIPPORT *)arg4;
- (id)getRemoteCIDForDstIPPort:(struct tagIPPORT *)arg1 callID:(unsigned int)arg2;
- (int)getRemoteICEVersion:(unsigned int)arg1 remoteICEVersion:(unsigned int *)arg2;
- (void)iceConnectedForCallID:(unsigned int)arg1 result:(struct tagCONNRESULT *)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(struct __CFData *)arg5 skeResult:(int)arg6;
- (void)iceNewCandidatesForCallID:(unsigned int)arg1 blob:(char *)arg2 size:(int)arg3 newCandidateVersion:(unsigned short)arg4;
- (id)init;
- (BOOL)ipPortStillExists:(struct tagIPPORT *)arg1 requiresWifi:(BOOL)arg2;
- (int)processRemoteInterfaceChange:(unsigned int)arg1 remoteData:(void *)arg2 remoteLen:(int)arg3;
- (int)processRemoteInterfaceChangeMessage:(unsigned int)arg1 resultKey:(struct tagCONNRESULT *)arg2 remoteData:(void *)arg3 remoteLen:(int)arg4 remoteCandidateVersion:(unsigned short)arg5;
- (void)receivedDataPacket:(char *)arg1 length:(int)arg2 forCallID:(unsigned int)arg3 encrypted:(BOOL)arg4;
- (void)registerDataReceivedHandler:(CDUnknownBlockType)arg1 forCallID:(unsigned int)arg2;
- (void)registerICEBlockForCallID:(unsigned int)arg1 connectedBlock:(CDUnknownBlockType)arg2 newCandidatesBlock:(CDUnknownBlockType)arg3;
- (int)sendData:(id)arg1 localIPPort:(struct tagIPPORT *)arg2 destinationIPPort:(struct tagIPPORT *)arg3 remoteCallID:(unsigned int)arg4 encrypted:(BOOL)arg5;
- (int)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(struct tagIPPORT *)arg2 destinationIPPort:(struct tagIPPORT *)arg3 oftType:(int)arg4;
- (void)setARPLHandler:(CDUnknownBlockType)arg1;
- (int)setForceIPv6ForCallID:(unsigned int)arg1;
- (int)setForceRelayForCallID:(unsigned int)arg1;
- (int)setICETimeout:(double)arg1;
- (int)setSKEState:(struct SKEStateOpaque *)arg1 forCallID:(unsigned int)arg2;
- (int)setupDTLSSecurity:(unsigned int)arg1 connectionResult:(struct tagCONNRESULT *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)startConnectionCheckForCallID:(unsigned int)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(struct __SecIdentity *)arg5 skeState:(struct SKEStateOpaque *)arg6 usedRelay:(int *)arg7;
- (int)stopConnectivityCheckForCallID:(unsigned int)arg1;
- (int)updateICERoleForCallID:(unsigned int)arg1 role:(int)arg2 remoteCallID:(unsigned int)arg3 sessionID:(struct __CFString *)arg4;
- (int)updateInterfaceList:(struct tagCONNRESULT *)arg1 shouldFilterCellInterface:(BOOL)arg2 isUpdateNeeded:(int *)arg3;
- (int)updateQoS:(BOOL)arg1;

@end

