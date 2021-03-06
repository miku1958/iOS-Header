//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBLeafIconObserver-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBFolderController, SBHIconManager, SBHIconModel, SBRootFolder;

@interface SBHHomeScreenUsageMonitor : NSObject <SBFolderObserver, SBLeafIconObserver, BSDescriptionProviding>
{
    NSHashTable *_observers;
    NSMutableSet *_visibleHomeScreenWidgetIcons;
    BOOL _delayedLayoutDidChangeNotification;
    BOOL _currentPageIndexDidChangeWhileScrolling;
    SBHIconManager *_iconManager;
    SBHIconModel *_iconModel;
    SBRootFolder *_rootFolder;
    SBFolderController *_rootFolderController;
    unsigned long long _homeScreenDisappearanceReasons;
}

@property (nonatomic) BOOL currentPageIndexDidChangeWhileScrolling; // @synthesize currentPageIndexDidChangeWhileScrolling=_currentPageIndexDidChangeWhileScrolling;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedLayoutDidChangeNotification; // @synthesize delayedLayoutDidChangeNotification=_delayedLayoutDidChangeNotification;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long homeScreenDisappearanceReasons; // @synthesize homeScreenDisappearanceReasons=_homeScreenDisappearanceReasons;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager; // @synthesize iconManager=_iconManager;
@property (strong, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property (strong, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property (strong, nonatomic) SBFolderController *rootFolderController; // @synthesize rootFolderController=_rootFolderController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
- (void)iconManagerDidChangeIconModel:(id)arg1;
- (void)iconManagerDidChangeRootViewController:(id)arg1;
- (void)iconManagerEditingDidChange:(id)arg1;
- (void)iconModelDidLayOut:(id)arg1;
- (id)initWithIconManager:(id)arg1;
- (BOOL)isContentVisible;
- (void)leafIcon:(id)arg1 didAddIconDataSource:(id)arg2;
- (void)leafIcon:(id)arg1 didChangeActiveDataSource:(id)arg2;
- (void)leafIcon:(id)arg1 didRemoveIconDataSource:(id)arg2;
- (unsigned long long)listViewIndexForRootFolderController:(id)arg1;
- (void)noteCurrentPageIndexChanged:(unsigned long long)arg1;
- (void)noteIconManagerCoverSheetTodayViewDidAppear;
- (void)noteIconManagerCoverSheetTodayViewDidDisappear;
- (void)noteIconManagerOverlayTodayViewDidAppear;
- (void)noteIconManagerOverlayTodayViewDidDisappear;
- (void)noteIconManagerOverlayTodayViewDidScrollToRevealIcons:(id)arg1;
- (void)noteIconManagerRootFolderContentOccludedChanged;
- (void)noteIconManagerRootFolderControllerViewDidDisappear;
- (void)noteIconManagerRootFolderControllerViewWillAppear;
- (void)noteLayoutChanged;
- (void)noteUserConfiguredIcon:(id)arg1;
- (void)noteUserDislikedWidgetIconStackSuggestion:(id)arg1;
- (void)noteUserTappedWidgetIcon:(id)arg1 withURL:(id)arg2;
- (void)noteWidgetIconAdded:(id)arg1;
- (void)noteWidgetIconRemoved:(id)arg1;
- (void)noteWidgetIconStack:(id)arg1 changedActiveWidget:(id)arg2;
- (void)notifyForEveryHomeScreenWidgetVisibility;
- (void)notifyForEveryTodayViewWidgetVisibilityOnCoverSheet:(BOOL)arg1;
- (void)notifyRootFolderControllerViewWillAppear;
- (void)removeObserver:(id)arg1;
- (void)resetIconModel;
- (void)resetRootFolderController;
- (void)rootFolderControllerCurrentPageIndexDidChange:(id)arg1;
- (void)rootFolderControllerDidEndScrolling:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateVisibilityReasons;
- (void)updateVisibleWidgetIcons;

@end

