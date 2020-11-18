//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDraggingImageSlotOwner.h>

#import <UIKitCore/_UIDraggingInfo-Protocol.h>

@class NSArray, NSString, NSTimer, PBItemCollection, UIDragEvent, UIDraggingBeginningSessionConfiguration, UIDraggingSystemTouchRoutingPolicy, UIView, UIWindow, _UIDragSetDownAnimation, _UIDruidSourceConnection;
@protocol _UIDraggingSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner <_UIDraggingInfo>
{
    struct CGPoint _lastNotifiedCentroid;
    BOOL _didHandOffDragImage;
    PBItemCollection *_pbItemCollection;
    UIDraggingSystemTouchRoutingPolicy *_touchRoutingPolicy;
    _UIDragSetDownAnimation *_setDownAnimation;
    long long _stateAfterSetDown;
    BOOL _sentWillEnd;
    BOOL _hostIsActive;
    BOOL _originatedInHostedWindow;
    NSTimer *_waitingToSendDidExitAppTimer;
    UIDraggingBeginningSessionConfiguration *_configuration;
    unsigned int _sessionIdentifier;
    id<_UIDraggingSessionDelegate> _delegate;
    UIDragEvent *_dragEvent;
    UIView *_sourceView;
    long long _state;
    unsigned long long _resultOperation;
    NSArray *_internalItems;
    long long _dataOwner;
    UIWindow *_centroidWindow;
    unsigned long long _withinAppSourceOperationMask;
    unsigned long long _outsideAppSourceOperationMask;
    _UIDruidSourceConnection *_druidConnection;
    struct CGPoint _centroid;
}

@property (readonly, nonatomic) BOOL canAddItems;
@property (readonly, nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property (readonly, nonatomic) UIWindow *centroidWindow; // @synthesize centroidWindow=_centroidWindow;
@property (nonatomic) long long dataOwner; // @synthesize dataOwner=_dataOwner;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIDraggingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didHandOffDragImage;
@property (weak, nonatomic) UIDragEvent *dragEvent; // @synthesize dragEvent=_dragEvent;
@property (readonly, nonatomic) unsigned long long draggingSourceOperationMask;
@property (strong, nonatomic) _UIDruidSourceConnection *druidConnection; // @synthesize druidConnection=_druidConnection;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *internalItems; // @synthesize internalItems=_internalItems;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) unsigned long long outsideAppSourceOperationMask; // @synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask;
@property (readonly, nonatomic) BOOL prefersFullSizePreview;
@property (nonatomic) unsigned long long resultOperation; // @synthesize resultOperation=_resultOperation;
@property (readonly, nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) BOOL shouldCancelOnAppDeactivation;
@property (weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long withinAppSourceOperationMask; // @synthesize withinAppSourceOperationMask=_withinAppSourceOperationMask;

- (void).cxx_destruct;
- (void)_didBeginDrag;
- (void)_getOperationMaskFromDelegate;
- (void)_handOffCancelledItems:(id)arg1;
- (void)_hostDidDeactivate;
- (void)_hostWillBecomeActive;
- (void)_sendDataTransferFinished;
- (void)_sendDidEndWithOperation:(unsigned long long)arg1;
- (void)_sendDidMove;
- (void)_sendHandedOffDragImage;
- (void)_sendHandedOffDragImageForItem:(id)arg1;
- (void)_sendWillAddItems:(id)arg1;
- (void)_sendWillBegin;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)addPublicItems:(id)arg1;
- (void)beginDrag:(CDUnknownBlockType)arg1;
- (void)cancelDrag;
- (void)dragDidExitApp;
- (void)dragIsInsideApp;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id)arg1;
- (BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDragManager:(id)arg1 configuration:(id)arg2;
- (void)itemsBecameDirty:(id)arg1;
- (BOOL)preventsSimultaneousDragFromView:(id)arg1;
- (id)touchRoutingPolicy;
- (BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg1;
- (void)updateCentroidFromDragEvent;

@end

