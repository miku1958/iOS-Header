//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAudioOutputSettings.h>

#import <AVFCore/AVDecodedAudioSettingsForFig-Protocol.h>
#import <AVFCore/AVReencodedAudioSettingsForFig-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
- (id)audioOptions;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (BOOL)willYieldCompressedSamples;

@end

