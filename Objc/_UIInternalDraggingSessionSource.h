//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIDraggingImageSlotOwner.h>

@class NSArray, NSSet, NSXPCListenerEndpoint, PBItemCollection, UIDragEvent, UIView, UIWindow, _DUITouchRoutingPolicy, _UIDragSetDownAnimation, _UIDraggingSession, _UIDruidSourceConnection;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner
{
    struct CGPoint _lastNotifiedCentroid;
    BOOL _hasProvidedFenceOnce;
    PBItemCollection *_pbItemCollection;
    _DUITouchRoutingPolicy *_touchRoutingPolicy;
    _UIDragSetDownAnimation *_setDownAnimation;
    long long _stateAfterSetDown;
    BOOL _sentWillEnd;
    BOOL _hostIsActive;
    BOOL _originatedInHostedWindow;
    unsigned int _sessionIdentifier;
    _UIDraggingSession *_publicSession;
    UIDragEvent *_dragEvent;
    UIView *_sourceView;
    long long _state;
    unsigned long long _resultOperation;
    NSArray *_internalItems;
    long long _dataOwner;
    NSSet *_touches;
    NSXPCListenerEndpoint *_accessibilityEndpoint;
    UIWindow *_centroidWindow;
    unsigned long long _withinAppSourceOperationMask;
    unsigned long long _outsideAppSourceOperationMask;
    _UIDruidSourceConnection *_druidConnection;
    struct CGPoint _centroid;
}

@property (strong, nonatomic) NSXPCListenerEndpoint *accessibilityEndpoint; // @synthesize accessibilityEndpoint=_accessibilityEndpoint;
@property (readonly, nonatomic) BOOL canAddItems;
@property (readonly, nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property (readonly, nonatomic) UIWindow *centroidWindow; // @synthesize centroidWindow=_centroidWindow;
@property (nonatomic) long long dataOwner; // @synthesize dataOwner=_dataOwner;
@property (weak, nonatomic) UIDragEvent *dragEvent; // @synthesize dragEvent=_dragEvent;
@property (strong, nonatomic) _UIDruidSourceConnection *druidConnection; // @synthesize druidConnection=_druidConnection;
@property (copy, nonatomic) NSArray *internalItems; // @synthesize internalItems=_internalItems;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) unsigned long long outsideAppSourceOperationMask; // @synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask;
@property (readonly, nonatomic) BOOL prefersFullSizePreview;
@property (readonly, nonatomic) _UIDraggingSession *publicSession; // @synthesize publicSession=_publicSession;
@property (nonatomic) unsigned long long resultOperation; // @synthesize resultOperation=_resultOperation;
@property (readonly, nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) BOOL shouldCancelOnAppDeactivation;
@property (weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (copy, nonatomic) _DUITouchRoutingPolicy *touchRoutingPolicy;
@property (copy, nonatomic) NSSet *touches; // @synthesize touches=_touches;
@property (readonly, nonatomic) unsigned long long withinAppSourceOperationMask; // @synthesize withinAppSourceOperationMask=_withinAppSourceOperationMask;

- (void).cxx_destruct;
- (void)_didBeginDrag;
- (void)_getOperationMaskFromDelegate;
- (void)_handOffCancelledItems:(id)arg1;
- (void)_hostDidDeactivate;
- (void)_hostWillBecomeActive;
- (void)_registerContextIDsForAdditionalDragEvents;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)_unregisterContextIDsForAdditionalDragEvents;
- (void)addPublicItems:(id)arg1;
- (void)beginDrag:(CDUnknownBlockType)arg1;
- (void)cancelDrag;
- (void)dragDidExitApp;
- (BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
- (id)initWithDragManager:(id)arg1 items:(id)arg2 dataOwner:(long long)arg3 sourceView:(id)arg4;
- (void)itemsBecameDirty:(id)arg1;
- (BOOL)preventsSimultaneousDragFromView:(id)arg1;
- (void)setCentroid:(struct CGPoint)arg1 inWindow:(id)arg2;
- (BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg1;
- (void)updateCentroidFromDragEvent;

@end

