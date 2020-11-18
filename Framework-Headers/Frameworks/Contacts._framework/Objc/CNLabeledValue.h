//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNSuggested-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNLabelValuePair, NSDictionary, NSSet, NSString, SGRecordId;
@protocol NSCopying><NSSecureCoding;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    int _iOSLegacyIdentifier;
    CNLabelValuePair *_labelValuePair;
    NSString *_storeIdentifier;
    NSDictionary *_storeInfo;
    NSSet *_linkedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) CNLabelValuePair *labelValuePair; // @synthesize labelValuePair=_labelValuePair;
@property (copy, nonatomic) NSSet *linkedIdentifiers; // @synthesize linkedIdentifiers=_linkedIdentifiers;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (copy, nonatomic) NSDictionary *storeInfo; // @synthesize storeInfo=_storeInfo;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id<NSCopying><NSSecureCoding> value;

+ (id)allValuesInArray:(id)arg1;
+ (id)emptyEntries;
+ (id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2;
+ (id)entryForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
+ (id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2;
+ (id)identifierProvider;
+ (BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2;
+ (id)labelForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)localizedStringForLabel:(id)arg1;
+ (id)makeIdentifier;
+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)testMatchingIdentifier:(id)arg1;
+ (id)valueForIdentifier:(id)arg1 inArray:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringIdentifiers:(id)arg1;
- (BOOL)isEqualToLabeledValue:(id)arg1;
- (BOOL)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (id)labeledValueBySettingLabel:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
- (id)labeledValueBySettingValue:(id)arg1;

@end

