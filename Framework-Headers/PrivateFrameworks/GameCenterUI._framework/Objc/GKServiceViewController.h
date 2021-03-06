//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKNavigationController.h>

#import <GameCenterUI/GKDaemonProxyDataUpdateDelegate-Protocol.h>
#import <GameCenterUI/GKDashboardServiceInterface-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSString, UIViewController;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>
{
    BOOL _alwaysShowDoneButton;
    int _hostPID;
    GKGame *_game;
    UIViewController *_privateViewController;
    double _statusBarHeight;
}

@property (nonatomic) BOOL alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property (strong, nonatomic) UIViewController *privateViewController; // @synthesize privateViewController=_privateViewController;
@property (nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)_addDoneButtonToViewController:(id)arg1;
- (void)_startObservingChangesToProperties;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)_stopObservingChangesToProperties;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)cancelServiceViewController;
- (void)constructPrivateViewController;
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)donePressed:(id)arg1;
- (void)finish;
- (void)finishAndPlayChallenge:(id)arg1;
- (void)finishWithTurnBasedMatch:(id)arg1;
- (id)init;
- (void)messageFromClient:(id)arg1;
- (void)nudge;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observedKeyPaths;
- (void)performSelectorOnHostController:(SEL)arg1;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)presentInitialViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)quitTurnBasedMatch:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resetPrivateViewController;
- (void)serviceViewControllerCreated:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

