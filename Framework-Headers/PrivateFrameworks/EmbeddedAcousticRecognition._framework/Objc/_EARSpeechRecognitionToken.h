//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>
{
    struct Token _quasarToken;
}

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) struct Token quasarToken; // @synthesize quasarToken=_quasarToken;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double start;
@property (readonly, copy, nonatomic) NSString *tokenName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithQuasarToken:(const struct Token *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(BOOL)arg6 hasSpaceBefore:(BOOL)arg7 phoneSequence:(id)arg8;
- (BOOL)isEqual:(id)arg1;

@end

