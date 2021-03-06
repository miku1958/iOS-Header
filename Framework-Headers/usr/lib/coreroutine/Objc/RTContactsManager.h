//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class CNContact, RTDataProtectionManager, RTDistanceCalculator, RTMapServiceManager;

@interface RTContactsManager : RTService
{
    BOOL _available;
    RTDataProtectionManager *_dataProtectionManager;
    RTMapServiceManager *_mapServiceManager;
    RTDistanceCalculator *_distanceCalculator;
    CNContact *_meCard;
}

@property (nonatomic) BOOL available; // @synthesize available=_available;
@property (strong, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
@property (strong, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (strong, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (strong, nonatomic) CNContact *meCard; // @synthesize meCard=_meCard;

+ (id)addressDictionaryFromMapItem:(id)arg1;
+ (id)addressLabelTypeToLabel:(unsigned long long)arg1;
+ (id)addressLabelTypeToString:(unsigned long long)arg1;
+ (id)formattedPostalAddressesForContact:(id)arg1;
+ (unsigned long long)labelStringToAddressLabelType:(id)arg1;
- (void).cxx_destruct;
- (void)__donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 donationStore:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (id)_getMeCardWithError:(id *)arg1;
- (void)_onContactStoreNotification:(id)arg1;
- (void)_setup;
- (void)_shutdown;
- (id)addAddressToContact:(id)arg1 addressLabelType:(unsigned long long)arg2 addressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addAddressToMeCardWithAddressLabelType:(unsigned long long)arg1 addressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id *)arg2;
- (void)donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchFormattedPostalAddressesFromMeCard:(CDUnknownBlockType)arg1;
- (void)fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDataProtectionManager:(id)arg1 mapServiceManager:(id)arg2 distanceCalculator:(id)arg3;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (BOOL)labelTypeValidForDonation:(unsigned long long)arg1;
- (void)onContactStoreNotification:(id)arg1;
- (void)onDataProtectionNotification:(id)arg1;
- (BOOL)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id *)arg4;
- (BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id *)arg3;

@end

