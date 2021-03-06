//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HFAppleMusicHomeAccountManager : NSObject
{
    NSMutableDictionary *_homeIdentifierToMediaAccountMapping;
    NSObject<OS_dispatch_queue> *_dataModelUpdateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueryQueue;
    NSMutableDictionary *_homeIdentifierToActiveAMSQueriesMapping;
    NSMutableDictionary *_homeIdentifierToFuturePromiseMapping;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueryQueue; // @synthesize concurrentQueryQueue=_concurrentQueryQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue; // @synthesize dataModelUpdateQueue=_dataModelUpdateQueue;
@property (strong, nonatomic) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping; // @synthesize homeIdentifierToActiveAMSQueriesMapping=_homeIdentifierToActiveAMSQueriesMapping;
@property (strong, nonatomic) NSMutableDictionary *homeIdentifierToFuturePromiseMapping; // @synthesize homeIdentifierToFuturePromiseMapping=_homeIdentifierToFuturePromiseMapping;
@property (strong, nonatomic) NSMutableDictionary *homeIdentifierToMediaAccountMapping; // @synthesize homeIdentifierToMediaAccountMapping=_homeIdentifierToMediaAccountMapping;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_fetchMediaAccountForHome:(id)arg1;
- (void)_finishPendingPromisesWithMediaAccountInfo:(id)arg1 forHome:(id)arg2;
- (id)_futureForQueryLimitForHome:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)executeHomeMediaAccountFetchForAllHomes;
- (id)executeHomeMediaAccountFetchForHome:(id)arg1;
- (void)getHomeMediaAccountForHome:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)mediaAccountForHomeIdentifier:(id)arg1;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

