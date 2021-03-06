//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate>
{
    NSString *_name;
    NSURL *_URL;
    NSString *_emailAddress;
    NSString *_customDescription;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsNativeSorting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;

@end

