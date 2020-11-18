//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSConfig : NSObject
{
}

+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (int)csAudioProcessingQueuePriority;
+ (float)daysBeforeRemovingLogFiles;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)maxNumLoggingFiles;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;

@end
