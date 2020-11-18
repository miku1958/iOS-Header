//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSString;
@protocol TTSSpeechService;

@interface TTSSpeechVoice : NSObject <NSSecureCoding>
{
    id<TTSSpeechService> _service;
    BOOL _useVoiceBooster;
    BOOL _isDefault;
    BOOL _isCustomVoice;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    long long _footprint;
    long long _gender;
}

@property (nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property (nonatomic) long long gender; // @synthesize gender=_gender;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isCustomVoice; // @synthesize isCustomVoice=_isCustomVoice;
@property (readonly, nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL useVoiceBooster;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_initializeVoiceBooster;
- (void)_routeChange:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;

@end
