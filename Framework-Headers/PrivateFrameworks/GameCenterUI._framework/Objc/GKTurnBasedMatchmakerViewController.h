//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/GKLocalPlayerListener-Protocol.h>
#import <GameCenterUI/GKTurnBasedEventListener-Protocol.h>

@class GKMatchRequest, GKTurnBasedMatchmakerHostViewController, NSString, UIAlertController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>
{
    BOOL _showExistingMatches;
    id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
    GKTurnBasedMatchmakerHostViewController *_remoteViewController;
    GKMatchRequest *_matchRequest;
    UIAlertController *_alertController;
}

@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property (strong, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (nonatomic) BOOL showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @synthesize turnBasedMatchmakerDelegate;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)authenticationChanged:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (void)loadView;
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(BOOL)arg3;
- (void)playerQuitMatch:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

