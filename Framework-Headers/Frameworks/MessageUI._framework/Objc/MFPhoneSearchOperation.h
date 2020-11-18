//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/_MFAddressBookPropertySearchOperation.h>

#import <MessageUI/ABPredicateDelegate-Protocol.h>

@class NSString;

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate>
{
    struct __CFString *_countryCode;
    struct __CFArray *_uids;
    struct __CFArray *_addresses;
    struct __CFArray *_identifiers;
    NSString *_searchTerm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)property;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray **)arg2 identifiers:(const struct __CFArray **)arg3;
- (void)dealloc;
- (BOOL)predicateShouldContinue:(id)arg1;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;

@end
