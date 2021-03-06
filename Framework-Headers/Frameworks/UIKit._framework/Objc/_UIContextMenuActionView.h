//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionView : UIView
{
    BOOL _needsConstraintRebuild;
    unsigned long long _options;
    UIStackView *_labelStackView;
    UILabel *_subtitleLabel;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
    NSArray *_managedConstraints;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastBaselineToBottom;
    NSLayoutConstraint *_leadingToLabelStackViewLeading;
    NSLayoutConstraint *_leadingViewCenterX;
    NSLayoutConstraint *_trailingViewCenterXToTrailing;
    NSLayoutConstraint *_labelStackViewTrailingToTrailingViewCenterX;
    NSLayoutConstraint *_nonSymbolImageWidth;
    NSLayoutConstraint *_nonSymbolImageHeight;
    NSLayoutConstraint *_minHeightConstraint;
    UILabel *_titleLabel;
}

@property (strong, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property (strong, nonatomic) NSLayoutConstraint *labelStackViewTrailingToTrailingViewCenterX; // @synthesize labelStackViewTrailingToTrailingViewCenterX=_labelStackViewTrailingToTrailingViewCenterX;
@property (strong, nonatomic) NSLayoutConstraint *lastBaselineToBottom; // @synthesize lastBaselineToBottom=_lastBaselineToBottom;
@property (strong, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property (strong, nonatomic) NSLayoutConstraint *leadingToLabelStackViewLeading; // @synthesize leadingToLabelStackViewLeading=_leadingToLabelStackViewLeading;
@property (strong, nonatomic) NSLayoutConstraint *leadingViewCenterX; // @synthesize leadingViewCenterX=_leadingViewCenterX;
@property (strong, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property (strong, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property (nonatomic) BOOL needsConstraintRebuild; // @synthesize needsConstraintRebuild=_needsConstraintRebuild;
@property (strong, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // @synthesize nonSymbolImageHeight=_nonSymbolImageHeight;
@property (strong, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // @synthesize nonSymbolImageWidth=_nonSymbolImageWidth;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *topToFirstBaseline; // @synthesize topToFirstBaseline=_topToFirstBaseline;
@property (strong, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property (readonly, nonatomic) UIView *trailingView;
@property (strong, nonatomic) NSLayoutConstraint *trailingViewCenterXToTrailing; // @synthesize trailingViewCenterXToTrailing=_trailingViewCenterXToTrailing;

- (void).cxx_destruct;
- (id)_contentImageViewForImage:(id)arg1;
- (id)_imageTintColor;
- (void)_installLabelStackViewIfNeeded;
- (void)_installSubtitleLabelIfNeeded;
- (void)_installTitleLabelIfNeeded;
- (struct CGSize)_maxImageSize;
- (double)_primaryContentAlphaForCurrentState;
- (id)_primaryContentColorForCurrentState;
- (id)_selectionImage;
- (void)_setNeedsConstraintRebuild;
- (id)_subtitleLabelFilterForCurrentTraits;
- (id)_subtitleTextColor;
- (id)_symbolConfigurationForCurrentTraits;
- (void)_updateAppearanceForStateChange;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)arg1;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateTitleLabelNumberOfLines;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

