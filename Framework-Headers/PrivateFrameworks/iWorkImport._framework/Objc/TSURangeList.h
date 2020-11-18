//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSURangeList : NSObject
{
    vector_b5e32e34 mRangeList;
}

@property (readonly, nonatomic) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRange:(struct _NSRange)arg1;
- (void)consolidate;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)replaceWithRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)reverse;
- (id)stringValue;

@end

