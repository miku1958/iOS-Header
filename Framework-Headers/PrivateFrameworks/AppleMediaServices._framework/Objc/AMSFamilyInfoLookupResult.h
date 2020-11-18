//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject
{
    BOOL _cached;
    BOOL _headOfHouseholdSharingPayment;
    NSArray *_familyMembers;
}

@property (readonly, nonatomic, getter=isCached) BOOL cached; // @synthesize cached=_cached;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property (readonly, nonatomic, getter=isHeadOfHouseholdSharingPayment) BOOL headOfHouseholdSharingPayment; // @synthesize headOfHouseholdSharingPayment=_headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2;

@end
