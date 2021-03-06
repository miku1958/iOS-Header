//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSCopying-Protocol.h>
#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldCache;
    BOOL _disableCompactVoiceFallback;
    BOOL _forceServerTTS;
    BOOL _canUseServerTTS;
    BOOL _retryDeviceOnNetworkStall;
    unsigned int _audioSessionID;
    NSString *_text;
    NSString *_languageCode;
    long long _footprint;
    long long _voiceType;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    NSDictionary *_contextInfo;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    NSArray *_customResourceURLs;
    NSAttributedString *_attributedText;
    NSString *_utterance;
    NSString *_clientBundleIdentifier;
    unsigned long long _requestCreatedTimestamp;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
    long long _pointer;
    NSString *_voiceName;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property (nonatomic) BOOL canUseServerTTS; // @synthesize canUseServerTTS=_canUseServerTTS;
@property (copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property (strong, nonatomic) NSArray *customResourceURLs; // @synthesize customResourceURLs=_customResourceURLs;
@property (nonatomic) BOOL disableCompactVoiceFallback; // @synthesize disableCompactVoiceFallback=_disableCompactVoiceFallback;
@property (nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property (nonatomic) BOOL forceServerTTS; // @synthesize forceServerTTS=_forceServerTTS;
@property (nonatomic) long long gender; // @synthesize gender=_gender;
@property (copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property (copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property (nonatomic) double pitch; // @synthesize pitch=_pitch;
@property (nonatomic) long long pointer; // @synthesize pointer=_pointer;
@property (nonatomic) double rate; // @synthesize rate=_rate;
@property (nonatomic) unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property (copy, nonatomic) NSURL *resourceListURL; // @synthesize resourceListURL=_resourceListURL;
@property (copy, nonatomic) NSURL *resourceSearchPathURL; // @synthesize resourceSearchPathURL=_resourceSearchPathURL;
@property (nonatomic) BOOL retryDeviceOnNetworkStall; // @synthesize retryDeviceOnNetworkStall=_retryDeviceOnNetworkStall;
@property (nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property (copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property (copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property (nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property (nonatomic) double volume; // @synthesize volume=_volume;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)canLogRequestText;
- (id)contextInfoString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isSimilarTo:(id)arg1;
- (id)logText;
- (id)logUtterance;

@end

