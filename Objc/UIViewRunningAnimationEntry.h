//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewAnimationState;
@protocol OS_dispatch_queue, UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIViewRunningAnimationEntry : NSObject
{
    id<UIIntervalAnimating> _animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    CDUnknownBlockType _completionCallback;
    BOOL _invalidated;
    BOOL _shouldNotRemovePresentationModifier;
    BOOL _running;
    UIViewAnimationState *_animationState;
    id<UIViewAnimationComposing> _composer;
}

@property (weak, nonatomic) UIViewAnimationState *animationState; // @synthesize animationState=_animationState;
@property (strong, nonatomic) id<UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL running; // @synthesize running=_running;
@property (nonatomic) BOOL shouldNotRemovePresentationModifier; // @synthesize shouldNotRemovePresentationModifier=_shouldNotRemovePresentationModifier;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2 composer:(id)arg3;
- (void)performCompletionCallbackFinished:(BOOL)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)performWithoutLock:(CDUnknownBlockType)arg1;
- (void)setCompletionCallback:(CDUnknownBlockType)arg1;

@end

