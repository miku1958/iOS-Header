//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayContext-Protocol.h>

@class HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, HKSampleType, NSMutableDictionary, NSString;

@interface HKOverlayRoomViewControllerIntegratedContext : NSObject <HKOverlayContext>
{
    long long _overlayMode;
    HKInteractiveChartOverlayViewController *_overlayChartController;
    HKOverlayRoomApplicationItems *_applicationItems;
    HKSampleType *_monitoringSampleType;
    NSMutableDictionary *_displayTypesForTimeScopes;
    HKDisplayTypeContextItem *_lastUpdatedContextItem;
}

@property (strong, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // @synthesize applicationItems=_applicationItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *displayTypesForTimeScopes; // @synthesize displayTypesForTimeScopes=_displayTypesForTimeScopes;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem; // @synthesize lastUpdatedContextItem=_lastUpdatedContextItem;
@property (strong, nonatomic) HKSampleType *monitoringSampleType; // @synthesize monitoringSampleType=_monitoringSampleType;
@property (strong, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // @synthesize overlayChartController=_overlayChartController;
@property (nonatomic) long long overlayMode; // @synthesize overlayMode=_overlayMode;
@property (readonly) Class superclass;

+ (id)distributionContextWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 optionalDelegate:(id)arg5 options:(long long)arg6 mode:(long long)arg7;
+ (id)quantityContextWithIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6;
- (void).cxx_destruct;
- (id)_buildMonitoringSampleType;
- (id)_minMaxValueFromChartPoints:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3;
- (BOOL)_obsoleteDateRange:(id)arg1;
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (id)contextItemForLastUpdate;
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)representativeDisplayType;
- (id)sampleTypeForDateRangeUpdates;
- (id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;

@end
