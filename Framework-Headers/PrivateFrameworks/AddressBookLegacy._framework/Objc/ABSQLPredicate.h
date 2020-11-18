//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABSQLPredicate : NSObject
{
    CDUnknownBlockType _bindBlock;
    CDUnknownBlockType _matchInfoProvider;
    id _storage;
    NSString *_query;
}

@property (copy, nonatomic) CDUnknownBlockType bindBlock; // @synthesize bindBlock=_bindBlock;
@property (copy, nonatomic) CDUnknownBlockType matchInfoProvider; // @synthesize matchInfoProvider=_matchInfoProvider;
@property (strong, nonatomic) NSString *query; // @synthesize query=_query;
@property (strong, nonatomic) id storage; // @synthesize storage=_storage;

+ (id)_sqlListOfLength:(unsigned long long)arg1;
+ (id)_sqlValuesTableOfLength:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;
+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3;
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 sortOrder:(int)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 values:(id)arg2 groupIdentifiers:(id)arg3 containerIdentifiers:(id)arg4 limitToOneResult:(BOOL)arg5 map:(id)arg6;
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void *)arg2;
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 country:(id)arg2 homeCountryCode:(id)arg3 prefixHint:(id)arg4 groupIdentifiers:(id)arg5 limitToOneResult:(BOOL)arg6;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 containerIdentifiers:(id)arg3 map:(id)arg4;
+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(BOOL)arg2;
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(BOOL)arg2;
+ (id)predicateForMeContact;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateUnioningPredicate:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;

@end
