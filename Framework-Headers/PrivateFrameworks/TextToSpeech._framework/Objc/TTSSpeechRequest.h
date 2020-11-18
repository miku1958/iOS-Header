//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString, NSURL, TTSSpeechChannel;
@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding>
{
    id<TTSSpeechRequestDelegate> _delegate;
    TTSSpeechChannel *_speechChannel;
    BOOL _useCustomVoice;
    BOOL _maintainsInput;
    BOOL _audioSessionIDIsValid;
    BOOL _useVoiceBooster;
    BOOL _useMonarchStyleRate;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    long long _footprint;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    double _latency;
    double _dispatchTime;
    double _handledTime;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property (nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property (nonatomic) BOOL audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property (nonatomic) double dispatchTime; // @synthesize dispatchTime=_dispatchTime;
@property (nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property (nonatomic) long long gender; // @synthesize gender=_gender;
@property (nonatomic) double handledTime; // @synthesize handledTime=_handledTime;
@property (copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) double latency; // @synthesize latency=_latency;
@property (nonatomic) BOOL maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property (copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property (nonatomic) double pitch; // @synthesize pitch=_pitch;
@property (nonatomic) double rate; // @synthesize rate=_rate;
@property (strong, nonatomic) TTSSpeechChannel *speechChannel; // @synthesize speechChannel=_speechChannel;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) BOOL useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property (nonatomic) BOOL useMonarchStyleRate; // @synthesize useMonarchStyleRate=_useMonarchStyleRate;
@property (nonatomic) BOOL useVoiceBooster; // @synthesize useVoiceBooster=_useVoiceBooster;
@property (nonatomic) double volume; // @synthesize volume=_volume;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechChannel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2 forService:(id)arg3;
- (long long)vocalizerFootprint;
- (long long)vocalizerGender;

@end
