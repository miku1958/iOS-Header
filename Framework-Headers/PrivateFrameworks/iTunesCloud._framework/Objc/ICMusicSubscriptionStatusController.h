//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionStatusController : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedStatusController;
- (void).cxx_destruct;
- (void)_subscriptionStatusCacheDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)disableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enablePeriodicSubscriptionRefresh;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
