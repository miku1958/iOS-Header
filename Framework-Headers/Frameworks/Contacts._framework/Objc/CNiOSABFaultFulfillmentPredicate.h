//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFaultFulfillmentPredicate : CNPredicate <CNiOSContactPredicate>
{
    int _legacyIdentifier;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) int legacyIdentifier; // @synthesize legacyIdentifier=_legacyIdentifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsNativeSorting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentifier:(int)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
