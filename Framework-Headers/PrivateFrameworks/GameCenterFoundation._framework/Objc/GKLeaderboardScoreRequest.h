//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>
{
    GKPlayerInternal *_playerInternal;
    NSString *_gameBundleID;
    NSString *_identifier;
    NSString *_groupIdentifier;
    BOOL _friendsOnly;
    long long _timeScope;
    BOOL _prefetch;
}

@property (nonatomic) BOOL friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property (copy, nonatomic) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property (copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
@property (nonatomic, getter=isPrefetch) BOOL prefetch; // @synthesize prefetch=_prefetch;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;

+ (id)requestForPlayerInternals:(id)arg1;
+ (id)requestForRankRange:(struct _NSRange)arg1;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
