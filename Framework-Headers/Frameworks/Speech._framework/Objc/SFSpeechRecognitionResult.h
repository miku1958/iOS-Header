//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
    BOOL _final;
    SFTranscription *_bestTranscription;
    SFTranscription *_rawTranscription;
}

@property (readonly, copy, nonatomic) SFTranscription *bestTranscription; // @synthesize bestTranscription=_bestTranscription;
@property (readonly, nonatomic, getter=isFinal) BOOL final; // @synthesize final=_final;
@property (readonly, copy, nonatomic) SFTranscription *rawTranscription; // @synthesize rawTranscription=_rawTranscription;
@property (readonly, copy, nonatomic) NSArray *rawTranscriptions;
@property (readonly, copy, nonatomic) NSArray *transcriptions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithBestTranscription:(id)arg1 final:(BOOL)arg2;
- (id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expandTranscription:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
