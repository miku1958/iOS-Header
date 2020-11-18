//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABMapDataContactPredicate : CNPredicate <CNiOSContactPredicate>
{
    NSString *_mapString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
- (BOOL)cn_supportsNativeSorting;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

