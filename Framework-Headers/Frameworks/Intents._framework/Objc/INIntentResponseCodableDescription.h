//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INRootCodableDescription.h>

@class INCodableAttribute, NSArray, NSMutableDictionary, NSString;

@interface INIntentResponseCodableDescription : INRootCodableDescription
{
    NSMutableDictionary *_intentResponseCodableCodes;
    NSString *_outputAttributeName;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSArray *_responseCodes;
}

@property (strong, nonatomic, setter=_setOutputAttributeName:) NSString *_outputAttributeName; // @synthesize _outputAttributeName;
@property (readonly, nonatomic) INCodableAttribute *outputAttribute;
@property (copy, nonatomic) NSArray *responseCodes; // @synthesize responseCodes=_responseCodes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)_ignoredAttributeTags;
- (id)attributes;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intentResponseCodeWithCode:(long long)arg1;
- (id)keyPrefix;
- (void)updateWithDictionary:(id)arg1;

@end
