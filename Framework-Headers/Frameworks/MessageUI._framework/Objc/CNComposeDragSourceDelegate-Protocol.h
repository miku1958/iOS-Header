//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class CNComposeDragSource, NSArray, NSData, NSString, UITargetedDragPreview, UIView;
@protocol NSItemProviderWriting, UIDragSession;

@protocol CNComposeDragSourceDelegate <NSObject>
- (NSArray *)dragSource:(CNComposeDragSource *)arg1 draggableItemsAtPoint:(struct CGPoint)arg2;

@optional
- (long long)dragSource:(CNComposeDragSource *)arg1 dataOwnerForSession:(id<UIDragSession>)arg2;
- (id)dragSource:(CNComposeDragSource *)arg1 localObjectForDraggableItem:(id<NSItemProviderWriting>)arg2;
- (UIView *)dragSource:(CNComposeDragSource *)arg1 previewForDraggableItem:(id<NSItemProviderWriting>)arg2;
- (BOOL)dragSource:(CNComposeDragSource *)arg1 sessionAllowsMoveOperation:(id<UIDragSession>)arg2;
- (BOOL)dragSource:(CNComposeDragSource *)arg1 sessionIsRestrictedToMail:(id<UIDragSession>)arg2;
- (NSString *)dragSource:(CNComposeDragSource *)arg1 suggestedNameForDraggableItem:(id<NSItemProviderWriting>)arg2;
- (UITargetedDragPreview *)dragSource:(CNComposeDragSource *)arg1 targetedPreviewForDraggableItem:(id<NSItemProviderWriting>)arg2;
- (NSData *)dragSource:(CNComposeDragSource *)arg1 teamDataForDraggableItem:(id<NSItemProviderWriting>)arg2;
- (void)dragSource:(CNComposeDragSource *)arg1 willEndInteractionWithItems:(NSArray *)arg2 dropOperation:(unsigned long long)arg3;
@end
