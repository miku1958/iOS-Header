//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCopying-Protocol.h>

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;
    struct _VMURange *_ranges;
    unsigned int _max;
    BOOL _sorted;
}

- (void)addRange:(struct _VMURange)arg1;
- (void)addRanges:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (unsigned long long)indexForLocation:(unsigned long long)arg1;
- (id)init;
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;
- (BOOL)intersectsLocation:(unsigned long long)arg1;
- (BOOL)intersectsRange:(struct _VMURange)arg1;
- (struct _VMURange)largestRange;
- (struct _VMURange)range;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;
- (struct _VMURange *)ranges;
- (void)removeAllRanges;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)setCapacity:(unsigned int)arg1;
- (void)sort;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;
- (unsigned long long)sumLengths;

@end

