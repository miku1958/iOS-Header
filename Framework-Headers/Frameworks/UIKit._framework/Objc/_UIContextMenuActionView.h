//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionView : UIView
{
    BOOL _disabled;
    BOOL _destructive;
    UIStackView *_labelStackView;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastBaselineToBottom;
    NSLayoutConstraint *_trailingViewCenterXToTrailing;
    NSLayoutConstraint *_labelStackViewTrailingToTrailingViewCenterX;
    NSLayoutConstraint *_nonSymbolImageWidth;
    NSLayoutConstraint *_nonSymbolImageHeight;
    UILabel *_titleLabel;
}

@property (nonatomic) BOOL destructive; // @synthesize destructive=_destructive;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property (strong, nonatomic) NSLayoutConstraint *labelStackViewTrailingToTrailingViewCenterX; // @synthesize labelStackViewTrailingToTrailingViewCenterX=_labelStackViewTrailingToTrailingViewCenterX;
@property (strong, nonatomic) NSLayoutConstraint *lastBaselineToBottom; // @synthesize lastBaselineToBottom=_lastBaselineToBottom;
@property (strong, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // @synthesize nonSymbolImageHeight=_nonSymbolImageHeight;
@property (strong, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // @synthesize nonSymbolImageWidth=_nonSymbolImageWidth;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *topToFirstBaseline; // @synthesize topToFirstBaseline=_topToFirstBaseline;
@property (readonly, nonatomic) UIView *trailingView;
@property (strong, nonatomic) NSLayoutConstraint *trailingViewCenterXToTrailing; // @synthesize trailingViewCenterXToTrailing=_trailingViewCenterXToTrailing;

- (void).cxx_destruct;
- (id)_colorReflectingActionStateForColor:(id)arg1;
- (id)_imageTintColor;
- (id)_imageViewForImage:(id)arg1;
- (struct CGSize)_maxImageSize;
- (id)_primaryTitleLabel;
- (id)_subtitleLabel;
- (id)_subtitleLabelFilterForCurrentTraits;
- (id)_subtitleTextColor;
- (void)_updateAppearanceForStateChange;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
