//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/NSCopying-Protocol.h>
#import <VectorKit/NSFastEnumeration-Protocol.h>

@class VKTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned long long _count;
    unsigned long long _maxCount;
}

- (void)_addKeyToBack:(const struct VKTileKey *)arg1;
- (void)addKey:(const struct VKTileKey *)arg1;
- (BOOL)addKey:(const struct VKTileKey *)arg1 lostKey:(struct VKTileKey *)arg2;
- (unsigned long long)capacity;
- (BOOL)containsKey:(const struct VKTileKey *)arg1;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (struct VKTileKey *)firstKey;
- (id)init;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (BOOL)isEqualToList:(id)arg1;
- (id)listWithout:(id)arg1;
- (void)removeAllKeys;
- (void)removeAllListNodes;
- (BOOL)removeKey:(const struct VKTileKey *)arg1;
- (void)removeKeysMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)sort:(CDUnknownBlockType)arg1;

@end
