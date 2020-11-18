//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableSet;

@interface SBHIconViewContextMenuStateController : NSObject
{
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)areAnyIconViewContextMenusAnimating;
- (BOOL)areAnyIconViewContextMenusShowing;
- (void)dismissAppIconForceTouchControllers:(CDUnknownBlockType)arg1;
- (void)earlyTerminateAnyContextMenuAnimations;
- (void)floatyFolderViewDidScrollHiddenIconViewAway:(id)arg1;
- (void)iconViewDidAnimateContextMenu:(id)arg1;
- (void)iconViewWillAnimateContextMenu:(id)arg1;
- (void)iconViewWillDismissContextMenu:(id)arg1;
- (void)iconViewWillPresentContextMenu:(id)arg1;
- (id)init;
- (void)noteFolderControllerWillClose:(id)arg1;
- (void)performAfterContextMenuAnimationsHaveCompleted:(CDUnknownBlockType)arg1;
- (void)registerIconView:(id)arg1;
- (void)unregisterIconView:(id)arg1;

@end
