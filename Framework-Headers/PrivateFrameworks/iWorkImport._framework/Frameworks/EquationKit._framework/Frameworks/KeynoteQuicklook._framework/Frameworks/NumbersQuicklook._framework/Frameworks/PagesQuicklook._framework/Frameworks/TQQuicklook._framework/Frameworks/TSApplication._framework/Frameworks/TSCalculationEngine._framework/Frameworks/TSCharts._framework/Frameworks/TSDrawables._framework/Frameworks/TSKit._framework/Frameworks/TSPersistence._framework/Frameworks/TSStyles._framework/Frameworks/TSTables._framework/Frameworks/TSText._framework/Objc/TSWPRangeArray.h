//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/NSMutableCopying-Protocol.h>

@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying>
{
    vector_b5e32e34 _rangeVector;
}

@property (readonly, nonatomic) unsigned long long indexCount;
@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) struct _NSRange superRange;

+ (id)rangeArray;
+ (id)rangeArrayWithRange:(struct _NSRange)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1 inclusive:(BOOL)arg2;
- (BOOL)containsRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateRanges:(CDUnknownBlockType)arg1;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (unsigned long long)indexForRange:(struct _NSRange)arg1;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRangeVector:(const vector_b5e32e34 *)arg1;
- (id)intersection:(struct _NSRange)arg1;
- (BOOL)intersectsRange:(struct _NSRange)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRangeArray:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)p_finish;
- (unsigned long long)p_start;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeContainingPosition:(unsigned long long)arg1;
- (id)rangesIntersecting:(struct _NSRange)arg1;
- (void)reverseEnumerateRanges:(CDUnknownBlockType)arg1;

@end

