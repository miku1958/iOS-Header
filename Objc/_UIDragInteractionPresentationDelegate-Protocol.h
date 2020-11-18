//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIDragInteraction, UIDragItem, UITargetedDragPreview;
@protocol UIDragAnimating, UIDragSession;

@protocol _UIDragInteractionPresentationDelegate <NSObject>
- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateCancelWithAnimator:(id<UIDragAnimating>)arg3;
- (UITargetedDragPreview *)_dragInteractionPresentation:(UIDragInteraction *)arg1 previewForCancellingItem:(UIDragItem *)arg2 defaultPreview:(UITargetedDragPreview *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 sessionDidEnd:(id<UIDragSession>)arg2 withoutBeginning:(BOOL)arg3;
@end

