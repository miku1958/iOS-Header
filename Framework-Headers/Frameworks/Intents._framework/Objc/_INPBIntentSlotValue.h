//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBIntentSlotValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _PayloadCallAudioRoutes;
    CDStruct_95bda58d _PayloadCallCapabilitys;
    CDStruct_95bda58d _PayloadCallDestinationTypes;
    CDStruct_95bda58d _PayloadCallRecordTypes;
    CDStruct_95bda58d _PayloadCarAirCirculationModes;
    CDStruct_95bda58d _PayloadCarAudioSources;
    CDStruct_95bda58d _PayloadCarDefrosters;
    CDStruct_95bda58d _PayloadCarSeats;
    CDStruct_95bda58d _PayloadDeviceTypes;
    CDStruct_95bda58d _PayloadFileEntityTypes;
    CDStruct_95bda58d _PayloadFilePropertyNames;
    CDStruct_95bda58d _PayloadFilePropertyQualifiers;
    CDStruct_95bda58d _PayloadFileSearchScopes;
    CDStruct_95bda58d _PayloadFileShareModes;
    CDStruct_95bda58d _PayloadFileTypes;
    CDStruct_95bda58d _PayloadHomeAttributeTypes;
    CDStruct_95bda58d _PayloadHomeAttributeValueTypes;
    CDStruct_95bda58d _PayloadHomeDeviceTypes;
    CDStruct_95bda58d _PayloadHomeEntityTypes;
    CDStruct_95bda58d _PayloadMessageAttributes;
    CDStruct_95bda58d _PayloadPhotoAttributes;
    CDStruct_95bda58d _PayloadPreferredCallProviders;
    struct {
        BOOL *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveBools;
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveDoubles;
    CDStruct_95bda58d _PayloadPrimitiveInts;
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveLongs;
    CDStruct_95bda58d _PayloadRadioTypes;
    CDStruct_95bda58d _PayloadRelativeReferences;
    CDStruct_95bda58d _PayloadRelativeSettings;
    CDStruct_95bda58d _PayloadWorkoutGoalUnitTypes;
    CDStruct_95bda58d _PayloadWorkoutLocationTypes;
    NSMutableArray *_PayloadContactLists;
    NSMutableArray *_PayloadContactValues;
    NSMutableArray *_PayloadCurrencyAmounts;
    NSMutableArray *_PayloadDataStringLists;
    NSMutableArray *_PayloadDataStrings;
    NSMutableArray *_PayloadDateTimeRangeLists;
    NSMutableArray *_PayloadDateTimeRangeValues;
    NSMutableArray *_PayloadDialingContacts;
    NSMutableArray *_PayloadDoubleLists;
    NSMutableArray *_PayloadDoubleValues;
    NSMutableArray *_PayloadFilePropertyValues;
    NSMutableArray *_PayloadFilePropertys;
    NSMutableArray *_PayloadHomeAttributeValues;
    NSMutableArray *_PayloadHomeAttributes;
    NSMutableArray *_PayloadHomeEntitys;
    NSMutableArray *_PayloadIntegerLists;
    NSMutableArray *_PayloadIntegerValues;
    NSMutableArray *_PayloadLocationLists;
    NSMutableArray *_PayloadLocations;
    NSMutableArray *_PayloadLongLists;
    NSMutableArray *_PayloadLongValues;
    NSMutableArray *_PayloadPaymentMethodLists;
    NSMutableArray *_PayloadPaymentMethodValues;
    NSMutableArray *_PayloadPrimitiveStrings;
    NSMutableArray *_PayloadShareDestinations;
    NSMutableArray *_PayloadStringLists;
    NSMutableArray *_PayloadStringValues;
    NSMutableArray *_PayloadTemperatureLists;
    NSMutableArray *_PayloadTemperatureValues;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (readonly, nonatomic) int *PayloadCallAudioRoutes;
@property (readonly, nonatomic) unsigned long long PayloadCallAudioRoutesCount;
@property (readonly, nonatomic) int *PayloadCallCapabilitys;
@property (readonly, nonatomic) unsigned long long PayloadCallCapabilitysCount;
@property (readonly, nonatomic) int *PayloadCallDestinationTypes;
@property (readonly, nonatomic) unsigned long long PayloadCallDestinationTypesCount;
@property (readonly, nonatomic) int *PayloadCallRecordTypes;
@property (readonly, nonatomic) unsigned long long PayloadCallRecordTypesCount;
@property (readonly, nonatomic) int *PayloadCarAirCirculationModes;
@property (readonly, nonatomic) unsigned long long PayloadCarAirCirculationModesCount;
@property (readonly, nonatomic) int *PayloadCarAudioSources;
@property (readonly, nonatomic) unsigned long long PayloadCarAudioSourcesCount;
@property (readonly, nonatomic) int *PayloadCarDefrosters;
@property (readonly, nonatomic) unsigned long long PayloadCarDefrostersCount;
@property (readonly, nonatomic) int *PayloadCarSeats;
@property (readonly, nonatomic) unsigned long long PayloadCarSeatsCount;
@property (strong, nonatomic) NSMutableArray *PayloadContactLists; // @synthesize PayloadContactLists=_PayloadContactLists;
@property (strong, nonatomic) NSMutableArray *PayloadContactValues; // @synthesize PayloadContactValues=_PayloadContactValues;
@property (strong, nonatomic) NSMutableArray *PayloadCurrencyAmounts;
@property (strong, nonatomic) NSMutableArray *PayloadDataStringLists; // @synthesize PayloadDataStringLists=_PayloadDataStringLists;
@property (strong, nonatomic) NSMutableArray *PayloadDataStrings; // @synthesize PayloadDataStrings=_PayloadDataStrings;
@property (strong, nonatomic) NSMutableArray *PayloadDateTimeRangeLists; // @synthesize PayloadDateTimeRangeLists=_PayloadDateTimeRangeLists;
@property (strong, nonatomic) NSMutableArray *PayloadDateTimeRangeValues; // @synthesize PayloadDateTimeRangeValues=_PayloadDateTimeRangeValues;
@property (readonly, nonatomic) int *PayloadDeviceTypes;
@property (readonly, nonatomic) unsigned long long PayloadDeviceTypesCount;
@property (strong, nonatomic) NSMutableArray *PayloadDialingContacts;
@property (strong, nonatomic) NSMutableArray *PayloadDoubleLists; // @synthesize PayloadDoubleLists=_PayloadDoubleLists;
@property (strong, nonatomic) NSMutableArray *PayloadDoubleValues; // @synthesize PayloadDoubleValues=_PayloadDoubleValues;
@property (readonly, nonatomic) int *PayloadFileEntityTypes;
@property (readonly, nonatomic) unsigned long long PayloadFileEntityTypesCount;
@property (readonly, nonatomic) int *PayloadFilePropertyNames;
@property (readonly, nonatomic) unsigned long long PayloadFilePropertyNamesCount;
@property (readonly, nonatomic) int *PayloadFilePropertyQualifiers;
@property (readonly, nonatomic) unsigned long long PayloadFilePropertyQualifiersCount;
@property (strong, nonatomic) NSMutableArray *PayloadFilePropertyValues;
@property (strong, nonatomic) NSMutableArray *PayloadFilePropertys;
@property (readonly, nonatomic) int *PayloadFileSearchScopes;
@property (readonly, nonatomic) unsigned long long PayloadFileSearchScopesCount;
@property (readonly, nonatomic) int *PayloadFileShareModes;
@property (readonly, nonatomic) unsigned long long PayloadFileShareModesCount;
@property (readonly, nonatomic) int *PayloadFileTypes;
@property (readonly, nonatomic) unsigned long long PayloadFileTypesCount;
@property (readonly, nonatomic) int *PayloadHomeAttributeTypes;
@property (readonly, nonatomic) unsigned long long PayloadHomeAttributeTypesCount;
@property (readonly, nonatomic) int *PayloadHomeAttributeValueTypes;
@property (readonly, nonatomic) unsigned long long PayloadHomeAttributeValueTypesCount;
@property (strong, nonatomic) NSMutableArray *PayloadHomeAttributeValues;
@property (strong, nonatomic) NSMutableArray *PayloadHomeAttributes;
@property (readonly, nonatomic) int *PayloadHomeDeviceTypes;
@property (readonly, nonatomic) unsigned long long PayloadHomeDeviceTypesCount;
@property (readonly, nonatomic) int *PayloadHomeEntityTypes;
@property (readonly, nonatomic) unsigned long long PayloadHomeEntityTypesCount;
@property (strong, nonatomic) NSMutableArray *PayloadHomeEntitys;
@property (strong, nonatomic) NSMutableArray *PayloadIntegerLists; // @synthesize PayloadIntegerLists=_PayloadIntegerLists;
@property (strong, nonatomic) NSMutableArray *PayloadIntegerValues; // @synthesize PayloadIntegerValues=_PayloadIntegerValues;
@property (strong, nonatomic) NSMutableArray *PayloadLocationLists; // @synthesize PayloadLocationLists=_PayloadLocationLists;
@property (strong, nonatomic) NSMutableArray *PayloadLocations; // @synthesize PayloadLocations=_PayloadLocations;
@property (strong, nonatomic) NSMutableArray *PayloadLongLists; // @synthesize PayloadLongLists=_PayloadLongLists;
@property (strong, nonatomic) NSMutableArray *PayloadLongValues; // @synthesize PayloadLongValues=_PayloadLongValues;
@property (readonly, nonatomic) int *PayloadMessageAttributes;
@property (readonly, nonatomic) unsigned long long PayloadMessageAttributesCount;
@property (strong, nonatomic) NSMutableArray *PayloadPaymentMethodLists; // @synthesize PayloadPaymentMethodLists=_PayloadPaymentMethodLists;
@property (strong, nonatomic) NSMutableArray *PayloadPaymentMethodValues; // @synthesize PayloadPaymentMethodValues=_PayloadPaymentMethodValues;
@property (readonly, nonatomic) int *PayloadPhotoAttributes;
@property (readonly, nonatomic) unsigned long long PayloadPhotoAttributesCount;
@property (readonly, nonatomic) int *PayloadPreferredCallProviders;
@property (readonly, nonatomic) unsigned long long PayloadPreferredCallProvidersCount;
@property (readonly, nonatomic) BOOL *PayloadPrimitiveBools;
@property (readonly, nonatomic) unsigned long long PayloadPrimitiveBoolsCount;
@property (readonly, nonatomic) double *PayloadPrimitiveDoubles;
@property (readonly, nonatomic) unsigned long long PayloadPrimitiveDoublesCount;
@property (readonly, nonatomic) int *PayloadPrimitiveInts;
@property (readonly, nonatomic) unsigned long long PayloadPrimitiveIntsCount;
@property (readonly, nonatomic) long long *PayloadPrimitiveLongs;
@property (readonly, nonatomic) unsigned long long PayloadPrimitiveLongsCount;
@property (strong, nonatomic) NSMutableArray *PayloadPrimitiveStrings; // @synthesize PayloadPrimitiveStrings=_PayloadPrimitiveStrings;
@property (readonly, nonatomic) int *PayloadRadioTypes;
@property (readonly, nonatomic) unsigned long long PayloadRadioTypesCount;
@property (readonly, nonatomic) int *PayloadRelativeReferences;
@property (readonly, nonatomic) unsigned long long PayloadRelativeReferencesCount;
@property (readonly, nonatomic) int *PayloadRelativeSettings;
@property (readonly, nonatomic) unsigned long long PayloadRelativeSettingsCount;
@property (strong, nonatomic) NSMutableArray *PayloadShareDestinations;
@property (strong, nonatomic) NSMutableArray *PayloadStringLists; // @synthesize PayloadStringLists=_PayloadStringLists;
@property (strong, nonatomic) NSMutableArray *PayloadStringValues; // @synthesize PayloadStringValues=_PayloadStringValues;
@property (strong, nonatomic) NSMutableArray *PayloadTemperatureLists; // @synthesize PayloadTemperatureLists=_PayloadTemperatureLists;
@property (strong, nonatomic) NSMutableArray *PayloadTemperatureValues; // @synthesize PayloadTemperatureValues=_PayloadTemperatureValues;
@property (readonly, nonatomic) int *PayloadWorkoutGoalUnitTypes;
@property (readonly, nonatomic) unsigned long long PayloadWorkoutGoalUnitTypesCount;
@property (readonly, nonatomic) int *PayloadWorkoutLocationTypes;
@property (readonly, nonatomic) unsigned long long PayloadWorkoutLocationTypesCount;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)PayloadContactListType;
+ (Class)PayloadContactValueType;
+ (Class)PayloadCurrencyAmountType;
+ (Class)PayloadDataStringListType;
+ (Class)PayloadDataStringType;
+ (Class)PayloadDateTimeRangeListType;
+ (Class)PayloadDateTimeRangeValueType;
+ (Class)PayloadDialingContactType;
+ (Class)PayloadDoubleListType;
+ (Class)PayloadDoubleValueType;
+ (Class)PayloadFilePropertyType;
+ (Class)PayloadFilePropertyValueType;
+ (Class)PayloadHomeAttributeType;
+ (Class)PayloadHomeAttributeValueType;
+ (Class)PayloadHomeEntityType;
+ (Class)PayloadIntegerListType;
+ (Class)PayloadIntegerValueType;
+ (Class)PayloadLocationListType;
+ (Class)PayloadLocationType;
+ (Class)PayloadLongListType;
+ (Class)PayloadLongValueType;
+ (Class)PayloadPaymentMethodListType;
+ (Class)PayloadPaymentMethodValueType;
+ (Class)PayloadPrimitiveStringType;
+ (Class)PayloadShareDestinationType;
+ (Class)PayloadStringListType;
+ (Class)PayloadStringValueType;
+ (Class)PayloadTemperatureListType;
+ (Class)PayloadTemperatureValueType;
- (void).cxx_destruct;
- (int)PayloadCallAudioRouteAtIndex:(unsigned long long)arg1;
- (int)PayloadCallCapabilityAtIndex:(unsigned long long)arg1;
- (int)PayloadCallDestinationTypeAtIndex:(unsigned long long)arg1;
- (int)PayloadCallRecordTypeAtIndex:(unsigned long long)arg1;
- (int)PayloadCarAirCirculationModeAtIndex:(unsigned long long)arg1;
- (int)PayloadCarAudioSourceAtIndex:(unsigned long long)arg1;
- (int)PayloadCarDefrosterAtIndex:(unsigned long long)arg1;
- (int)PayloadCarSeatAtIndex:(unsigned long long)arg1;
- (id)PayloadContactListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadContactListsCount;
- (id)PayloadContactValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadContactValuesCount;
- (id)PayloadCurrencyAmountAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadCurrencyAmountsCount;
- (id)PayloadDataStringAtIndex:(unsigned long long)arg1;
- (id)PayloadDataStringListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDataStringListsCount;
- (unsigned long long)PayloadDataStringsCount;
- (id)PayloadDateTimeRangeListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDateTimeRangeListsCount;
- (id)PayloadDateTimeRangeValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDateTimeRangeValuesCount;
- (int)PayloadDeviceTypeAtIndex:(unsigned long long)arg1;
- (id)PayloadDialingContactAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDialingContactsCount;
- (id)PayloadDoubleListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDoubleListsCount;
- (id)PayloadDoubleValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDoubleValuesCount;
- (int)PayloadFileEntityTypeAtIndex:(unsigned long long)arg1;
- (id)PayloadFilePropertyAtIndex:(unsigned long long)arg1;
- (int)PayloadFilePropertyNameAtIndex:(unsigned long long)arg1;
- (int)PayloadFilePropertyQualifierAtIndex:(unsigned long long)arg1;
- (id)PayloadFilePropertyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadFilePropertyValuesCount;
- (unsigned long long)PayloadFilePropertysCount;
- (int)PayloadFileSearchScopeAtIndex:(unsigned long long)arg1;
- (int)PayloadFileShareModeAtIndex:(unsigned long long)arg1;
- (int)PayloadFileTypeAtIndex:(unsigned long long)arg1;
- (id)PayloadHomeAttributeAtIndex:(unsigned long long)arg1;
- (int)PayloadHomeAttributeTypeAtIndex:(unsigned long long)arg1;
- (id)PayloadHomeAttributeValueAtIndex:(unsigned long long)arg1;
- (int)PayloadHomeAttributeValueTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadHomeAttributeValuesCount;
- (unsigned long long)PayloadHomeAttributesCount;
- (int)PayloadHomeDeviceTypeAtIndex:(unsigned long long)arg1;
- (id)PayloadHomeEntityAtIndex:(unsigned long long)arg1;
- (int)PayloadHomeEntityTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadHomeEntitysCount;
- (id)PayloadIntegerListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadIntegerListsCount;
- (id)PayloadIntegerValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadIntegerValuesCount;
- (id)PayloadLocationAtIndex:(unsigned long long)arg1;
- (id)PayloadLocationListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLocationListsCount;
- (unsigned long long)PayloadLocationsCount;
- (id)PayloadLongListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLongListsCount;
- (id)PayloadLongValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLongValuesCount;
- (int)PayloadMessageAttributeAtIndex:(unsigned long long)arg1;
- (id)PayloadPaymentMethodListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPaymentMethodListsCount;
- (id)PayloadPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPaymentMethodValuesCount;
- (int)PayloadPhotoAttributeAtIndex:(unsigned long long)arg1;
- (int)PayloadPreferredCallProviderAtIndex:(unsigned long long)arg1;
- (BOOL)PayloadPrimitiveBoolAtIndex:(unsigned long long)arg1;
- (double)PayloadPrimitiveDoubleAtIndex:(unsigned long long)arg1;
- (int)PayloadPrimitiveIntAtIndex:(unsigned long long)arg1;
- (long long)PayloadPrimitiveLongAtIndex:(unsigned long long)arg1;
- (id)PayloadPrimitiveStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPrimitiveStringsCount;
- (int)PayloadRadioTypeAtIndex:(unsigned long long)arg1;
- (int)PayloadRelativeReferenceAtIndex:(unsigned long long)arg1;
- (int)PayloadRelativeSettingAtIndex:(unsigned long long)arg1;
- (id)PayloadShareDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadShareDestinationsCount;
- (id)PayloadStringListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadStringListsCount;
- (id)PayloadStringValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadStringValuesCount;
- (id)PayloadTemperatureListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadTemperatureListsCount;
- (id)PayloadTemperatureValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadTemperatureValuesCount;
- (int)PayloadWorkoutGoalUnitTypeAtIndex:(unsigned long long)arg1;
- (int)PayloadWorkoutLocationTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadCallAudioRoute:(int)arg1;
- (void)addPayloadCallCapability:(int)arg1;
- (void)addPayloadCallDestinationType:(int)arg1;
- (void)addPayloadCallRecordType:(int)arg1;
- (void)addPayloadCarAirCirculationMode:(int)arg1;
- (void)addPayloadCarAudioSource:(int)arg1;
- (void)addPayloadCarDefroster:(int)arg1;
- (void)addPayloadCarSeat:(int)arg1;
- (void)addPayloadContactList:(id)arg1;
- (void)addPayloadContactValue:(id)arg1;
- (void)addPayloadCurrencyAmount:(id)arg1;
- (void)addPayloadDataString:(id)arg1;
- (void)addPayloadDataStringList:(id)arg1;
- (void)addPayloadDateTimeRangeList:(id)arg1;
- (void)addPayloadDateTimeRangeValue:(id)arg1;
- (void)addPayloadDeviceType:(int)arg1;
- (void)addPayloadDialingContact:(id)arg1;
- (void)addPayloadDoubleList:(id)arg1;
- (void)addPayloadDoubleValue:(id)arg1;
- (void)addPayloadFileEntityType:(int)arg1;
- (void)addPayloadFileProperty:(id)arg1;
- (void)addPayloadFilePropertyName:(int)arg1;
- (void)addPayloadFilePropertyQualifier:(int)arg1;
- (void)addPayloadFilePropertyValue:(id)arg1;
- (void)addPayloadFileSearchScope:(int)arg1;
- (void)addPayloadFileShareMode:(int)arg1;
- (void)addPayloadFileType:(int)arg1;
- (void)addPayloadHomeAttribute:(id)arg1;
- (void)addPayloadHomeAttributeType:(int)arg1;
- (void)addPayloadHomeAttributeValue:(id)arg1;
- (void)addPayloadHomeAttributeValueType:(int)arg1;
- (void)addPayloadHomeDeviceType:(int)arg1;
- (void)addPayloadHomeEntity:(id)arg1;
- (void)addPayloadHomeEntityType:(int)arg1;
- (void)addPayloadIntegerList:(id)arg1;
- (void)addPayloadIntegerValue:(id)arg1;
- (void)addPayloadLocation:(id)arg1;
- (void)addPayloadLocationList:(id)arg1;
- (void)addPayloadLongList:(id)arg1;
- (void)addPayloadLongValue:(id)arg1;
- (void)addPayloadMessageAttribute:(int)arg1;
- (void)addPayloadPaymentMethodList:(id)arg1;
- (void)addPayloadPaymentMethodValue:(id)arg1;
- (void)addPayloadPhotoAttribute:(int)arg1;
- (void)addPayloadPreferredCallProvider:(int)arg1;
- (void)addPayloadPrimitiveBool:(BOOL)arg1;
- (void)addPayloadPrimitiveDouble:(double)arg1;
- (void)addPayloadPrimitiveInt:(int)arg1;
- (void)addPayloadPrimitiveLong:(long long)arg1;
- (void)addPayloadPrimitiveString:(id)arg1;
- (void)addPayloadRadioType:(int)arg1;
- (void)addPayloadRelativeReference:(int)arg1;
- (void)addPayloadRelativeSetting:(int)arg1;
- (void)addPayloadShareDestination:(id)arg1;
- (void)addPayloadStringList:(id)arg1;
- (void)addPayloadStringValue:(id)arg1;
- (void)addPayloadTemperatureList:(id)arg1;
- (void)addPayloadTemperatureValue:(id)arg1;
- (void)addPayloadWorkoutGoalUnitType:(int)arg1;
- (void)addPayloadWorkoutLocationType:(int)arg1;
- (void)clearPayloadCallAudioRoutes;
- (void)clearPayloadCallCapabilitys;
- (void)clearPayloadCallDestinationTypes;
- (void)clearPayloadCallRecordTypes;
- (void)clearPayloadCarAirCirculationModes;
- (void)clearPayloadCarAudioSources;
- (void)clearPayloadCarDefrosters;
- (void)clearPayloadCarSeats;
- (void)clearPayloadContactLists;
- (void)clearPayloadContactValues;
- (void)clearPayloadCurrencyAmounts;
- (void)clearPayloadDataStringLists;
- (void)clearPayloadDataStrings;
- (void)clearPayloadDateTimeRangeLists;
- (void)clearPayloadDateTimeRangeValues;
- (void)clearPayloadDeviceTypes;
- (void)clearPayloadDialingContacts;
- (void)clearPayloadDoubleLists;
- (void)clearPayloadDoubleValues;
- (void)clearPayloadFileEntityTypes;
- (void)clearPayloadFilePropertyNames;
- (void)clearPayloadFilePropertyQualifiers;
- (void)clearPayloadFilePropertyValues;
- (void)clearPayloadFilePropertys;
- (void)clearPayloadFileSearchScopes;
- (void)clearPayloadFileShareModes;
- (void)clearPayloadFileTypes;
- (void)clearPayloadHomeAttributeTypes;
- (void)clearPayloadHomeAttributeValueTypes;
- (void)clearPayloadHomeAttributeValues;
- (void)clearPayloadHomeAttributes;
- (void)clearPayloadHomeDeviceTypes;
- (void)clearPayloadHomeEntityTypes;
- (void)clearPayloadHomeEntitys;
- (void)clearPayloadIntegerLists;
- (void)clearPayloadIntegerValues;
- (void)clearPayloadLocationLists;
- (void)clearPayloadLocations;
- (void)clearPayloadLongLists;
- (void)clearPayloadLongValues;
- (void)clearPayloadMessageAttributes;
- (void)clearPayloadPaymentMethodLists;
- (void)clearPayloadPaymentMethodValues;
- (void)clearPayloadPhotoAttributes;
- (void)clearPayloadPreferredCallProviders;
- (void)clearPayloadPrimitiveBools;
- (void)clearPayloadPrimitiveDoubles;
- (void)clearPayloadPrimitiveInts;
- (void)clearPayloadPrimitiveLongs;
- (void)clearPayloadPrimitiveStrings;
- (void)clearPayloadRadioTypes;
- (void)clearPayloadRelativeReferences;
- (void)clearPayloadRelativeSettings;
- (void)clearPayloadShareDestinations;
- (void)clearPayloadStringLists;
- (void)clearPayloadStringValues;
- (void)clearPayloadTemperatureLists;
- (void)clearPayloadTemperatureValues;
- (void)clearPayloadWorkoutGoalUnitTypes;
- (void)clearPayloadWorkoutLocationTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPayloadCallAudioRoutes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCallCapabilitys:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCallDestinationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCallRecordTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCarAirCirculationModes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCarAudioSources:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCarDefrosters:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadCarSeats:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFileEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFilePropertyNames:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFilePropertyQualifiers:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFileSearchScopes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFileShareModes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadFileTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadHomeAttributeTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadHomeAttributeValueTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadHomeDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadHomeEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadMessageAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPhotoAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPreferredCallProviders:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPrimitiveBools:(BOOL *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPrimitiveDoubles:(double *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPrimitiveInts:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadPrimitiveLongs:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadRadioTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadRelativeReferences:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadRelativeSettings:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadWorkoutGoalUnitTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPayloadWorkoutLocationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
