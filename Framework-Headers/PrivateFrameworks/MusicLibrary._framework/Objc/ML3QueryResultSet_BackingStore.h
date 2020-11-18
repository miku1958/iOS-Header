//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_c1c297d2 _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

@property (readonly, nonatomic) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_f2692727 *)arg1;
- (BOOL)containsPersistentIDs:(const unordered_set_f2692727 *)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;

@end

