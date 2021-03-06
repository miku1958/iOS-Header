//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, WLKSubscriptionData;
@protocol OS_dispatch_queue;

@interface WLKSubscriptionStore : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_connection;
- (BOOL)_isSubscriptionSyncInProgress;
- (void)_setIsSubscriptionSyncInProgress:(BOOL)arg1;
- (id)cachedSubscriptionData;
- (void)dealloc;
- (void)fetchSubscriptionData:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)refreshSubscriptionDataIfNeeded;

@end

