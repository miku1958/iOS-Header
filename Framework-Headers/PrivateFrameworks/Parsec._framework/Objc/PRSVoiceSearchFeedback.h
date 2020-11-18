//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface PRSVoiceSearchFeedback : PRSFeedback
{
    NSMutableArray *_mutableSpeechResults;
    long long _type;
    NSString *_connectionType;
    NSString *_voiceIdentifier;
    NSDictionary *_headers;
    NSArray *_speechResults;
    NSString *_dictationStopReason;
    long long _speechDetectedTime;
    long long _dictationStartTime;
    long long _dictationStopTime;
    long long _micButtonStartTime;
    long long _micButtonStopTime;
    long long _doneButtonTime;
}

@property (strong, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property (nonatomic) long long dictationStartTime; // @synthesize dictationStartTime=_dictationStartTime;
@property (strong, nonatomic) NSString *dictationStopReason; // @synthesize dictationStopReason=_dictationStopReason;
@property (nonatomic) long long dictationStopTime; // @synthesize dictationStopTime=_dictationStopTime;
@property (nonatomic) long long doneButtonTime; // @synthesize doneButtonTime=_doneButtonTime;
@property (strong, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property (nonatomic) long long micButtonStartTime; // @synthesize micButtonStartTime=_micButtonStartTime;
@property (nonatomic) long long micButtonStopTime; // @synthesize micButtonStopTime=_micButtonStopTime;
@property (nonatomic) long long speechDetectedTime; // @synthesize speechDetectedTime=_speechDetectedTime;
@property (strong, nonatomic) NSArray *speechResults; // @synthesize speechResults=_speechResults;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;

- (void).cxx_destruct;
- (void)addSpeechResult:(id)arg1 stable:(BOOL)arg2 timestamp:(long long)arg3 webResultsSize:(unsigned long long)arg4 spotlightResultsSize:(unsigned long long)arg5;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 type:(long long)arg2 timestamp:(long long)arg3 connectionType:(id)arg4;
- (id)plist;
- (id)tag;
- (id)typeString;

@end
