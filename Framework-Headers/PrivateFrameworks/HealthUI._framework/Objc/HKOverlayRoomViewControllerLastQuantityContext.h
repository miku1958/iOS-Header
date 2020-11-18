//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayContext-Protocol.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayNamedDataSource, HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, NSString;

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext>
{
    long long _overlayMode;
    HKInteractiveChartOverlayViewController *_overlayChartController;
    HKOverlayRoomApplicationItems *_applicationItems;
    HKDisplayType *_overlayDisplayType;
    HKDisplayTypeContextItem *_lastUpdatedContextItem;
    HKInteractiveChartOverlayNamedDataSource *_cacheDataSource;
}

@property (strong, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // @synthesize applicationItems=_applicationItems;
@property (strong, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource; // @synthesize cacheDataSource=_cacheDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem; // @synthesize lastUpdatedContextItem=_lastUpdatedContextItem;
@property (strong, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // @synthesize overlayChartController=_overlayChartController;
@property (strong, nonatomic) HKDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property (nonatomic) long long overlayMode; // @synthesize overlayMode=_overlayMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildContextWithTime:(id)arg1 value:(id)arg2;
- (id)_buildFullTitle:(id)arg1;
- (id)_buildLastQuantityDisplayType;
- (id)_buildLastValueDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_colorForDisplayType:(id)arg1;
- (id)_stringValueFromQuantity:(id)arg1 unit:(id)arg2;
- (id)contextItemForLastUpdate;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (void)invalidateContextItem;
- (BOOL)isEqual:(id)arg1;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateDidChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
