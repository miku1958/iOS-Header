//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBVideoGroupsConfig : PBCodable <NSCopying>
{
    long long _moreFromPublisherBarTime;
    long long _moreVideosGroupMaxNumberOfVideos;
    long long _moreVideosGroupMinNumberOfVideos;
    long long _nowPlayingBarTime;
    long long _upNextBarTime;
    int _moreVideosGroupFilterOption;
    int _moreVideosGroupSortOption;
    BOOL _moreFromPublisherBarEnabled;
    BOOL _playsMutedByDefault;
    struct {
        unsigned int moreFromPublisherBarTime:1;
        unsigned int moreVideosGroupMaxNumberOfVideos:1;
        unsigned int moreVideosGroupMinNumberOfVideos:1;
        unsigned int nowPlayingBarTime:1;
        unsigned int upNextBarTime:1;
        unsigned int moreVideosGroupFilterOption:1;
        unsigned int moreVideosGroupSortOption:1;
        unsigned int moreFromPublisherBarEnabled:1;
        unsigned int playsMutedByDefault:1;
    } _has;
}

@property (nonatomic) BOOL hasMoreFromPublisherBarEnabled;
@property (nonatomic) BOOL hasMoreFromPublisherBarTime;
@property (nonatomic) BOOL hasMoreVideosGroupFilterOption;
@property (nonatomic) BOOL hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) BOOL hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) BOOL hasMoreVideosGroupSortOption;
@property (nonatomic) BOOL hasNowPlayingBarTime;
@property (nonatomic) BOOL hasPlaysMutedByDefault;
@property (nonatomic) BOOL hasUpNextBarTime;
@property (nonatomic) BOOL moreFromPublisherBarEnabled; // @synthesize moreFromPublisherBarEnabled=_moreFromPublisherBarEnabled;
@property (nonatomic) long long moreFromPublisherBarTime; // @synthesize moreFromPublisherBarTime=_moreFromPublisherBarTime;
@property (nonatomic) int moreVideosGroupFilterOption; // @synthesize moreVideosGroupFilterOption=_moreVideosGroupFilterOption;
@property (nonatomic) long long moreVideosGroupMaxNumberOfVideos; // @synthesize moreVideosGroupMaxNumberOfVideos=_moreVideosGroupMaxNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMinNumberOfVideos; // @synthesize moreVideosGroupMinNumberOfVideos=_moreVideosGroupMinNumberOfVideos;
@property (nonatomic) int moreVideosGroupSortOption; // @synthesize moreVideosGroupSortOption=_moreVideosGroupSortOption;
@property (nonatomic) long long nowPlayingBarTime; // @synthesize nowPlayingBarTime=_nowPlayingBarTime;
@property (nonatomic) BOOL playsMutedByDefault; // @synthesize playsMutedByDefault=_playsMutedByDefault;
@property (nonatomic) long long upNextBarTime; // @synthesize upNextBarTime=_upNextBarTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
