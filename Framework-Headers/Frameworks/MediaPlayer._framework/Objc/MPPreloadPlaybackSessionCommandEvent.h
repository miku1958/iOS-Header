//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSDictionary, NSString, NSURL;

@interface MPPreloadPlaybackSessionCommandEvent : MPRemoteCommandEvent
{
    NSString *_identifier;
    NSString *_type;
    long long _priority;
    NSString *_revision;
    NSURL *_playbackSessionDataFilePath;
    NSDictionary *_metadata;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) NSURL *playbackSessionDataFilePath; // @synthesize playbackSessionDataFilePath=_playbackSessionDataFilePath;
@property (readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

