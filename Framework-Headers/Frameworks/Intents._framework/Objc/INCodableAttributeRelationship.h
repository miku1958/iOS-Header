//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, NSArray, NSDictionary, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding>
{
    NSDictionary *_originalDictionary;
    INCodableAttribute *_parentCodableAttribute;
    unsigned long long _relation;
    NSArray *_values;
    INCodableAttribute *_codableAttribute;
}

@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (strong, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary; // @synthesize _originalDictionary;
@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute; // @synthesize parentCodableAttribute=_parentCodableAttribute;
@property (nonatomic) unsigned long long relation; // @synthesize relation=_relation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class valueClass;
@property (strong, nonatomic) NSArray *values; // @synthesize values=_values;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__INCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionPredicateNameKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (void)_establishRelationship;
- (BOOL)compareValue:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

