//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STCandyBarView, STDeviceUnlockStateListener, STNoUsageDataView, STTopUsageItemsView, STUnlockForContentView, STUsageTotalDeltaView, UILabel;

@interface STOverallUsageSummaryCell : STTableCell
{
    BOOL _monitorDeviceLockState;
    BOOL _isVibrancyEnabled;
    BOOL _isWidget;
    UILabel *_screenTimeLabel;
    STUsageTotalDeltaView *_deltaView;
    STCandyBarView *_candyBarView;
    STTopUsageItemsView *_topItemsView;
    STNoUsageDataView *_noUsageDataView;
    STUnlockForContentView *_unlockView;
    STDeviceUnlockStateListener *_lockStateListener;
}

@property (strong, nonatomic) STCandyBarView *candyBarView; // @synthesize candyBarView=_candyBarView;
@property (strong, nonatomic) STUsageTotalDeltaView *deltaView; // @synthesize deltaView=_deltaView;
@property (readonly, nonatomic) BOOL isVibrancyEnabled; // @synthesize isVibrancyEnabled=_isVibrancyEnabled;
@property (readonly, nonatomic) BOOL isWidget; // @synthesize isWidget=_isWidget;
@property (strong, nonatomic) STDeviceUnlockStateListener *lockStateListener; // @synthesize lockStateListener=_lockStateListener;
@property (nonatomic) BOOL monitorDeviceLockState; // @synthesize monitorDeviceLockState=_monitorDeviceLockState;
@property (strong, nonatomic) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property (strong, nonatomic) UILabel *screenTimeLabel; // @synthesize screenTimeLabel=_screenTimeLabel;
@property (strong, nonatomic) STTopUsageItemsView *topItemsView; // @synthesize topItemsView=_topItemsView;
@property (strong, nonatomic) STUnlockForContentView *unlockView; // @synthesize unlockView=_unlockView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 isVibrancyEnabled:(BOOL)arg4 isWidget:(BOOL)arg5;
- (void)refreshWithCoordinator:(id)arg1;
- (void)setValue:(id)arg1;
- (void)stOverallUsageSummaryCellCommonInit;
- (void)startMonitoringDeviceLockChanges;
- (void)stopMonitoringDeviceLockChanges;
- (void)updateViewsForLockState:(BOOL)arg1;

@end

