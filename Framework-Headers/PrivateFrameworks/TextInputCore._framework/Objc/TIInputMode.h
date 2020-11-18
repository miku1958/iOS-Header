//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSLocale, NSString;

@interface TIInputMode : NSObject <NSCopying>
{
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
    NSString *_normalizedIdentifier;
}

@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier=_normalizedIdentifier;
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property (readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property (readonly, nonatomic) BOOL supportsPrediction;
@property (readonly, nonatomic) NSString *variant;

+ (id)inputModeWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNormalizedIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

