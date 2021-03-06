//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/NSCopying-Protocol.h>
#import <TSPersistence/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSMutableIndexSet;

@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _capacity;
    NSMutableArray *_items;
    NSMutableIndexSet *_objectsIndexSet;
    NSMutableIndexSet *_removedObjectsIndexSet;
    NSMutableIndexSet *_lazyReferencesIndexSet;
    NSMutableIndexSet *_removedLazyReferencesIndexSet;
    unsigned long long _count;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;

- (void).cxx_destruct;
- (BOOL)addItem:(id)arg1;
- (id)allObjects;
- (BOOL)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)removeItem:(id)arg1;
- (void)unionSet:(id)arg1;

@end

