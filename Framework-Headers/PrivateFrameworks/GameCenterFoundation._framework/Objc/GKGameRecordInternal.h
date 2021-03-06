//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameInternal.h>

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal
{
    GKScoreInternal *_score;
    NSDate *_lastPlayedDate;
    NSDate *_purchaseDate;
    unsigned short _achievements;
    short _achievementPoints;
    unsigned short _friendRank;
    unsigned short _maxFriendRank;
    unsigned int _rank;
    unsigned int _maxRank;
}

@property (nonatomic) short achievementPoints; // @synthesize achievementPoints=_achievementPoints;
@property (nonatomic) unsigned short achievements; // @synthesize achievements=_achievements;
@property (nonatomic) unsigned short friendRank; // @synthesize friendRank=_friendRank;
@property (strong, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property (nonatomic) unsigned short maxFriendRank; // @synthesize maxFriendRank=_maxFriendRank;
@property (nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property (strong, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property (strong, nonatomic) GKScoreInternal *score; // @synthesize score=_score;

+ (id)gameRecordForGame:(id)arg1;
+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (void)updateWithGame:(id)arg1;

@end

