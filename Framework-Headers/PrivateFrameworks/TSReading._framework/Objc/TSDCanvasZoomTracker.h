//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDCanvasLayer;
@protocol TSDCanvasZoomTrackerDelegate;

@interface TSDCanvasZoomTracker : NSObject
{
    TSDCanvasLayer *mCanvasLayer;
    NSObject<TSDCanvasZoomTrackerDelegate> *mDelegate;
    BOOL mAlwaysUsesTranslationSprings;
    BOOL mSnapsViewScale;
    BOOL mAnimateTransform;
    struct CGAffineTransform mSavedTransform;
    struct CGPoint mZoomOrigin;
    BOOL mHasGestureOrigin;
    struct CGPoint mGestureOrigin;
    struct CGPoint mGestureOffset;
    struct CGPoint mSavedContentOffset;
    BOOL mIsZooming;
    unsigned long long mZoomVelocitySampleCount;
    double mZoomVelocity;
    double mZoomStartTime;
    BOOL mIsShowingZoomHUD;
}

@property (nonatomic) BOOL alwaysUsesTranslationSprings; // @synthesize alwaysUsesTranslationSprings=mAlwaysUsesTranslationSprings;
@property (nonatomic) BOOL animateTransform; // @synthesize animateTransform=mAnimateTransform;
@property (weak, nonatomic) NSObject<TSDCanvasZoomTrackerDelegate> *delegate; // @synthesize delegate=mDelegate;
@property (nonatomic) BOOL snapsViewScale; // @synthesize snapsViewScale=mSnapsViewScale;

- (id)initWithCanvasLayer:(id)arg1;
- (void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(struct CGPoint)arg3 phase:(int)arg4;

@end

