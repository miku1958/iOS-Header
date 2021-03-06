//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTMultilingualStreamingRequest.h>

@class FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTStartMultilingualSpeechRequest, FTUpdateAudioInfo;

__attribute__((visibility("hidden")))
@interface FTMutableMultilingualStreamingRequest : FTMultilingualStreamingRequest
{
}

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (nonatomic) long long content_type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

