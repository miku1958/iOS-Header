//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticDeviceCapability-Protocol.h>

__attribute__((visibility("hidden")))
@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability>
{
    BOOL _supports3rdPartyHaptics;
}

@property (readonly) unsigned long long maximumNumberOfAudioChannels;
@property (readonly) unsigned long long maximumNumberOfHapticChannels;
@property (readonly) BOOL supportsAudio;
@property (readonly) BOOL supportsHaptics;

- (id)attributesForDynamicParameter:(id)arg1 error:(id *)arg2;
- (id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id *)arg3;
- (float)defaultValueForDynamicParameter:(id)arg1;
- (float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2;
- (id)init;
- (id)initPrivate;
- (float)maximumValueForDynamicParameter:(id)arg1;
- (float)maximumValueForEventParameter:(id)arg1;
- (float)minimumValueForDynamicParameter:(id)arg1;
- (float)minimumValueForEventParameter:(id)arg1;

@end

