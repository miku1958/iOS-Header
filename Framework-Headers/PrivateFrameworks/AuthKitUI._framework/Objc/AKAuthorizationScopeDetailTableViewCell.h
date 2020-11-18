//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

@interface AKAuthorizationScopeDetailTableViewCell : UITableViewCell
{
    BOOL _internalChecked;
    UILabel *_scopeLabel;
    UILabel *_mainLabel;
    UILabel *_mainDetailLabel;
    UIImageView *_leadingCheckmarkView;
    UILayoutGuide *_mainGuide;
    UILayoutGuide *_mainLabelFirstLineGuide;
    UILayoutGuide *_scopeLabelFirstLineGuide;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_mainLabelLeadingConstraint;
    unsigned long long _internalCheckmarkStyle;
}

@property (nonatomic, getter=isChecked) BOOL checked;
@property (nonatomic) unsigned long long checkmarkStyle;
@property (nonatomic, getter=internalIsChecked) BOOL internalChecked; // @synthesize internalChecked=_internalChecked;
@property (nonatomic) unsigned long long internalCheckmarkStyle; // @synthesize internalCheckmarkStyle=_internalCheckmarkStyle;
@property (strong, nonatomic) UIImageView *leadingCheckmarkView; // @synthesize leadingCheckmarkView=_leadingCheckmarkView;
@property (readonly, nonatomic) UILabel *mainDetailLabel; // @synthesize mainDetailLabel=_mainDetailLabel;
@property (readonly, nonatomic) UILayoutGuide *mainGuide; // @synthesize mainGuide=_mainGuide;
@property (readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property (readonly, nonatomic) UILayoutGuide *mainLabelFirstLineGuide; // @synthesize mainLabelFirstLineGuide=_mainLabelFirstLineGuide;
@property (readonly, nonatomic) NSLayoutConstraint *mainLabelLeadingConstraint; // @synthesize mainLabelLeadingConstraint=_mainLabelLeadingConstraint;
@property (nonatomic) double minimumHeight;
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property (readonly, nonatomic) UILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property (readonly, nonatomic) UILayoutGuide *scopeLabelFirstLineGuide; // @synthesize scopeLabelFirstLineGuide=_scopeLabelFirstLineGuide;

- (void).cxx_destruct;
- (id)_checkmarkCircleImage;
- (id)_checkmarkCircleImageViewChecked:(BOOL)arg1;
- (id)_checkmarkImage;
- (id)_checkmarkImageView;
- (id)_circleImage;
- (id)_clearImage;
- (BOOL)_isLTR;
- (id)_newLabel;
- (id)_selectedCheckmarkCircleImageView;
- (void)_setCheckMarkStyleLeadingChecked:(BOOL)arg1;
- (void)_setCheckmarkStyleTrailingChecked:(BOOL)arg1;
- (void)_setSeparatorIndentToMainLabel;
- (void)_setupLayout;
- (void)_setupViews;
- (id)_unselectedCheckmarkCircleImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
