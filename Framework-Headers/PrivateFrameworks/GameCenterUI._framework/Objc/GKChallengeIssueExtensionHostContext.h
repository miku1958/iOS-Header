//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKChallengeIssueHostProtocol-Protocol.h>
#import <GameCenterUI/GKChallengeIssueServiceProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKChallengeIssueExtensionHostContext : GKExtensionHostContext <GKChallengeIssueHostProtocol, GKChallengeIssueServiceProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)didFinishWithPlayerInternals:(id)arg1 message:(id)arg2;
- (id)extensionObjectProxy;
- (void)setChallenge:(id)arg1 playerInternals:(id)arg2 defaultMessage:(id)arg3 forcePicker:(BOOL)arg4;

@end
