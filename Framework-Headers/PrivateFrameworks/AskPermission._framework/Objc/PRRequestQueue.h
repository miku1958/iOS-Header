//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PRRequestDelegate;

@interface PRRequestQueue : NSObject
{
    id<PRRequestDelegate> _delegate;
    NSString *_identifier;
}

@property (weak, nonatomic) id<PRRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)_requestQueueForIdentifier:(id)arg1;
+ (id)defaultRequestQueue;
- (void).cxx_destruct;
- (id)_agentRemoteObjectInterface;
- (id)_agentXPCConnection;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_clearCachedRequests;
- (void)_deleteTestValueFromTouchIDKeychain;
- (void)_didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)_didStartNewPurchaseRequestWithInfo:(id)arg1;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (id)_pushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_registerPushToken;
- (void)_requestToBePresentedWithReply:(CDUnknownBlockType)arg1;
- (void)_userDidApproveRequestWithRequestID:(id)arg1;
- (void)_userDidDenyRequestWithRequestID:(id)arg1;
- (void)_writeTestValueToTouchIDKeychain;
- (void)addRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)agentRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)pendingRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
