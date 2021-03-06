//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKDisplayCategory, HKDisplayType, NSAttributedString, NSDate, NSString, UIFont;
@protocol WDDashboardCellPrimaryValueSourceDelegate;

@protocol WDDashboardCellPrimaryValueSource

@property (readonly, nonatomic) HKDisplayCategory *displayCategory;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSString *primaryValueContextualText;
@property (weak, nonatomic) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;

- (NSAttributedString *)mostRecentValueWithValueFont:(UIFont *)arg1 unitFont:(UIFont *)arg2;
@end

