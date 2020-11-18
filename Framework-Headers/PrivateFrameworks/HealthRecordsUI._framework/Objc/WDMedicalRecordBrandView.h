//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, WDBrandLogoView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordBrandView : UIView
{
    UILabel *_brandTitleLabel;
    UILabel *_brandSubtitleLabel;
    UILabel *_brandDetailLabel;
    id<HKClinicalBrandable> _brandable;
    WDClinicalSourcesDataProvider *_dataProvider;
    WDBrandLogoView *_logoView;
    UIStackView *_stackView;
    UIView *_logoAlignedContentView;
    UIStackView *_verticalSpecContainerView;
}

@property (readonly, nonatomic) UILabel *brandDetailLabel; // @synthesize brandDetailLabel=_brandDetailLabel;
@property (readonly, nonatomic) UILabel *brandSubtitleLabel; // @synthesize brandSubtitleLabel=_brandSubtitleLabel;
@property (readonly, nonatomic) UILabel *brandTitleLabel; // @synthesize brandTitleLabel=_brandTitleLabel;
@property (readonly, nonatomic) id<HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, nonatomic) UIView *logoAlignedContentView; // @synthesize logoAlignedContentView=_logoAlignedContentView;
@property (nonatomic) double logoSize;
@property (readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView; // @synthesize verticalSpecContainerView=_verticalSpecContainerView;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)arg1;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateLabelVisibility;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;

@end
