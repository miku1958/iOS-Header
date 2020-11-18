//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainersForAccountPredicate : CNPredicate <CNiOSContainerPredicate>
{
    BOOL _includesDisabledContainers;
    NSString *_accountIdentifier;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL includesDisabledContainers; // @synthesize includesDisabledContainers=_includesDisabledContainers;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
