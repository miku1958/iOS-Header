//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation
{
    BOOL _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
}

@property (nonatomic) BOOL isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) CDUnknownBlockType subscriptionFetchedProgressBlock; // @synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock;
@property (strong, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property (strong, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;

@end
