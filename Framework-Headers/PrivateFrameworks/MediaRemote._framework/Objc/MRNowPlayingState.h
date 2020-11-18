//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRPlaybackQueue, MRPlaybackQueueRequest, MRPlayerPath, NSArray, NSData, NSDictionary, NSString, _MRSetStateMessageProtobuf;

@interface MRNowPlayingState : NSObject <NSCopying>
{
    BOOL _hasPlaybackState;
    BOOL _hasPlaybackStateTimestamp;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    MRPlaybackQueue *_playbackQueue;
    NSString *_displayID;
    NSString *_displayName;
    MRPlayerPath *_playerPath;
    MRPlaybackQueueRequest *_request;
    double _playbackStateTimestamp;
    unsigned long long _playbackQueueCapabilities;
}

@property (readonly, nonatomic) BOOL containsArtwork;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL hasPlaybackState; // @synthesize hasPlaybackState=_hasPlaybackState;
@property (nonatomic) BOOL hasPlaybackStateTimestamp; // @synthesize hasPlaybackStateTimestamp=_hasPlaybackStateTimestamp;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property (nonatomic) unsigned long long playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
@property (nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property (nonatomic) double playbackStateTimestamp; // @synthesize playbackStateTimestamp=_playbackStateTimestamp;
@property (copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property (readonly, nonatomic) _MRSetStateMessageProtobuf *protobuf;
@property (copy, nonatomic) MRPlaybackQueueRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutArtwork;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
