//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContact.h>

@class CNContact, NSString;

@interface WFCNContact : WFContact
{
    BOOL _fromVCard;
    int _propertyID;
    NSString *_accountIdentifier;
    long long _multivalueIndex;
    NSString *_contactIdentifier;
    CNContact *_contact;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, nonatomic) BOOL fromVCard; // @synthesize fromVCard=_fromVCard;

+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)changeObservers;
+ (void)contactStoreDidChange:(id)arg1;
+ (id)contactWithCNContact:(id)arg1;
+ (id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactsWithName:(id)arg1;
+ (id)contactsWithName:(id)arg1 keysToFetch:(id)arg2;
+ (id)contactsWithVCardData:(id)arg1;
+ (void)removeContactsChangeObserver:(id)arg1;
+ (id)requiredKeysToFetch;
+ (BOOL)supportsSecureCoding;
+ (void)updateContactStoreObservation;
- (void).cxx_destruct;
- (id)URLs;
- (id)birthday;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dates;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)formattedName;
- (BOOL)hasImageData;
- (BOOL)hasValueForPropertyID:(int)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (id)instantMessageAddresses;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPropertyIDRepresented:(int)arg1;
- (id)lastName;
- (id)middleName;
- (long long)multivalueIndex;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)organization;
- (id)phoneNumbers;
- (int)propertyID;
- (void)refetchContact;
- (id)socialProfiles;
- (id)streetAddresses;
- (id)thumbnailImageData;
- (id)vCardRepresentationWithFullData:(BOOL)arg1;
- (id)valueForPropertyID:(int)arg1;

@end

