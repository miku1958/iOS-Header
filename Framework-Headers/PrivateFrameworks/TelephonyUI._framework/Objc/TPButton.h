//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton
{
    int _color;
    _UIBackdropView *_backdropView;
    BOOL _blursBackground;
    BOOL _roundsCorners;
    BOOL _usesOverlayBlendingForContents;
}

@property (nonatomic) BOOL blursBackground; // @synthesize blursBackground=_blursBackground;
@property (nonatomic) BOOL roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property (nonatomic) BOOL usesOverlayBlendingForContents; // @synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents;

+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)arg1;
+ (id)defaultStandardFont;
+ (double)defaultWidthForCenterButton;
+ (double)defaultWidthForSideButton;
+ (double)maxWidthForCenterButton;
- (void).cxx_destruct;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (int)buttonColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect)arg4;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonColor:(int)arg1;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconVerticalOffset:(double)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTitleFontSize:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitleImagePadding:(double)arg1;
- (void)setTitleVerticalOffset:(double)arg1;

@end
