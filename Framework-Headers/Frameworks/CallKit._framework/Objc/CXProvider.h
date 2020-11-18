//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXActionDelegate-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class CXProviderConfiguration, NSArray, NSMutableArray, NSString;
@protocol CXProviderDelegate, CXProviderDelegatePrivate, CXProviderHostProtocol, OS_dispatch_queue;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol>
{
    CXProviderConfiguration *_configuration;
    id<CXProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableArray *_mutablePendingTransactions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (copy, nonatomic) CXProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CXProviderHostProtocol> hostProtocolDelegate;
@property (strong, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) id<CXProviderDelegatePrivate> privateDelegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) BOOL requiresProxyingAVAudioSessionState;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_updatePendingTransactions;
- (void)actionCompleted:(id)arg1;
- (void)addIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)callWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)callWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;
- (void)callWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;
- (void)callWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;
- (void)callWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1;
- (void)handleConnectionInvalidation;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (void)outgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)outgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)outgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)outgoingCallWithUUID:(id)arg1 startedOutgoingAtDate:(id)arg2;
- (id)pendingActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)registerCurrentConfiguration;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)sendProviderDidBegin;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end

