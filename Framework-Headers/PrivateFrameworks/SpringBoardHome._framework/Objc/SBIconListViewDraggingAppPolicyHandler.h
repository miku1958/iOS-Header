//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListViewDraggingPolicyHandling-Protocol.h>

@class NSMapTable, NSString, SBIconListViewDraggingDestinationDelegate;

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling>
{
    NSMapTable *_dragContexts;
    SBIconListViewDraggingDestinationDelegate *_draggingDestinationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate; // @synthesize draggingDestinationDelegate=_draggingDestinationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDragPauseTimerForDropSession:(id)arg1;
- (void)_cancelDragPauseTimers;
- (id)_destinationFolderIconViewForDragItem:(id)arg1 iconIndexPath:(id *)arg2 folderRelativeIconIndexPath:(id *)arg3;
- (void)_dragPauseTimerFired:(id)arg1;
- (id)_iconForDragItem:(id)arg1;
- (id)_iconViewForDragItem:(id)arg1;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 dropSession:(id)arg2;
- (void)_updateDragPauseForDropSession:(id)arg1;
- (BOOL)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;

@end
