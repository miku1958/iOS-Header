//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, _UIModalItemAppViewController, _UIModalItemHostingWindow, _UIModalItemSBViewController;

@interface _UIModalItemsCoordinator : NSObject
{
    NSMapTable *_presentingSessionsMapTable;
    NSMapTable *_sessionForItemMapTable;
    _UIModalItemSBViewController *__viewControllerForSBAlerts;
    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;
    _UIModalItemAppViewController *__viewControllerForAlerts;
    _UIModalItemHostingWindow *__hostingWindowForAlerts;
}

@property (strong, nonatomic) _UIModalItemHostingWindow *_hostingWindowForAlerts; // @synthesize _hostingWindowForAlerts=__hostingWindowForAlerts;
@property (strong, nonatomic) _UIModalItemHostingWindow *_hostingWindowForSBAlerts; // @synthesize _hostingWindowForSBAlerts=__hostingWindowForSBAlerts;
@property (strong, nonatomic) _UIModalItemAppViewController *_viewControllerForAlerts; // @synthesize _viewControllerForAlerts=__viewControllerForAlerts;
@property (strong, nonatomic) _UIModalItemSBViewController *_viewControllerForSBAlerts; // @synthesize _viewControllerForSBAlerts=__viewControllerForSBAlerts;
@property (strong, nonatomic) NSMapTable *presentingSessionsMapTable; // @synthesize presentingSessionsMapTable=_presentingSessionsMapTable;
@property (strong, nonatomic) NSMapTable *sessionForItemMapTable; // @synthesize sessionForItemMapTable=_sessionForItemMapTable;

+ (void)_desaturateUIForSB;
+ (void)_getRidOfViewControllerForAlerts;
+ (void)_getRidOfViewControllerForSBAlerts;
+ (void)_resaturateUIForSB;
+ (void)noteOrientationChangingTo:(long long)arg1 animated:(BOOL)arg2;
+ (id)sharedModalItemsCoordinator;
- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;
- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(long long)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (void)_getRidOfViewControllerForAlerts;
- (void)_getRidOfViewControllerForSBAlerts;
- (void)_hideModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 dimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(long long)arg2;
- (void)_notifyDelegateDidPresentItem:(id)arg1;
- (BOOL)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(long long)arg2;
- (void)_notifyDelegateWillPresentItem:(id)arg1;
- (void)_notifyDissmissedItem:(id)arg1;
- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(BOOL)arg4;
- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(long long)arg2;
- (id)_presentingViewControllerForAlertCompatibility;
- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)arg1;
- (id)_presentingViewControllerForSBCompatibility;
- (id)_rootViewControllerForModalItem:(id)arg1;
- (void)_showModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 undimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(BOOL)arg3;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)hideForSpringBoardAlert:(BOOL)arg1;
- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(BOOL)arg3;
- (id)init;
- (void)noteOrientationChangingTo:(long long)arg1 animated:(BOOL)arg2;
- (id)presentingViewControllerForItem:(id)arg1 create:(BOOL)arg2;
- (void)showAfterSpringBoardAlert:(BOOL)arg1;

@end
