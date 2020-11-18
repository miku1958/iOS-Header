//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttributeMetadata, INCodableAttributeRelationship, INCodableDescription, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    NSMutableDictionary *_promptDialogsByType;
    BOOL _defaultAttribute;
    BOOL _supportsResolution;
    BOOL _supportsDynamicEnumeration;
    INCodableDescription *_internalCodableDescription;
    NSString *_typeString;
    long long _modifier;
    NSString *_propertyName;
    NSString *_displayName;
    NSString *_displayNameID;
    INCodableAttributeMetadata *_metadata;
    INCodableAttributeRelationship *_relationship;
    NSArray *_promptDialogs;
    NSArray *_unsupportedReasons;
    NSNumber *_displayPriorityRank;
    Class __relationshipValueTransformerClass;
}

@property (weak, nonatomic, setter=_setCodableDescription:) INCodableDescription *_codableDescription; // @synthesize _codableDescription=_internalCodableDescription;
@property (readonly, nonatomic) Class _relationshipValueTransformerClass; // @synthesize _relationshipValueTransformerClass=__relationshipValueTransformerClass;
@property (copy, nonatomic, setter=_setTypeString:) NSString *_typeString; // @synthesize _typeString;
@property (readonly, nonatomic) Class _unsafeObjectClass;
@property (readonly, copy, nonatomic) NSString *cacheGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultAttribute) BOOL defaultAttribute; // @synthesize defaultAttribute=_defaultAttribute;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property (copy, nonatomic) NSNumber *displayPriorityRank; // @synthesize displayPriorityRank=_displayPriorityRank;
@property (readonly, nonatomic) SEL getter;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *keyPrefix;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (strong, nonatomic) INCodableAttributeMetadata *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) long long modifier; // @synthesize modifier=_modifier;
@property (readonly, nonatomic) Class objectClass;
@property (copy, nonatomic, setter=_setPromptDialogs:) NSArray *promptDialogs; // @synthesize promptDialogs=_promptDialogs;
@property (copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property (strong, nonatomic) INCodableAttributeRelationship *relationship; // @synthesize relationship=_relationship;
@property (readonly, nonatomic) Class resolutionResultClass;
@property (readonly, nonatomic) SEL setter;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDynamicEnumeration; // @synthesize supportsDynamicEnumeration=_supportsDynamicEnumeration;
@property (nonatomic) BOOL supportsResolution; // @synthesize supportsResolution=_supportsResolution;
@property (copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons; // @synthesize unsupportedReasons=_unsupportedReasons;
@property (readonly, nonatomic) long long valueType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)promptDialogWithType:(unsigned long long)arg1;
- (id)unsupportedReasonWithIndex:(unsigned long long)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
