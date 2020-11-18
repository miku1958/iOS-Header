//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeperClient/NSCopying-Protocol.h>
#import <StoreBookkeeperClient/NSSecureCoding-Protocol.h>

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    long long _foreignDatabaseEntityID;
    double _bookmarkTimestamp;
    double _bookmarkTime;
    unsigned long long _userPlayCount;
}

@property (nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property (nonatomic) double bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property (readonly, nonatomic) long long foreignDatabaseEntityID; // @synthesize foreignDatabaseEntityID=_foreignDatabaseEntityID;
@property (nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
@property (readonly, nonatomic) NSString *ubiquitousIdentifier; // @synthesize ubiquitousIdentifier=_ubiquitousIdentifier;
@property (nonatomic) unsigned long long userPlayCount; // @synthesize userPlayCount=_userPlayCount;

+ (BOOL)supportsSecureCoding;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;
- (void).cxx_destruct;
- (id)SBKUniversalPlaybackPositionMetadata;
- (BOOL)bookmarkTimeModified;
- (BOOL)bookmarkTimestampModified;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasBeenPlayedModified;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;
- (BOOL)userPlayCountModified;

@end

