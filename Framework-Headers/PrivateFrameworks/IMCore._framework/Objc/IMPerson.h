//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray, NSData, NSString;

@interface IMPerson : NSObject
{
    BOOL _registered;
    int _recordID;
    CNContact *_cnContact;
}

@property (readonly, nonatomic) int _recordID; // @synthesize _recordID;
@property (readonly, nonatomic) void *_recordRef;
@property (readonly, nonatomic) BOOL _registered; // @synthesize _registered;
@property (readonly, strong, nonatomic) NSString *abbreviatedName;
@property (readonly, nonatomic) NSArray *allEmails;
@property (strong, nonatomic) CNContact *cnContact; // @synthesize cnContact=_cnContact;
@property (readonly, copy, nonatomic) NSString *cnContactID;
@property (readonly, nonatomic) NSString *companyName;
@property (readonly, strong, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *emails;
@property (copy, nonatomic) NSString *firstName;
@property (readonly, strong, nonatomic) NSString *fullName;
@property (readonly, strong, nonatomic) NSArray *groups;
@property (strong, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSData *imageDataWithoutLoading;
@property (readonly, nonatomic) BOOL isCompany;
@property (readonly, nonatomic) BOOL isInAddressBook;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSArray *mobileNumbers;
@property (readonly, strong, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) int recordID;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, strong, nonatomic) NSString *uniqueID;

+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void *)arg2;
+ (void)_setCachedQueriesEnabled:(BOOL)arg1;
+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void *)arg4;
+ (id)allPeople;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
+ (id)existingABPersonForPerson:(id)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int *)arg7;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int *)arg6;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
- (void)_abPersonChanged:(id)arg1;
- (id)allHandlesForProperty:(id)arg1;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (BOOL)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)emailHandlesForService:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(BOOL)arg2;
- (void)finalize;
- (unsigned long long)hash;
- (id)idsAddresses;
- (id)imHandleRegistrarGUID;
- (id)init;
- (id)initWithABRecordID:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIMPerson:(id)arg1;
- (void)save;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (id)valuesForIMProperty:(id)arg1;
- (id)valuesForProperty:(id)arg1;

@end

