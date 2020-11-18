//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKit/PKGroupsControllerDelegate-Protocol.h>
#import <PassKit/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKit/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKit/UIScrollViewDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, PKGroupsController, PKPassGroupStackView, UIImageView, UINavigationBar;

@interface PKAddValueAddedServicePassViewController : SBUIRemoteAlertServiceViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, UIScrollViewDelegate>
{
    NSDictionary *_userInfo;
    PKGroupsController *_groupsController;
    UINavigationBar *_navigationBar;
    PKPassGroupStackView *_cardStackView;
    NSMutableArray *_localPasses;
    NSMutableArray *_localPassDatas;
    long long _presentationState;
    long long _previousBarStyle;
    UIImageView *_statusBarGradient;
    BOOL _haveStartedCardAnimation;
    BOOL _viewAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_isSecureForRemoteViewService;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void)_dismiss;
- (void)_ingestValueAddedPasses:(id)arg1;
- (void)_ingestionDidFinishWithResult:(int)arg1;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)_willAppearInRemoteViewController;
- (void)addCard:(id)arg1;
- (void)animateInCardIfNeeded;
- (void)cancelCard:(id)arg1;
- (void)dealloc;
- (id)genericTitleWithCount:(unsigned long long)arg1;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)handleHomeButtonPressed;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadGroups;
- (void)loadView;
- (unsigned long long)numberOfGroups;
- (BOOL)passesGrowWhenFlipped;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)styleTitleUsingPass:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)suppressedContent;
- (void)tearDown;
- (void)updateAddButton;
- (void)updateCancelButton;
- (void)updateNavTitle;
- (void)updateSettings;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
