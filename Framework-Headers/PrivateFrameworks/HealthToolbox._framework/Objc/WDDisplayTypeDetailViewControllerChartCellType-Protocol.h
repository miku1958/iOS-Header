//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@protocol WDDashboardCellChartSource, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource;

@protocol WDDisplayTypeDetailViewControllerChartCellType <NSObject>

@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) unsigned long long marginMode;

- (void)setPrimaryValueSource:(id<WDDashboardCellPrimaryValueSource>)arg1 secondaryValueSource:(id<WDDashboardCellSecondaryValueSource>)arg2 chartSource:(id<WDDashboardCellChartSource>)arg3;
- (void)setTimeScope:(long long)arg1;
@end

