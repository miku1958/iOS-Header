//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

@class CADisplayLink, NSObject;
@protocol TSDGLLayerContext, TSDGLLayerDelegate;

@interface TSDGLLayer : CAEAGLLayer
{
    NSObject<TSDGLLayerDelegate> *mDelegate;
    id<TSDGLLayerContext> mContext;
    CADisplayLink *mDisplayLink;
}

@property (nonatomic) NSObject<TSDGLLayerDelegate> *animationDelegate; // @synthesize animationDelegate=mDelegate;

- (void)dealloc;
- (void)displayAtCurrentLayerTime;
- (id)initWithFrame:(struct CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3;
- (void)lock;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setCurrentContext;
- (void)startAnimation;
- (void)stopAnimation;
- (void)teardown;
- (void)unlock;

@end

