//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNAudioDataSourceUtilities : NSObject
{
}

+ (id)audioQueueConfiguration;
+ (id)builtInMicrophoneDeviceUID;
+ (id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned int)arg1;
+ (id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned int)arg1;
+ (void)enableAlwaysOnAudioRouting:(struct OpaqueAudioQueue *)arg1;
+ (void)setChannelAssignment:(unsigned int)arg1 onQueue:(struct OpaqueAudioQueue *)arg2;

@end

