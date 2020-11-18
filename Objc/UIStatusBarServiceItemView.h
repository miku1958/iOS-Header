//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView
{
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    double _letterSpacing;
}

- (void).cxx_destruct;
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;
- (id)_crossfadeContentsImage;
- (void)_crossfadeStepAnimation;
- (BOOL)_crossfaded;
- (void)_loopAnimationDidStopInDirection:(BOOL)arg1;
- (BOOL)_loopingNecessary;
- (id)_serviceContentsImage;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (BOOL)animatesDataChange;
- (id)contentsImage;
- (double)extraRightPadding;
- (long long)legibilityStyle;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (double)standardPadding;
- (double)updateContentsAndWidth;
- (BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end

