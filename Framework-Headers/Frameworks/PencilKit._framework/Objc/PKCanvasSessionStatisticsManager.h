//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKCanvasSessionStatisticsManager : NSObject
{
    NSMutableDictionary *_featureDictionary;
}

+ (id)sharedStatisticsManager;
- (void).cxx_destruct;
- (id)_featureUsageFlattenedDictionary;
- (void)_messageHandwritingAnalyticsWithProxyBlock:(CDUnknownBlockType)arg1;
- (void)_sendUsageSessionStatistics;
- (void)_testManuallyTriggeringDailyStatistics;
- (void)didCopyAsText;
- (void)didDrawStroke;
- (void)didUseDataDetectors;
- (void)didUseInsertSpace;
- (void)didUseSmartSelection;
- (void)didUseSmartShapes;
- (void)endSession;
- (void)logFeatureUsed:(id)arg1;

@end
