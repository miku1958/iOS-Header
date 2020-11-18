//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABStringMatchContactPredicate : CNPredicate <CNiOSContactPredicate>
{
    NSString *_searchString;
    NSString *_accountIdentifier;
    NSString *_containerIdentifier;
    NSString *_groupIdentifier;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (readonly) Class superclass;

- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (BOOL)cn_supportsNativeSorting;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;

@end

