//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSSet, NSURL;
@protocol BMMiningTaskDelegate;

@interface BMMiningTask : NSObject
{
    id<BMMiningTaskDelegate> _delegate;
    long long _completionStatus;
    NSMutableDictionary *_coreAnalyticsDict;
    unsigned long long _rulePersistBatchSize;
    NSDate *_start;
    NSURL *_storageURL;
    NSSet *_types;
    NSSet *_targetTypes;
    double _samplingInterval;
    unsigned long long _absoluteSupport;
    double _confidence;
}

@property (readonly, nonatomic) unsigned long long absoluteSupport; // @synthesize absoluteSupport=_absoluteSupport;
@property (nonatomic) long long completionStatus; // @synthesize completionStatus=_completionStatus;
@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (strong, nonatomic) NSMutableDictionary *coreAnalyticsDict; // @synthesize coreAnalyticsDict=_coreAnalyticsDict;
@property (weak, nonatomic) id<BMMiningTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long rulePersistBatchSize; // @synthesize rulePersistBatchSize=_rulePersistBatchSize;
@property (readonly, nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property (copy, nonatomic) NSDate *start; // @synthesize start=_start;
@property (readonly, copy, nonatomic) NSURL *storageURL; // @synthesize storageURL=_storageURL;
@property (readonly, copy, nonatomic) NSSet *targetTypes; // @synthesize targetTypes=_targetTypes;
@property (readonly, copy, nonatomic) NSSet *types; // @synthesize types=_types;

+ (id)supergreenMiningTask;
- (void).cxx_destruct;
- (void)finishWithCompletionStatus:(long long)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7;
- (void)mine;
- (void)terminateEarly;

@end
