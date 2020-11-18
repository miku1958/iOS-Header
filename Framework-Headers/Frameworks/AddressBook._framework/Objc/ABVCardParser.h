//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABVCardLexer, ABVCardValueSetter, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject
{
    ABVCardValueSetter *_valueSetter;
    void *_source;
    ABVCardLexer *_lexer;
    NSData *_data;
    unsigned long long _defaultEncoding;
    BOOL _hasImportErrors;
    BOOL _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableDictionary *_activityAlerts;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    unsigned long long _encoding;
    BOOL _quotedPrintable;
    BOOL _base64;
}

@property (nonatomic) void *source;

+ (struct __CFArray *)supportedProperties;
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString *)arg2 multiValue:(void *)arg3 uniquenessCheckingMultiValue:(void *)arg4;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void *)arg2 uniquenessCheckingMultiValue:(void *)arg3;
- (id)_genericLabel;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
- (BOOL)_setPersonSounds:(void *)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5;
- (BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)_socialProfileDisplayName;
- (id)_socialProfileService;
- (id)_socialProfileUserId;
- (id)_socialProfileUsername;
- (BOOL)_usesArrayForExternalPropKey:(id)arg1;
- (BOOL)_usesRemainingLineForExternalPropKey:(id)arg1;
- (id)_valueSetter;
- (void)addActivityAlertMultiValues;
- (void)addAddressMultiValues;
- (BOOL)addIMValueTo:(id)arg1;
- (void)addInstantMessageMultiValues;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
- (void)addSocialProfileMultiValues;
- (void)cleanUpCardState;
- (void *)copyNextPersonWithLength:(int *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (id)dateFromISO8601String:(id)arg1;
- (void)dealloc;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (void)finalize;
- (id)genericLabel;
- (BOOL)hasImportErrors;
- (BOOL)importToPerson:(void *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (BOOL)importToValueSetter:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (BOOL)parseABDATE;
- (BOOL)parseABExtensionType:(id)arg1;
- (BOOL)parseABMaiden;
- (void)parseABOrder;
- (void)parseABPhoto;
- (BOOL)parseABReleatedNames;
- (void)parseABShowAs;
- (BOOL)parseABUID;
- (BOOL)parseADD;
- (BOOL)parseADR;
- (BOOL)parseActivityAlerts;
- (BOOL)parseAlternateBirthday;
- (BOOL)parseBDAY;
- (BOOL)parseEMAIL;
- (BOOL)parseIMPP;
- (id)parseInstantMessengerProfile:(id)arg1;
- (BOOL)parseItem;
- (BOOL)parseN;
- (BOOL)parseNICKNAME;
- (BOOL)parseORG;
- (BOOL)parsePhoto:(id)arg1;
- (id)parseRemainingLine;
- (id)parseSingleValue;
- (BOOL)parseSocialProfiles;
- (BOOL)parseTEL;
- (BOOL)parseUID;
- (id)parseURL;
- (BOOL)parseVERSION;
- (id)parseValueArray;
- (struct __CFArray *)peopleAndProperties:(const struct __CFArray **)arg1;
- (id)phoneLabel;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;
- (id)sortedPeopleAndProperties:(const struct __CFArray **)arg1;

@end

