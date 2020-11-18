//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVVCAudioBuffer : NSObject
{
    void *_impl;
}

@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) int channels;
@property (readonly) void *data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property (readonly) unsigned char remoteVoiceActivityRMS;
@property (readonly) unsigned char remoteVoiceActivityVAD;
@property (readonly) struct AudioStreamBasicDescription *streamDescription;
@property (readonly) unsigned long long timeStamp;

- (void)dealloc;
- (void)finalize;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;

@end

