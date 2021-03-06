//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKOverlayRoomViewController.h>

#import <HealthUI/HKCurrentValueViewDataSourceDelegate-Protocol.h>
#import <HealthUI/_HKCardioFitnessClassificationContextDelegate-Protocol.h>

@class HKCardioFitnessLevelData, HKDisplayType, NSMutableArray, NSNumber, NSString;
@protocol HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate;

@interface HKOverlayRoomCardioFitnessViewController : HKOverlayRoomViewController <_HKCardioFitnessClassificationContextDelegate, HKCurrentValueViewDataSourceDelegate>
{
    NSNumber *_preferredOverlayIndex;
    NSMutableArray *_contextDelegates;
    long long _preferredOverlay;
    HKCardioFitnessLevelData *_initialCardioFitnessLevelData;
    HKDisplayType *_representativeDisplayType;
    id<HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> _analyticsDelegate;
    unsigned long long _interactiveChartOptions;
}

@property (readonly, weak, nonatomic) id<HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property (strong, nonatomic) NSMutableArray *contextDelegates; // @synthesize contextDelegates=_contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKCardioFitnessLevelData *initialCardioFitnessLevelData; // @synthesize initialCardioFitnessLevelData=_initialCardioFitnessLevelData;
@property (nonatomic) unsigned long long interactiveChartOptions; // @synthesize interactiveChartOptions=_interactiveChartOptions;
@property (readonly, nonatomic) long long preferredOverlay; // @synthesize preferredOverlay=_preferredOverlay;
@property (strong, nonatomic) HKDisplayType *representativeDisplayType; // @synthesize representativeDisplayType=_representativeDisplayType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyticStringForContextItem:(id)arg1;
- (id)_buildCardioFitnessLevelDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 cardioFitnessLevel:(long long)arg4;
- (long long)_cardioFitnessLevelForPreferredOverlay:(long long)arg1;
- (id)_configureContextSectionsForFullMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (long long)_preferredOverlayForCardioFitnessLevel:(long long)arg1;
- (void)contextDidUpdate:(id)arg1 withCardioFitnessLevelData:(id)arg2;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (void)didChangeFromContextItem:(id)arg1 toContextItem:(id)arg2;
- (BOOL)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 analyticsDelegate:(id)arg5 interactiveChartOptions:(unsigned long long)arg6;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)showAllFiltersButtonTitle;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;

@end

