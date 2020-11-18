//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContact, CRRecentContactsLibrary, PKPaymentOptionsSynchronization;
@protocol NSObject;

@interface PKPaymentOptionsRecents : NSObject
{
    CNContact *_cachedMeContact;
    id<NSObject> _meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
    BOOL _meCardCachingEnabled;
    CRRecentContactsLibrary *_recentContactsLibrary;
}

@property (readonly, nonatomic) CNContact *meCard;
@property (nonatomic, getter=isMeCardCachingEnabled) BOOL meCardCachingEnabled; // @synthesize meCardCachingEnabled=_meCardCachingEnabled;
@property (strong, nonatomic) CRRecentContactsLibrary *recentContactsLibrary; // @synthesize recentContactsLibrary=_recentContactsLibrary;

+ (id)_coreRecentsKindForPreference:(id)arg1;
+ (id)defaultInstance;
- (void).cxx_destruct;
- (void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2;
- (id)_contactFromRecent:(id)arg1 preference:(id)arg2;
- (id)_contactsFromKeychainForPreference:(id)arg1;
- (void)_coreRecentsContactsForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_defaultCRSearchQuery;
- (void)_deleteRecentContactFromKeychain:(id)arg1 forPreference:(id)arg2;
- (void)_deleteRecentContactsFromKeychainForContactKey:(id)arg1;
- (void)_deleteRecentContactsFromKeychainForPreference:(id)arg1;
- (id)_keychainDataForKey:(id)arg1;
- (id)_keychainKeyFromContactKey:(id)arg1;
- (id)_labelsToPropertiesDictionaryForContact:(id)arg1;
- (id)_postalAddressLabeledValueFromRecent:(id)arg1;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)contactMetadataForContact:(id)arg1 preference:(id)arg2;
- (void)dealloc;
- (void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRecent:(id)arg1;
- (void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)meCardEntriesForPreference:(id)arg1;
- (void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)postalAddressMetadataForContact:(id)arg1;
- (id)recentsForPreference:(id)arg1;
- (void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)saveContactToCoreRecents:(id)arg1 preference:(id)arg2;

@end

