//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HealthToolbox/HKDateCacheObserver-Protocol.h>
#import <HealthToolbox/WDDashboardCellForceTouchDelegate-Protocol.h>
#import <HealthToolbox/_HKWheelchairUseCharacteristicCacheObserver-Protocol.h>

@class HKActivitySummary, HKActivityTodayWidgetView, HKDateCache, HKGradientView, HKHealthStore, NSDateComponents, NSString, UILabel, UIView, WDProfile, _HKWheelchairUseCharacteristicCache;

__attribute__((visibility("hidden")))
@interface WDActivityTodayWidgetTableViewCell : UITableViewCell <HKDateCacheObserver, _HKWheelchairUseCharacteristicCacheObserver, WDDashboardCellForceTouchDelegate>
{
    HKActivityTodayWidgetView *_activityTodayWidgetView;
    HKActivitySummary *_currentActivitySummary;
    NSDateComponents *_currentDateComponents;
    HKGradientView *_backgroundGradientView;
    UIView *_titleSeparatorView;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    HKHealthStore *_healthStore;
    HKDateCache *_dateCache;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    WDProfile *_profile;
    BOOL _isWheelchairUser;
    unsigned long long _marginMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
@property (readonly) Class superclass;

+ (double)preferredCellHeight;
- (void).cxx_destruct;
- (id)_activeEnergyUnit;
- (id)_basalEnergyUnit;
- (void)_setIsWheelchairUser:(BOOL)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateActivitySummaryAnimated:(BOOL)arg1;
- (void)_updateDateLabel;
- (void)_updateTimeBasedUI;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (struct CGRect)forceTouchFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profile:(id)arg3;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2;

@end
