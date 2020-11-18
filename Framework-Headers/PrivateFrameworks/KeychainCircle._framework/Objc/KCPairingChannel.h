//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KCPairingChannelContext, NSXPCConnection;

@interface KCPairingChannel : NSObject
{
    BOOL _needInitialSync;
    BOOL _initator;
    BOOL _acceptorWillSendInitialSyncCredentials;
    unsigned int _counter;
    KCPairingChannelContext *_peerVersionContext;
    NSXPCConnection *_connection;
    CDUnknownBlockType _nextState;
}

@property BOOL acceptorWillSendInitialSyncCredentials; // @synthesize acceptorWillSendInitialSyncCredentials=_acceptorWillSendInitialSyncCredentials;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property unsigned int counter; // @synthesize counter=_counter;
@property BOOL initator; // @synthesize initator=_initator;
@property (readonly) BOOL needInitialSync; // @synthesize needInitialSync=_needInitialSync;
@property (copy) CDUnknownBlockType nextState; // @synthesize nextState=_nextState;
@property KCPairingChannelContext *peerVersionContext; // @synthesize peerVersionContext=_peerVersionContext;

+ (BOOL)isSupportedPlatform;
+ (id)pairingChannelAcceptor:(id)arg1;
+ (id)pairingChannelInitiator:(id)arg1;
- (void).cxx_destruct;
- (void)acceptorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)compressData:(id)arg1;
- (id)decompressData:(id)arg1;
- (BOOL)ensureControlChannel;
- (void)exchangePacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)exchangePacket:(id)arg1 complete:(BOOL *)arg2 error:(id *)arg3;
- (id)initAsInitiator:(BOOL)arg1 version:(id)arg2;
- (void)initatorCompleteSecondPacket:(CDUnknownBlockType)arg1;
- (void)initatorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorFourthPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)oneStepTooMany:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setNextStateError:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setXPCConnectionObject:(id)arg1;
- (void)validateStart:(CDUnknownBlockType)arg1;

@end

