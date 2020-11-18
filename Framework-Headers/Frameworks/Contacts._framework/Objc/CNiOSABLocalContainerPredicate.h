//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABLocalContainerPredicate : CNPredicate <CNiOSContainerPredicate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includesDisabledContainers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
