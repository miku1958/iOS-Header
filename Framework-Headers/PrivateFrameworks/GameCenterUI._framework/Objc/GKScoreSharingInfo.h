//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCoding-Protocol.h>
#import <GameCenterUI/NSSecureCoding-Protocol.h>

@class GKGame, GKLeaderboard, GKPlayer, GKScore, UIImage;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding>
{
    BOOL _complete;
    GKLeaderboard *_leaderboardCategory;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_badgeImage;
    UIImage *_iconImage;
    GKScore *_score;
}

@property (strong, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property (nonatomic) BOOL complete; // @synthesize complete=_complete;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (strong, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (strong, nonatomic) GKLeaderboard *leaderboardCategory; // @synthesize leaderboardCategory=_leaderboardCategory;
@property (strong, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property (strong, nonatomic) GKScore *score; // @synthesize score=_score;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;

@end

