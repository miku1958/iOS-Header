//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HKElectrocardiogramInfoView : UIStackView
{
    UILabel *_heartRateLabel;
    UILabel *_bodyLabel;
    NSLayoutConstraint *_heartRateLabelLeadingConstraint;
    NSLayoutConstraint *_heartRateFirstBaselineConstraint;
    NSLayoutConstraint *_heartImageViewHeightConstraint;
}

@property (strong, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property (strong, nonatomic) NSString *bodyText;
@property (strong, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint; // @synthesize heartImageViewHeightConstraint=_heartImageViewHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *heartRateFirstBaselineConstraint; // @synthesize heartRateFirstBaselineConstraint=_heartRateFirstBaselineConstraint;
@property (strong, nonatomic) UILabel *heartRateLabel; // @synthesize heartRateLabel=_heartRateLabel;
@property (strong, nonatomic) NSLayoutConstraint *heartRateLabelLeadingConstraint; // @synthesize heartRateLabelLeadingConstraint=_heartRateLabelLeadingConstraint;
@property (strong, nonatomic) NSString *heartRateText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)_bodyView;
- (id)_heartRateView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

