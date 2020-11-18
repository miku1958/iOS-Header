//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton
{
    BOOL _animatingTouchDown;
    CDUnknownBlockType _touchUpAnimationCompleteHandler;
    UIColor *_imageViewTintColor;
    UIColor *_backgroundImageColor;
    UIImageView *_transformingImageView;
}

@property (nonatomic) BOOL animatingTouchDown; // @synthesize animatingTouchDown=_animatingTouchDown;
@property (strong, nonatomic) UIColor *backgroundImageColor; // @synthesize backgroundImageColor=_backgroundImageColor;
@property (strong, nonatomic) UIColor *imageViewTintColor; // @synthesize imageViewTintColor=_imageViewTintColor;
@property (copy, nonatomic) CDUnknownBlockType touchUpAnimationCompleteHandler; // @synthesize touchUpAnimationCompleteHandler=_touchUpAnimationCompleteHandler;
@property (strong, nonatomic) UIImageView *transformingImageView; // @synthesize transformingImageView=_transformingImageView;

+ (id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;
- (void).cxx_destruct;
- (void)_animateHighlighted:(BOOL)arg1;
- (void)_setupInternalTouchActions;
- (void)_touchDown;
- (void)_touchUp;
- (struct CGRect)backgroundImageFrame;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)turnIntoSolidDotWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end

