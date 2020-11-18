//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSString;

@interface GKLeaderboardSetInternal : GKInternalRepresentation
{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSDictionary *_leaderboardIdentifiers;
    NSDictionary *_icons;
}

@property (strong, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (strong, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDictionary *leaderboardIdentifiers; // @synthesize leaderboardIdentifiers=_leaderboardIdentifiers;
@property (strong, nonatomic) NSString *setIdentifier;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
