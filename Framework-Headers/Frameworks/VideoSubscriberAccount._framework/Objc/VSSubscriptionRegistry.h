//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSSubscriptionServiceProtocol-Protocol.h>

@class NSString, VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>
{
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionPersistentContainer *_persistentContainer;
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSSubscriptionPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property (strong, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
@property (strong, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchRequest;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(BOOL)arg3;
- (BOOL)_saveChangesToContext:(id)arg1;
- (long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2;
- (id)_securityTaskForCurrentConnection;
- (void)_sendRemoteNotification;
- (id)_subscriptionEntity;
- (void)dealloc;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)registerSubscription:(id)arg1;
- (void)removeSubscriptions:(id)arg1;

@end
