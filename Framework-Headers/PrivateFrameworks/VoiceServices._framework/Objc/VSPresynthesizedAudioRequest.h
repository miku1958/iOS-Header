//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSCopying-Protocol.h>
#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enqueue;
    unsigned int _audioSessionID;
    NSData *_audioData;
    NSString *_text;
    unsigned long long _requestCreatedTimestamp;
    NSString *_clientBundleIdentifier;
    unsigned long long _pcmDataSize;
    CDUnknownBlockType _stopHandler;
    struct AudioStreamBasicDescription _decoderStreamDescription;
    struct AudioStreamBasicDescription _playerStreamDescription;
}

@property (readonly, copy, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property (nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property (copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (readonly, nonatomic) struct AudioStreamBasicDescription decoderStreamDescription; // @synthesize decoderStreamDescription=_decoderStreamDescription;
@property (nonatomic) BOOL enqueue; // @synthesize enqueue=_enqueue;
@property (nonatomic) unsigned long long pcmDataSize; // @synthesize pcmDataSize=_pcmDataSize;
@property (readonly, nonatomic) struct AudioStreamBasicDescription playerStreamDescription; // @synthesize playerStreamDescription=_playerStreamDescription;
@property (nonatomic) unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property (copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAudioData:(id)arg1 decoderStreamDescription:(struct AudioStreamBasicDescription)arg2 playerStreamDescription:(struct AudioStreamBasicDescription)arg3;
- (id)initWithAudioData:(id)arg1 playerStreamDescription:(struct AudioStreamBasicDescription)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;

@end

