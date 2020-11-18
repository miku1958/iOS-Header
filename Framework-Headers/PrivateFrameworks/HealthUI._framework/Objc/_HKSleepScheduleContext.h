//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayContext-Protocol.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKSampleType, NSString;
@protocol _HKContextChangeDelegate;

@interface _HKSleepScheduleContext : NSObject <HKOverlayContext>
{
    BOOL _isPrimaryContext;
    HKDisplayTypeContextItem *_lastUpdatedItem;
    HKDisplayType *_baseDisplayType;
    HKDisplayType *_overlayDisplayType;
    long long _overlayMode;
    HKInteractiveChartOverlayViewController *_overlayChartController;
    HKSampleType *_monitoringSampleType;
    id<_HKContextChangeDelegate> _contextChangeDelegate;
}

@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
@property (readonly, weak, nonatomic) id<_HKContextChangeDelegate> contextChangeDelegate; // @synthesize contextChangeDelegate=_contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPrimaryContext; // @synthesize isPrimaryContext=_isPrimaryContext;
@property (strong, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // @synthesize lastUpdatedItem=_lastUpdatedItem;
@property (strong, nonatomic) HKSampleType *monitoringSampleType; // @synthesize monitoringSampleType=_monitoringSampleType;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // @synthesize overlayChartController=_overlayChartController;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property (readonly, nonatomic) long long overlayMode; // @synthesize overlayMode=_overlayMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scheduleContextItemWithPhrase:(id)arg1;
- (id)_schedulePhraseFromChartPoints:(id)arg1;
- (id)_schedulePhraseFromUpperGoal:(id)arg1 lowerGoal:(id)arg2;
- (id)_stringFromGoalOffset:(id)arg1;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 overlayMode:(long long)arg4 isPrimaryContext:(BOOL)arg5 contextChangeDelegate:(id)arg6;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateWillChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (id)sampleTypeForDateRangeUpdates;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
