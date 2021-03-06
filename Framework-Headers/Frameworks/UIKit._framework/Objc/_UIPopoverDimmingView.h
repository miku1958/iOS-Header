//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDimmingView.h>

#import <UIKitCore/_UIPassthroughScrollInteractionDelegate-Protocol.h>

@class NSString, UIView, _UIPassthroughScrollInteraction;
@protocol _UIPopoverDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate>
{
    BOOL _lastHitTestWasPassedThrough;
    _UIPassthroughScrollInteraction *_passthroughScrollInteraction;
    UIView *_transitionContainerView;
}

@property (readonly, nonatomic) _UIPassthroughScrollInteraction *_passthroughScrollInteraction; // @synthesize _passthroughScrollInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIPopoverDimmingViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *transitionContainerView; // @synthesize transitionContainerView=_transitionContainerView;

- (void).cxx_destruct;
- (BOOL)_delegateAllowsInteraction;
- (void)_sendDelegateDimmingViewWasTapped;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

