//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface REKeyValueMap : NSObject
{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 withValue:(id)arg2;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keyForValue:(id)arg1;
- (void)removeKey:(id)arg1;
- (unsigned long long)valueCount;
- (id)valueForKey:(id)arg1;

@end

