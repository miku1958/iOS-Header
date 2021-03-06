//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttributeMetadata, INCodableAttributeRelationship, INCodableDescription, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    NSMutableDictionary *_promptDialogsByType;
    NSDictionary *_arraySizesBySizeClass;
    BOOL _fixedSizeArray;
    BOOL _defaultAttribute;
    BOOL _configurable;
    BOOL _supportsResolution;
    BOOL _supportsDynamicEnumeration;
    BOOL _supportsSearch;
    INCodableDescription *_internalCodableDescription;
    NSString *_typeString;
    long long _modifier;
    NSString *_propertyName;
    NSString *_displayName;
    NSString *_displayNameID;
    INCodableAttributeMetadata *_metadata;
    INCodableAttributeRelationship *_relationship;
    NSArray *_unsupportedReasons;
    NSString *_entityKeypath;
    NSArray *_promptDialogs;
    long long _windowSize;
    NSNumber *_displayPriorityRank;
    Class __relationshipValueTransformerClass;
}

@property (readonly, nonatomic) NSString *_attributeDisplayPriorityKey;
@property (readonly, nonatomic) NSString *_attributeTagKey;
@property (weak, nonatomic, setter=_setCodableDescription:) INCodableDescription *_codableDescription; // @synthesize _codableDescription=_internalCodableDescription;
@property (readonly, nonatomic) Class _relationshipValueTransformerClass; // @synthesize _relationshipValueTransformerClass=__relationshipValueTransformerClass;
@property (copy, nonatomic, setter=_setTypeString:) NSString *_typeString; // @synthesize _typeString;
@property (readonly, nonatomic) Class _unsafeObjectClass;
@property (nonatomic, getter=isConfigurable) BOOL configurable; // @synthesize configurable=_configurable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultAttribute) BOOL defaultAttribute; // @synthesize defaultAttribute=_defaultAttribute;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property (copy, nonatomic) NSNumber *displayPriorityRank; // @synthesize displayPriorityRank=_displayPriorityRank;
@property (copy, nonatomic) NSString *entityKeypath; // @synthesize entityKeypath=_entityKeypath;
@property (nonatomic, getter=isFixedSizeArray) BOOL fixedSizeArray; // @synthesize fixedSizeArray=_fixedSizeArray;
@property (readonly, nonatomic) SEL getter;
@property (readonly) unsigned long long hash;
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
@property (nonatomic) BOOL supportsSearch; // @synthesize supportsSearch=_supportsSearch;
@property (copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons; // @synthesize unsupportedReasons=_unsupportedReasons;
@property (readonly, nonatomic) long long valueType;
@property (nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__INCodableDescriptionArraySizeSizeClassKey;
- (id)__INCodableDescriptionArraySizeSizeKey;
- (id)__INCodableDescriptionArraySizesKey;
- (id)__INCodableDescriptionConfigurableKey;
- (id)__INCodableDescriptionDefaultKey;
- (id)__INCodableDescriptionDisplayNameIDKey;
- (id)__INCodableDescriptionDisplayNameKey;
- (id)__INCodableDescriptionDisplayPriorityKey;
- (id)__INCodableDescriptionEntityKeypathKey;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INCodableDescriptionFixedSizeArrayKey;
- (id)__INCodableDescriptionMetadataKey;
- (id)__INCodableDescriptionNameKey;
- (id)__INCodableDescriptionPromptDialogsKey;
- (id)__INCodableDescriptionRelationshipKey;
- (id)__INCodableDescriptionSupportsDynamicEnumerationKey;
- (id)__INCodableDescriptionSupportsMultipleValuesKey;
- (id)__INCodableDescriptionSupportsResolutionKey;
- (id)__INCodableDescriptionSupportsSearchKey;
- (id)__INCodableDescriptionTagKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionUnsupportedReasonsKey;
- (id)__INCodableDescriptionWindowSizeKey;
- (id)__INIntentResponseCodableDescriptionArraySizeSizeClassKey;
- (id)__INIntentResponseCodableDescriptionArraySizeSizeKey;
- (id)__INIntentResponseCodableDescriptionArraySizesKey;
- (id)__INIntentResponseCodableDescriptionConfigurableKey;
- (id)__INIntentResponseCodableDescriptionDefaultKey;
- (id)__INIntentResponseCodableDescriptionDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionDisplayPriorityKey;
- (id)__INIntentResponseCodableDescriptionEntityKeypathKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionFixedSizeArrayKey;
- (id)__INIntentResponseCodableDescriptionMetadataKey;
- (id)__INIntentResponseCodableDescriptionNameKey;
- (id)__INIntentResponseCodableDescriptionPromptDialogsKey;
- (id)__INIntentResponseCodableDescriptionRelationshipKey;
- (id)__INIntentResponseCodableDescriptionSupportsDynamicEnumerationKey;
- (id)__INIntentResponseCodableDescriptionSupportsMultipleValuesKey;
- (id)__INIntentResponseCodableDescriptionSupportsResolutionKey;
- (id)__INIntentResponseCodableDescriptionSupportsSearchKey;
- (id)__INIntentResponseCodableDescriptionTagKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionUnsupportedReasonsKey;
- (id)__INIntentResponseCodableDescriptionWindowSizeKey;
- (id)__INTypeCodableDescriptionArraySizeSizeClassKey;
- (id)__INTypeCodableDescriptionArraySizeSizeKey;
- (id)__INTypeCodableDescriptionArraySizesKey;
- (id)__INTypeCodableDescriptionConfigurableKey;
- (id)__INTypeCodableDescriptionDefaultKey;
- (id)__INTypeCodableDescriptionDisplayNameIDKey;
- (id)__INTypeCodableDescriptionDisplayNameKey;
- (id)__INTypeCodableDescriptionDisplayPriorityKey;
- (id)__INTypeCodableDescriptionEntityKeypathKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionFixedSizeArrayKey;
- (id)__INTypeCodableDescriptionMetadataKey;
- (id)__INTypeCodableDescriptionNameKey;
- (id)__INTypeCodableDescriptionPromptDialogsKey;
- (id)__INTypeCodableDescriptionRelationshipKey;
- (id)__INTypeCodableDescriptionSupportsDynamicEnumerationKey;
- (id)__INTypeCodableDescriptionSupportsMultipleValuesKey;
- (id)__INTypeCodableDescriptionSupportsResolutionKey;
- (id)__INTypeCodableDescriptionSupportsSearchKey;
- (id)__INTypeCodableDescriptionTagKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionUnsupportedReasonsKey;
- (id)__INTypeCodableDescriptionWindowSizeKey;
- (long long)arraySizeForSizeClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexForUnsupportedReason:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (id)promptDialogWithType:(unsigned long long)arg1;
- (id)unsupportedReasonWithIndex:(unsigned long long)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

