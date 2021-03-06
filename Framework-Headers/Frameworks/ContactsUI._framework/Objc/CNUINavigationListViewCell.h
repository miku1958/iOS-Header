//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNUINavigationListStyleApplier, NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;
@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCell : UITableViewCell
{
    BOOL _accessoryControlExpanded;
    BOOL _contentViewConstraintsLoaded;
    BOOL _showSeparator;
    UIImageView *_accessoryImageView;
    UILabel *_subtitleLabel;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    id<CNUINavigationListStyle> _navigationListStyle;
    CNUINavigationListStyleApplier *_styleApplier;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelTrailingAnchorConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorConstraint;
    UILayoutGuide *_accessoryImageViewLayoutGuide;
    UILayoutGuide *_titleImageViewLayoutGuide;
}

@property (nonatomic, getter=isAccessoryControlExpanded) BOOL accessoryControlExpanded; // @synthesize accessoryControlExpanded=_accessoryControlExpanded;
@property (readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property (readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide; // @synthesize accessoryImageViewLayoutGuide=_accessoryImageViewLayoutGuide;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property (nonatomic, getter=isContentViewConstraintsLoaded) BOOL contentViewConstraintsLoaded; // @synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded;
@property (strong, nonatomic) id<CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property (nonatomic) BOOL showSeparator; // @synthesize showSeparator=_showSeparator;
@property (strong, nonatomic) CNUINavigationListStyleApplier *styleApplier; // @synthesize styleApplier=_styleApplier;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint; // @synthesize subtitleLabelFirstBaselineAnchorConstraint=_subtitleLabelFirstBaselineAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint; // @synthesize subtitleLabelLeadingAnchorConstraint=_subtitleLabelLeadingAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint; // @synthesize subtitleLabelTrailingAnchorConstraint=_subtitleLabelTrailingAnchorConstraint;
@property (readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property (readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide; // @synthesize titleImageViewLayoutGuide=_titleImageViewLayoutGuide;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint; // @synthesize titleLabelFirstBaselineAnchorConstraint=_titleLabelFirstBaselineAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint; // @synthesize titleLabelLeadingAnchorConstraint=_titleLabelLeadingAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint; // @synthesize titleLabelTrailingAnchorConstraint=_titleLabelTrailingAnchorConstraint;

+ (id)accessoryImageViewAccessibilityLabel;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (id)disclosureImage;
+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (id)reuseIdentifier;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
- (void).cxx_destruct;
- (void)applyStyle;
- (double)contentViewBottomAnchorConstraintConstant;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadContentView;
- (void)loadContentViewConstraints;
- (double)minimumContentHeight;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)setAccessoryControlExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (void)styleUpdated;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateVisualStateAnimated:(BOOL)arg1;

@end

