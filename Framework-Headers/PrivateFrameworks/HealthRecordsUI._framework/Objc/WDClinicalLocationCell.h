//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, WDBrandLogoView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

__attribute__((visibility("hidden")))
@interface WDClinicalLocationCell : UITableViewCell
{
    id<HKClinicalBrandable> _brandable;
    WDClinicalSourcesDataProvider *_dataProvider;
    WDBrandLogoView *_logoView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UIStackView *_stackView;
}

@property (readonly, nonatomic) id<HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
- (void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
- (void)_setUpConstraints;
- (void)_setupSubviews;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willDisplay;

@end

