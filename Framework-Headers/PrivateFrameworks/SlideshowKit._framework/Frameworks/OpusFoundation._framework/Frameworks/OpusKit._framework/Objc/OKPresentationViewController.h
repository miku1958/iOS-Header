//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKPresentationViewControllerProxy.h>

@class CMAttitude, CMMotionManager, NSOperationQueue, OKRoundProgressView, OKUILabelHUDView;

@interface OKPresentationViewController : OKPresentationViewControllerProxy
{
    CMMotionManager *_motionManager;
    CMAttitude *_motionAttitudeReference;
    long long _motionOrientationReference;
    NSOperationQueue *_motionQueue;
    BOOL _shouldForwardMotion;
    double _motionLastRotationX;
    double _motionLastRotationY;
    double _motionLastRotationZ;
    OKUILabelHUDView *_couchLabelHUDView;
    OKRoundProgressView *_roundProgressView;
}

@property (strong, nonatomic) OKUILabelHUDView *couchLabelHUDView; // @synthesize couchLabelHUDView=_couchLabelHUDView;
@property (strong) CMAttitude *motionAttitudeReference; // @synthesize motionAttitudeReference=_motionAttitudeReference;

- (void)_startMotion;
- (void)_startPresentation;
- (void)_updateMotion:(long long)arg1;
- (id)colorSpace;
- (void)commonInit;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (BOOL)isActivityIndicatorVisible;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)orientationChanged:(id)arg1;
- (void)setActivityIndicatorVisible:(BOOL)arg1;
- (void)updateActivityIndicatorWithProgress:(double)arg1;
- (void)updateMotion;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

