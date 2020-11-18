//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface REKeyMultiValueMap : NSObject
{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long keyCount;
@property (readonly, nonatomic) unsigned long long valueCount;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 withValues:(id)arg2;
- (void)enumerateValuesForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithValuePointFunctionOptions:(unsigned long long)arg1;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (id)keyForValue:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)removeValue:(id)arg1 forKey:(id)arg2;
- (id)valuesForKey:(id)arg1;

@end
