//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/NSMutableCopying-Protocol.h>

@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying>
{
    vector_e3deae5b _rangeVector;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)delta;
- (CDStruct_9ae92562)dirtyRangeAtIndex:(unsigned long long)arg1;
- (id)dirtyRangesIntersecting:(struct _NSRange)arg1;
- (unsigned long long)indexForRange:(struct _NSRange)arg1;
- (id)init;
- (id)initWithDirtyRange:(CDStruct_9ae92562)arg1;
- (id)initWithRangeVector:(const vector_e3deae5b *)arg1;
- (BOOL)isEqualToDirtyRangeArray:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)superRange;

@end

