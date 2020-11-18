//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPRadioStation, NSArray;

@interface MPMusicPlayerClientState : NSObject
{
    BOOL _allowsBackgroundVideo;
    int _backgroundPlaybackAccess;
    MPMediaItem *_firstItem;
    MPMediaPlaylist *_geniusMixPlaylist;
    BOOL _hasAudioBackgroundMode;
    MPMediaQuery *_query;
    MPRadioStation *_radioStation;
    long long _repeatMode;
    BOOL _seeking;
    long long _shuffleMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _videoPlaybackEnabled;
    NSArray *_storeIDs;
}

@property (nonatomic) BOOL allowsBackgroundVideo; // @synthesize allowsBackgroundVideo=_allowsBackgroundVideo;
@property (nonatomic) int backgroundPlaybackAccess; // @synthesize backgroundPlaybackAccess=_backgroundPlaybackAccess;
@property (strong, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property (strong, nonatomic) MPMediaPlaylist *geniusMixPlaylist; // @synthesize geniusMixPlaylist=_geniusMixPlaylist;
@property (nonatomic) BOOL hasAudioBackgroundMode; // @synthesize hasAudioBackgroundMode=_hasAudioBackgroundMode;
@property (strong, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property (strong, nonatomic) MPRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property (nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property (nonatomic) BOOL seeking; // @synthesize seeking=_seeking;
@property (nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property (copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property (nonatomic) BOOL useApplicationSpecificQueue; // @synthesize useApplicationSpecificQueue=_useApplicationSpecificQueue;
@property (nonatomic) BOOL videoPlaybackEnabled; // @synthesize videoPlaybackEnabled=_videoPlaybackEnabled;

- (void).cxx_destruct;

@end
