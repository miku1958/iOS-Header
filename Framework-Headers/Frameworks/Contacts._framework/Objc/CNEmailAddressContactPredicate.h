//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNMAIDPredicate-Protocol.h>
#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate>
{
    BOOL _returnsMultipleResults;
    NSArray *_emailAddresses;
    NSArray *_groupIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)contactsFromCLSDataStore:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(BOOL)arg3;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;
- (id)shortDebugDescription;

@end
