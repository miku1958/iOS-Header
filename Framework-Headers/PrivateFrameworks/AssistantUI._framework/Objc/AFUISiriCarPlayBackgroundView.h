//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFUISiriCarPlayFullScreenBackgroundView;
@protocol AFUISiriCarPlayBackgroundViewDelegate;

@interface AFUISiriCarPlayBackgroundView : UIView
{
    AFUISiriCarPlayFullScreenBackgroundView *_fullScreenBackgroundView;
    UIView *_systemBackgroundView;
    id<AFUISiriCarPlayBackgroundViewDelegate> _delegate;
    BOOL _visible;
    long long _backgroundViewMode;
}

@property (nonatomic) long long backgroundViewMode; // @synthesize backgroundViewMode=_backgroundViewMode;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

- (void).cxx_destruct;
- (void)_animateBackgroundsWithVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2;
- (void)_updateCarPlayStatusBarForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2;
- (void)_updateViewsForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

