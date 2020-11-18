//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKChallengeIssueHostProtocol-Protocol.h>

@class GKGame, GKHostedChallengeIssueController, NSString;

@interface GKChallengeIssueHostViewController : GKUIRemoteViewController <GKChallengeIssueHostProtocol>
{
    GKHostedChallengeIssueController *_delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKHostedChallengeIssueController *delegate; // @synthesize delegate=_delegateWeak;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)challengeExtension;
- (id)contextForRequestIdentifier;
- (void)dealloc;
- (void)didFinishWithPlayerInternals:(id)arg1 message:(id)arg2;
- (void)remoteViewControllerIsCanceling;
- (void)setChallenge:(id)arg1 withPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(BOOL)arg4;

@end

