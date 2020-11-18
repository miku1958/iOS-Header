//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIDraggingInfo-Protocol.h>

@class NSString, _UIInternalDraggingSessionSource;
@protocol _UIDraggingSessionDelegate;

@interface _UIDraggingSession : NSObject <_UIDraggingInfo>
{
    id<_UIDraggingSessionDelegate> _delegate;
    _UIInternalDraggingSessionSource *_internalSessionSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIDraggingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long draggingSourceOperationMask;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic, getter=_internalSessionSource) _UIInternalDraggingSessionSource *internalSessionSource; // @synthesize internalSessionSource=_internalSessionSource;
@property (readonly, nonatomic) _UIDraggingSession *localDraggingSession;
@property (nonatomic) long long numberOfValidItemsForDrop;
@property (readonly) Class superclass;

+ (void)_cancelAllDrags;
- (void).cxx_destruct;
- (void)_cancelDrag;
- (BOOL)_dynamicallyUpdatesPrefersFullSizePreviewss;
- (void)_getOperationMaskFromDelegateInApp:(unsigned long long *)arg1 outsideApp:(unsigned long long *)arg2;
- (void)_sendDataTransferFinished;
- (void)_sendDidEndWithOperation:(unsigned long long)arg1;
- (void)_sendDidMove;
- (void)_sendHandedOffDragImage;
- (void)_sendHandedOffDragImageForItem:(id)arg1;
- (void)_sendWillAddItems:(id)arg1;
- (void)_sendWillBegin;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (BOOL)_shouldCancelOnAppDeactivation;
- (void)addItems:(id)arg1;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithInternalSessionSource:(id)arg1;
- (BOOL)prefersFullSizePreview;

@end

