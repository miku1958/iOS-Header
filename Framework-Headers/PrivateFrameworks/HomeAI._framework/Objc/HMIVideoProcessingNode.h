//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIVideoNode.h>

@interface HMIVideoProcessingNode : HMIVideoNode
{
}

- (void)finish;
- (void)flush;
- (void)flushAsync;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end

