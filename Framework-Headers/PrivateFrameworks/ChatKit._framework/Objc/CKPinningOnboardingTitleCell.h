//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel, UILayoutGuide;

@interface CKPinningOnboardingTitleCell : UICollectionViewCell
{
    BOOL _isInCollapsedState;
    long long _pinnedConversationViewLayoutStyle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILayoutGuide *_labelMarginGuide;
    NSLayoutConstraint *_leadingMarginLayoutConstraint;
    NSLayoutConstraint *_trailingMarginLayoutConstraint;
    NSLayoutConstraint *_subtitleSpacingConstraint;
}

@property (nonatomic) BOOL isInCollapsedState; // @synthesize isInCollapsedState=_isInCollapsedState;
@property (strong, nonatomic) UILayoutGuide *labelMarginGuide; // @synthesize labelMarginGuide=_labelMarginGuide;
@property (strong, nonatomic) NSLayoutConstraint *leadingMarginLayoutConstraint; // @synthesize leadingMarginLayoutConstraint=_leadingMarginLayoutConstraint;
@property (nonatomic) long long pinnedConversationViewLayoutStyle; // @synthesize pinnedConversationViewLayoutStyle=_pinnedConversationViewLayoutStyle;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) NSLayoutConstraint *subtitleSpacingConstraint; // @synthesize subtitleSpacingConstraint=_subtitleSpacingConstraint;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *trailingMarginLayoutConstraint; // @synthesize trailingMarginLayoutConstraint=_trailingMarginLayoutConstraint;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(long long)arg1;
- (double)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(long long)arg1;
- (id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(long long)arg1 inCollapsedState:(BOOL)arg2;
- (void)setPinnedConversationViewLayoutStyle:(long long)arg1 collapsedState:(BOOL)arg2;
- (void)updateConstraints;

@end

