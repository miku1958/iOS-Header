//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTaskOperationNotificationDelegate-Protocol.h>
#import <Catalyst/CATTransportDelegate-Protocol.h>

@class CATOperationQueue, CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol CATTaskSessionDelegate, OS_dispatch_group;

@interface CATTaskSession : NSObject <CATTransportDelegate, CATTaskOperationNotificationDelegate>
{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    NSMutableSet *mOperations;
    NSMutableDictionary *mOperationByRemoteUUID;
    NSMutableArray *mEnqueuedMessages;
    CATTaskSession *mStrongSelf;
    NSHashTable *mOrphanedTransports;
    CATOperationQueue *mOrphanedOperationQueue;
    NSDictionary *mPreviousSessionInfo;
    NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
    CATOperationQueue *mDelegationQueue;
    NSUUID *_sessionUUID;
    id<CATTaskSessionDelegate> _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

@property (copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CATTaskSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (void)abandonTransport;
- (void)acceptConnection;
- (id)captureTransport;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)clientDidResumeWithMessage:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)connectWithTransportFromTaskSession:(id)arg1;
- (void)dealloc;
- (void)delegateDidConnect;
- (void)delegateDidDisconnect;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidInvalidate;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegateEnqueueOperation:(id)arg1;
- (id)delegatePrepareOperationWithRequest:(id)arg1 error:(id *)arg2;
- (BOOL)delegateShouldAcceptConnection;
- (void)delegateWillInvalidate;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)delegatedidReceiveNotificationWithName:(id)arg1;
- (void)didCompleteSendForMessage:(id)arg1;
- (void)discardPreviousSessionInfo;
- (void)disconnect;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)evaluateConnectionWithResumeMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (void)localOperationDidFinish:(id)arg1;
- (void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2;
- (void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processCancelMessage:(id)arg1;
- (void)processFetchProgressMessage:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)processStartMessage:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)rejectConnection;
- (void)restorePreviousSessionInfo;
- (void)resumeCapturedTransportFromTaskSession:(id)arg1;
- (void)resumeTransport:(id)arg1;
- (void)savePreviousSessionInfo;
- (void)sendMessage:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)sendResumedMessage;
- (void)sessionDidInvalidate;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;

@end

