//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    CDUnknownBlockType mWillModifyBlock;
}

@property (copy, nonatomic) CDUnknownBlockType willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;

+ (BOOL)chartTypeUsesSeriesLimiting:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4;
+ (id)upgraderWithChartInfo:(id)arg1;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_b1c75024 *)arg1 toLayoutSettings:(const CDStruct_b1c75024 *)arg2;
- (void)configureScene:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_b1c75024)arg1;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_b1c75024 *)arg1 toLayoutSettings:(const CDStruct_b1c75024 *)arg2;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (void)mutateInfoWithMutations:(id)arg1;
- (unsigned long long)numberOfSeries;
- (CDStruct_b1c75024)oldLayoutSettings;
- (CDStruct_b1c75024)p_oldLayoutSettingsForSpice:(BOOL)arg1;
- (void)upgradeForSpice:(BOOL)arg1 naturalSize:(struct CGSize)arg2;
- (CDStruct_b1c75024)upgradedLayoutSettings;

@end

