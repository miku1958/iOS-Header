//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *request;

- (id)initWithRequest:(id)arg1 playerPath:(id)arg2;
- (unsigned long long)type;

@end
