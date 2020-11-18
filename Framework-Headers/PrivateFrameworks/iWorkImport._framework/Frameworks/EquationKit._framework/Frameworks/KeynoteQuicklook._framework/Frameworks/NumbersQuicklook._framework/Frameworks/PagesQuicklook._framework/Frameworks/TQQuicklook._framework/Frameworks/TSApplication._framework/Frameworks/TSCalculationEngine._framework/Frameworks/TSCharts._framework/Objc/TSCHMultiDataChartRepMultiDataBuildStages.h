//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep *mRep;
    struct _NSRange mStages;
    double mTotalDuration;
    double mDuration;
    unsigned long long mCurrentStage;
}

@property (readonly, nonatomic) unsigned long long currentStage; // @synthesize currentStage=mCurrentStage;
@property (readonly, nonatomic) double duration; // @synthesize duration=mDuration;

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;
- (void).cxx_destruct;
- (void)advanceStage;
- (id)chartLayout;
- (void)clearParent;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)hasStage;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;
- (BOOL)isBackgroundOnly;
- (BOOL)isBackgroundOnlyStage:(unsigned long long)arg1;
- (BOOL)isFadingInLayers;
- (BOOL)isLastStageBackgroundOnly;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)setupLayoutDataSetIndexForNextStage;

@end
