//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSFetchExecution : NSObject
{
}

+ (void)_extractContacts:(id *)arg1 matchInfo:(id *)arg2 fromBlockResults:(id)arg3 containsNestedResults:(BOOL)arg4;
+ (id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 addressBook:(void *)arg5 error:(id *)arg6;
+ (id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 progressiveResults:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

@end

