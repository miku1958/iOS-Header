//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView
{
    _UIBackdropView *_backdropView;
    SBLockOverlayView *_overlayView;
}

@property (readonly, nonatomic) SBLockOverlayView *overlayView; // @synthesize overlayView=_overlayView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 overlayView:(id)arg2;
- (void)layoutSubviews;

@end
