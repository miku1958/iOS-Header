//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation
{
    BOOL _isFetchAllSubscriptionsOperation;
    CDUnknownBlockType _fetchSubscriptionCompletionBlock;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property (copy, nonatomic) CDUnknownBlockType fetchSubscriptionCompletionBlock; // @synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property (strong, nonatomic) NSMutableDictionary *subscriptionErrors; // @synthesize subscriptionErrors=_subscriptionErrors;
@property (copy, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property (strong, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property (strong, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;

+ (id)fetchAllSubscriptionsOperation;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSubscriptionIDs:(id)arg1;
- (void)performCKOperation;

@end

