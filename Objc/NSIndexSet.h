//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    struct {
        unsigned int _isEmpty:1;
        unsigned int _hasSingleRange:1;
        unsigned int _cacheValid:1;
        unsigned int _reservedArrayBinderController:29;
    } _indexSetFlags;
    union {
        struct {
            struct _NSRange _range;
        } _singleRange;
        struct {
            void *_data;
            void *_reserved;
        } _multipleRanges;
    } _internal;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long firstIndex;
@property (readonly) unsigned long long lastIndex;

+ (id)_alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)indexSet;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSetWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (id)indexSetWithIndexesInRange:(struct _NSRange)arg1;
+ (BOOL)supportsSecureCoding;
- (void)__forwardEnumerateRanges:(CDUnknownBlockType)arg1;
- (unsigned long long)__getContainmentVector:(out BOOL *)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)_indexAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1;
- (id)_init;
- (id)_numberEnumerator;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (Class)classForCoder;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (BOOL)containsIndexes:(id)arg1;
- (BOOL)containsIndexesInRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)getIndexes:(unsigned long long *)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _NSRange *)arg3;
- (unsigned long long)hash;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexLessThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (BOOL)intersectsIndexesInRange:(struct _NSRange)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIndexSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

