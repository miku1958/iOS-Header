//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSData, SVXAudioStreamBasicDescription;

__attribute__((visibility("hidden")))
@interface SVXSpeechSynthesisAudio : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    SVXAudioStreamBasicDescription *_decoderASBD;
    SVXAudioStreamBasicDescription *_playerASBD;
}

@property (readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy, nonatomic) SVXAudioStreamBasicDescription *decoderASBD; // @synthesize decoderASBD=_decoderASBD;
@property (readonly, copy, nonatomic) SVXAudioStreamBasicDescription *playerASBD; // @synthesize playerASBD=_playerASBD;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 decoderASBD:(id)arg2 playerASBD:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

