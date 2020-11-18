//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSStorage : NSObject
{
    id _storage;
    long long _hintCapacity;
    unsigned long long _reserved[4];
}

+ (void)initialize;
- (void)addElement:(void *)arg1;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void *)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementSize;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hintCapacity;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)insertElement:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)insertElements:(void *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void *)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(struct _NSRange *)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1;
- (void)removeElementsInRange:(struct _NSRange)arg1;
- (void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void *)arg2;
- (void)setHintCapacity:(unsigned long long)arg1;

@end

