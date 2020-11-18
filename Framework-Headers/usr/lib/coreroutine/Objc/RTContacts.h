//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore;

__attribute__((visibility("hidden")))
@interface RTContacts : NSObject
{
    CNContact *_meCard;
    CNContactStore *_contactStore;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) CNContact *meCard; // @synthesize meCard=_meCard;

+ (id)addressDictionaryStructuredForGeoServicesFromMapItem:(id)arg1;
+ (id)addressLabelTypeToLabel:(long long)arg1;
+ (id)addressLabelTypeToString:(long long)arg1;
+ (id)contactFetchKeys;
+ (id)convertAddressDictionaryFromContactsToGeoServices:(id)arg1;
+ (id)convertAddressDictionaryFromGeoServicesToContacts:(id)arg1;
+ (long long)convertLocationOfInterestType:(long long)arg1;
- (void).cxx_destruct;
- (id)addAddressToContact:(id)arg1 addressLabelType:(long long)arg2 addressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addAddressToMeCardWithAddressLabelType:(long long)arg1 addressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id *)arg2;
- (id)contactsWithAnyPostalAddresses:(id *)arg1;
- (void)dealloc;
- (id)geocodePostalAddress:(id)arg1 error:(id *)arg2;
- (BOOL)hasMeCard;
- (id)init;
- (id)locationsOfMeCardWithAddressLabelType:(long long)arg1 error:(id *)arg2;
- (id)mapItemsOfContact:(id)arg1 withAddressLabelType:(long long)arg2 error:(id *)arg3;
- (id)mapItemsOfMeCardWithAddressLabelType:(long long)arg1 error:(id *)arg2;
- (id)postalAddressesFromContact:(id)arg1 withAddressLabelType:(long long)arg2;
- (BOOL)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(long long)arg3 error:(id *)arg4;
- (BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(long long)arg2 error:(id *)arg3;
- (BOOL)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id *)arg4;
- (BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (void)updateMeCard;

@end
