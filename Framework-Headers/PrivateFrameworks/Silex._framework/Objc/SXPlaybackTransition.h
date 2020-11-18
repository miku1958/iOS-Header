//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXPlaybackTransitionContext;
@protocol SXInteractivePlaybackTransitioning, SXVideo;

@interface SXPlaybackTransition : NSObject
{
    id<SXVideo> _fromVideo;
    id<SXVideo> _toVideo;
    id<SXInteractivePlaybackTransitioning> _transitionCoordinator;
    SXPlaybackTransitionContext *_context;
}

@property (strong, nonatomic) SXPlaybackTransitionContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) id<SXVideo> fromVideo; // @synthesize fromVideo=_fromVideo;
@property (readonly, nonatomic) id<SXVideo> toVideo; // @synthesize toVideo=_toVideo;
@property (readonly, nonatomic) id<SXInteractivePlaybackTransitioning> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionWithVisibilityMonitor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
