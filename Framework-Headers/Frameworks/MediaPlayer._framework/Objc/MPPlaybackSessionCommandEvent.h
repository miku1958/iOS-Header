//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent
{
    NSString *_identifier;
    NSString *_revision;
    long long _priority;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) NSString *revision; // @synthesize revision=_revision;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

