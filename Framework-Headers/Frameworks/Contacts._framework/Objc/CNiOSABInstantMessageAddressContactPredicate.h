//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class CNInstantMessageAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABInstantMessageAddressContactPredicate : CNPredicate <CNiOSContactPredicate>
{
    CNInstantMessageAddress *_imAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (BOOL)cn_supportsNativeSorting;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstantMessageAddress:(id)arg1;

@end

