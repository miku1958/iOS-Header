//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INSpeakable-Protocol.h>
#import <Intents/INSpeakableStringExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding>
{
    NSString *_spokenPhrase;
    NSString *_pronunciationHint;
    NSString *_vocabularyIdentifier;
    NSArray *_alternativeSpeakableMatches;
}

@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches; // @synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property (strong, nonatomic) NSString *spokenPhrase; // @synthesize spokenPhrase=_spokenPhrase;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_effectiveNSStringValue;
- (id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithIdentifier:(id)arg1 string:(id)arg2;
- (id)initWithSpokenPhrase:(id)arg1;
- (id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)spokenPhrases;
- (id)string;

@end
