//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupiOSLegacyIdentifierPredicate : CNPredicate <CNiOSGroupPredicate>
{
    int _iOSLegacyIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithiOSLegacyIdentifier:(int)arg1;

@end

