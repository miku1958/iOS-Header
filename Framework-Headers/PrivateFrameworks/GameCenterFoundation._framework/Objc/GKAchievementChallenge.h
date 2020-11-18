//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge
{
    GKAchievement *_achievement;
}

@property (strong, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (void)dealloc;
- (id)description;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (BOOL)detailsLoaded;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInternal:(id)arg1;
- (id)titleText;

@end

