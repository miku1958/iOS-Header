//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <GameCenterUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class GKDashboardHostViewController, GKLeaderboard, NSString, UIAlertController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _isArcade;
    BOOL _presenting;
    id<GKGameCenterControllerDelegate> _gameCenterDelegate;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    long long _leaderboardPlayerScope;
    GKDashboardHostViewController *_remoteViewController;
    GKLeaderboard *_leaderboard;
    NSString *_achievementIdentifier;
    UIAlertController *_alertController;
}

@property (strong, nonatomic) NSString *achievementIdentifier; // @synthesize achievementIdentifier=_achievementIdentifier;
@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<GKGameCenterControllerDelegate> gameCenterDelegate; // @synthesize gameCenterDelegate=_gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isArcade; // @synthesize isArcade=_isArcade;
@property (strong, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (strong, nonatomic) NSString *leaderboardCategory; // @dynamic leaderboardCategory;
@property (strong, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property (nonatomic) long long leaderboardPlayerScope; // @synthesize leaderboardPlayerScope=_leaderboardPlayerScope;
@property (nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property (nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property (strong, nonatomic) GKDashboardHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic) long long viewState; // @synthesize viewState=_viewState;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (BOOL)accessInstanceVariablesDirectly;
- (void).cxx_destruct;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)checkArcadeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)init;
- (id)initWithAchievementID:(id)arg1;
- (id)initWithLeaderboard:(id)arg1 playerScope:(long long)arg2;
- (id)initWithLeaderboardID:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3;
- (id)initWithState:(long long)arg1;
- (void)loadView;
- (void)notifyDelegateOnWillFinish;
- (void)setLeaderboardIdentifierFromExtension:(id)arg1;
- (void)setLeaderboardPlayerScopeFromExtension:(long long)arg1;
- (void)setLeaderboardTimeScopeFromExtension:(long long)arg1;
- (void)setViewStateFromExtension:(long long)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldShowPlayForChallenge;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (unsigned long long)supportedInterfaceOrientations;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

