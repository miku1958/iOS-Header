//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextToSpeech/TTSSpeechVoice.h>

@interface TTSNashvilleSpeechVoice : TTSSpeechVoice
{
    BOOL _overrideDefault;
    BOOL _overrideFallbackDefault;
    BOOL _overrideExcludeInAvailableVoiceList;
    long long _voiceType;
}

@property (nonatomic) BOOL overrideDefault; // @synthesize overrideDefault=_overrideDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList; // @synthesize overrideExcludeInAvailableVoiceList=_overrideExcludeInAvailableVoiceList;
@property (nonatomic) BOOL overrideFallbackDefault; // @synthesize overrideFallbackDefault=_overrideFallbackDefault;
@property (nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludeInAvailableVoiceList;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCombinedFootprint;
- (BOOL)isDefault;
- (BOOL)isFallbackDefault;
- (BOOL)isSystemVoice;

@end

