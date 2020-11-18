//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKGameMatch, GKPlayer, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject
{
    BOOL _hasAchievement;
    BOOL _hasRank;
    BOOL _nearby;
    BOOL _canSelectPlayer;
    GKPlayer *_player;
    GKGameMatch *_gameMatch;
    NSAttributedString *_achievementString;
    NSAttributedString *_rankString;
    unsigned long long _selectionStatus;
    NSDate *_sortDate;
}

@property (strong, nonatomic) NSAttributedString *achievementString; // @synthesize achievementString=_achievementString;
@property (readonly, nonatomic) BOOL canSelectPlayer; // @synthesize canSelectPlayer=_canSelectPlayer;
@property (strong, nonatomic) GKGameMatch *gameMatch; // @synthesize gameMatch=_gameMatch;
@property (nonatomic) BOOL hasAchievement; // @synthesize hasAchievement=_hasAchievement;
@property (nonatomic) BOOL hasRank; // @synthesize hasRank=_hasRank;
@property (nonatomic) BOOL nearby; // @synthesize nearby=_nearby;
@property (readonly, nonatomic) BOOL playedGame;
@property (strong, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property (strong, nonatomic) NSAttributedString *rankString; // @synthesize rankString=_rankString;
@property (readonly, nonatomic) unsigned long long selectionStatus; // @synthesize selectionStatus=_selectionStatus;
@property (strong, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;

- (void)_setSelectionStatus:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (void)prepareForLoad;

@end

