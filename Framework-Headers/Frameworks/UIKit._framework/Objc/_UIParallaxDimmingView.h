//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIParallaxDimmingView : UIView
{
    UIImageView *leftEdgeFade;
    BOOL _backgroundIsDimmed;
    UIColor *_dimmingColor;
    UIView *_addingSubview;
}

@property (strong, nonatomic) UIView *addingSubview; // @synthesize addingSubview=_addingSubview;
@property (nonatomic) BOOL backgroundIsDimmed; // @synthesize backgroundIsDimmed=_backgroundIsDimmed;
@property (strong, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;

- (void).cxx_destruct;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)_updateLeftEdgeFade:(BOOL)arg1;
- (void)crossFade;
- (id)defaultBorderColor;
- (void)didMoveToWindow;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 overrideDimmingColor:(id)arg2;

@end

