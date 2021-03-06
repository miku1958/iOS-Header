//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKAchievement.h>

@interface GKAchievement (UIPrivate)
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)imageURL;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showBanner;
@end

