//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSDictionary, NSString;

@interface MRSetStateMessage : MRProtocolMessage
{
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
}

@property (readonly, nonatomic) NSString *displayID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *nowPlayingInfo;
@property (readonly, nonatomic) void *playbackQueue;
@property (readonly, nonatomic) unsigned int playbackState;
@property (readonly, nonatomic) NSArray *supportedCommands;

- (void)dealloc;
- (id)initWithNowPlayingState:(id)arg1;
- (unsigned long long)type;

@end

