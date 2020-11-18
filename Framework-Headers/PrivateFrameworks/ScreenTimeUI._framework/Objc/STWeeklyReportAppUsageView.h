//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, STUsageReport, UILabel, UIStackView;

@interface STWeeklyReportAppUsageView : UIView
{
    UILabel *_titleLabel;
    UIStackView *_appImageStackView;
    STUsageReport *_report;
    NSMutableArray *_topEightImageItems;
    NSMutableDictionary *_dimensionByUsageItem;
}

@property (strong, nonatomic) UIStackView *appImageStackView; // @synthesize appImageStackView=_appImageStackView;
@property (strong, nonatomic) NSMutableDictionary *dimensionByUsageItem; // @synthesize dimensionByUsageItem=_dimensionByUsageItem;
@property (strong, nonatomic) STUsageReport *report; // @synthesize report=_report;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSMutableArray *topEightImageItems; // @synthesize topEightImageItems=_topEightImageItems;

- (void).cxx_destruct;
- (id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2;
- (void)_didFetchIcon:(id)arg1;
- (id)initWithUsageReport:(id)arg1;

@end

