//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject
{
    AVAudioPlayerNode *_player;
    AVAudioUnitTimePitch *_timePitch;
}

@property (strong, nonatomic) AVAudioPlayerNode *player; // @synthesize player=_player;
@property (strong, nonatomic) AVAudioUnitTimePitch *timePitch; // @synthesize timePitch=_timePitch;

- (void).cxx_destruct;
- (BOOL)beginPlayback:(id)arg1 withError:(id *)arg2;
- (void)connectToEngine:(id)arg1;
- (void)disconnectFromEngine:(id)arg1;
- (id)init;

@end

