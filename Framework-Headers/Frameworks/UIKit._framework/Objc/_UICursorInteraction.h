//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIPointerInteraction, UIView, _UICursorRequest;
@protocol _UICursorInteractionDelegate;

@interface _UICursorInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction>
{
    struct {
        BOOL regionForLocation;
        BOOL styleForRegion;
        BOOL styleForRegionModifiers;
        BOOL willEnterRegionWithAnimator;
        BOOL willExitRegionWithAnimator;
        BOOL asyncRegionForLocation;
        BOOL targetRegionForDeceleratingCursorWithRequests;
        BOOL regionForRequest;
        BOOL willEnterRegion;
        BOOL willExitRegion;
    } _delegateImplements;
    UIView *_view;
    id<_UICursorInteractionDelegate> _delegate;
    UIPointerInteraction *_underlyingPointerInteraction;
    _UICursorRequest *_pendingRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<_UICursorInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_pausesCursorUpdatesWhilePanning, setter=_setPausesCursorUpdatesWhilePanning:) BOOL pausesCursorUpdatesWhilePanning;
@property (strong, nonatomic) _UICursorRequest *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIPointerInteraction *underlyingPointerInteraction; // @synthesize underlyingPointerInteraction=_underlyingPointerInteraction;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_pointerInteraction:(id)arg1 targetRegionForDeceleratingPointerWithRequests:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryDelegateRegionForRequest:(id)arg1 defaultRegion:(id)arg2 completion:(CDUnknownBlockType)arg3 synchronously:(BOOL)arg4;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)willMoveToView:(id)arg1;

@end

