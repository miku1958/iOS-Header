//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    NSString *_leaderboardIdentifier;
    NSString *_groupLeaderboardIdentifier;
    NSString *_formattedValue;
    NSDate *_date;
    long long _value;
    unsigned long long _context;
    unsigned int _rank;
    BOOL _valueSet;
}

@property (strong, nonatomic) NSString *category;
@property (nonatomic) unsigned long long context; // @synthesize context=_context;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (strong, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property (strong, nonatomic) NSString *groupCategory;
@property (strong, nonatomic) NSString *groupLeaderboardIdentifier; // @synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier;
@property (strong, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property (strong, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property (readonly, nonatomic) NSString *playerID;
@property (nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property (nonatomic) long long value; // @synthesize value=_value;
@property (nonatomic) BOOL valueSet; // @synthesize valueSet=_valueSet;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serverRepresentation;

@end

