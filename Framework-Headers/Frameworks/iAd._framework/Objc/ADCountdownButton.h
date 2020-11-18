//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIImage, UIImageView, UIView;

@interface ADCountdownButton : UIControl
{
    BOOL _dimmed;
    UIImage *_iconImage;
    UIImage *_dimmedIconImage;
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UIView *_outlineView;
    CAShapeLayer *_outlineProgressLayer;
}

@property (strong, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property (strong, nonatomic) UIImage *dimmedIconImage; // @synthesize dimmedIconImage=_dimmedIconImage;
@property (strong, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (strong, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) CAShapeLayer *outlineProgressLayer; // @synthesize outlineProgressLayer=_outlineProgressLayer;
@property (strong, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;

+ (id)_closeBoxImage;
+ (id)_inactiveCloseBoxImage;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (double)countdownProgress;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (void)setCountdownProgress:(double)arg1;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
