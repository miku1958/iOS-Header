//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVHapticPlayer;

@interface AVHapticSequence : NSObject
{
    AVHapticPlayer *_player;
    unsigned long long _seqID;
    double _lastStartTime;
    BOOL _loopIsEnabled;
    unsigned long long _channelCount;
    unsigned long long _activeChannel;
}

@property unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property (readonly) unsigned long long channelCount; // @synthesize channelCount=_channelCount;
@property double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property BOOL loopingEnabled;
@property (weak) AVHapticPlayer *player; // @synthesize player=_player;
@property unsigned long long seqID; // @synthesize seqID=_seqID;

- (void).cxx_destruct;
- (BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;
- (void)dealloc;
- (unsigned long long)getChannelCount;
- (id)init;
- (id)initWithData:(id)arg1 player:(id)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id *)arg3;
- (BOOL)playAtTime:(double)arg1 offset:(double)arg2 error:(id *)arg3;
- (BOOL)prepareToPlayAndReturnError:(id *)arg1;
- (BOOL)setLoopingEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 channel:(unsigned long long)arg3 atTime:(double)arg4 error:(id *)arg5;
- (BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)stopAtTime:(double)arg1 error:(id *)arg2;

@end
