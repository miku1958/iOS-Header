//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/NSCopying-Protocol.h>

@class GPBMessage;

@interface GPBUInt32Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    unsigned int *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(unsigned int)arg1;
+ (id)arrayWithValueArray:(id)arg1;
- (void)addValue:(unsigned int)arg1;
- (void)addValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)addValuesFromArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValueArray:(id)arg1;
- (id)initWithValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned int)arg2;
- (unsigned int)valueAtIndex:(unsigned long long)arg1;

@end

