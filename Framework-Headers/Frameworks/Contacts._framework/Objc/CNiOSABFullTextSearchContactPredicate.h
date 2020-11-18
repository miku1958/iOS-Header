//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNFullTextSearchContactPredicate.h>

#import <Contacts/CNiOSContactAsyncPredicate-Protocol.h>
#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_predicateWithAddressBook:(void *)arg1;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (id)cn_fetchPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 options:(unsigned long long)arg3 progressiveResults:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;

@end

