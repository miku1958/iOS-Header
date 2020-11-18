//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, UIDragInteraction, UIDragItem, UIDropInteraction, UIDropProposal, UITargetedDragPreview, UIWebDocumentView;
@protocol UIDragAnimating, UIDragSession, UIDropSession;

@protocol UIWebDraggingDelegate <NSObject>

@optional
- (NSArray *)_webView:(UIWebDocumentView *)arg1 adjustedItemProviders:(NSArray *)arg2;
- (BOOL)_webView:(UIWebDocumentView *)arg1 allowsSelectingContentAfterDropForSession:(id<UIDropSession>)arg2;
- (long long)_webView:(UIWebDocumentView *)arg1 dataOwnerForAddingToSession:(id<UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_webView:(UIWebDocumentView *)arg1 dataOwnerForDragSession:(id<UIDragSession>)arg2;
- (long long)_webView:(UIWebDocumentView *)arg1 dataOwnerForDropSession:(id<UIDropSession>)arg2;
- (void)_webView:(UIWebDocumentView *)arg1 dragInteraction:(UIDragInteraction *)arg2 willAnimateLiftWithAnimator:(id<UIDragAnimating>)arg3 session:(id<UIDragSession>)arg4;
- (void)_webView:(UIWebDocumentView *)arg1 dropInteraction:(UIDropInteraction *)arg2 concludeDrop:(id<UIDropSession>)arg3;
- (void)_webView:(UIWebDocumentView *)arg1 dropInteraction:(UIDropInteraction *)arg2 item:(UIDragItem *)arg3 willAnimateDropWithAnimator:(id<UIDragAnimating>)arg4;
- (void)_webView:(UIWebDocumentView *)arg1 dropWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(NSArray *)arg4;
- (BOOL)_webView:(UIWebDocumentView *)arg1 performDropWithItemProviders:(NSArray *)arg2;
- (BOOL)_webView:(UIWebDocumentView *)arg1 performDropWithSession:(id<UIDropSession>)arg2;
- (UITargetedDragPreview *)_webView:(UIWebDocumentView *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)_webView:(UIWebDocumentView *)arg1 previewForDroppingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)_webView:(UIWebDocumentView *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id<UIDragSession>)arg3;
- (void)_webView:(UIWebDocumentView *)arg1 sessionDidEnter:(id<UIDropSession>)arg2;
- (void)_webView:(UIWebDocumentView *)arg1 sessionDidExit:(id<UIDropSession>)arg2;
- (NSArray *)_webView:(UIWebDocumentView *)arg1 willPerformDropWithSession:(id<UIDropSession>)arg2;
- (UIDropProposal *)_webView:(UIWebDocumentView *)arg1 willUpdateDropProposalToProposal:(UIDropProposal *)arg2 forSession:(id)arg3;
@end

