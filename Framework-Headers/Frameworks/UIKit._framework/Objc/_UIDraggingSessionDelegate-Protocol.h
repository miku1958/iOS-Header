//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIDragItem, _UIInternalDraggingSessionSource;

@protocol _UIDraggingSessionDelegate <NSObject>

@optional
- (void)_draggingSession:(_UIInternalDraggingSessionSource *)arg1 handedOffDragImageForItem:(UIDragItem *)arg2;
- (void)_draggingSessionHandedOffDragImage:(_UIInternalDraggingSessionSource *)arg1;
- (unsigned long long)draggingSession:(_UIInternalDraggingSessionSource *)arg1 sourceOperationMaskForDraggingWithinApp:(BOOL)arg2;
- (void)draggingSession:(_UIInternalDraggingSessionSource *)arg1 willAddItems:(NSArray *)arg2;
- (void)draggingSessionDidEnd:(_UIInternalDraggingSessionSource *)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(_UIInternalDraggingSessionSource *)arg1;
- (void)draggingSessionDidTransferItems:(_UIInternalDraggingSessionSource *)arg1;
- (BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(_UIInternalDraggingSessionSource *)arg1;
- (BOOL)draggingSessionPrefersFullSizePreviews:(_UIInternalDraggingSessionSource *)arg1;
- (void)draggingSessionWillBegin:(_UIInternalDraggingSessionSource *)arg1;
- (void)draggingSessionWillEnd:(_UIInternalDraggingSessionSource *)arg1 withOperation:(unsigned long long)arg2;
@end

