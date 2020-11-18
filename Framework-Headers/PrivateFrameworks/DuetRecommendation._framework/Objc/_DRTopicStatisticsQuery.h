//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import <DuetRecommendation/_DKExecutableQuery-Protocol.h>

@class NSObject, NSPredicate, _DRTopicInterestSummary;
@protocol OS_dispatch_queue;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    _DRTopicInterestSummary *_summary;
}

@property (strong) _DRTopicInterestSummary *summary; // @synthesize summary=_summary;

+ (id)countExpression;
+ (id)sumExpression;
+ (id)topicStatisticsQuery;
+ (id)topicStatisticsQueryWithFilter:(id)arg1;
- (void).cxx_destruct;
- (void)clearSummary;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithPredicate:(id)arg1;

@end
