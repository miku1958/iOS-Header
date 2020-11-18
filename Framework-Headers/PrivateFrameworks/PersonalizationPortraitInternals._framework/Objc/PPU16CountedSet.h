//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject
{
    struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type _vectorInlineStorage;
}

- (void).cxx_destruct;
- (void)_convertToDictionaryRepresentation;
- (void)_dictEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_vectorEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addValue:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)countForValue:(unsigned short)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (void)enumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToU16CountedSet:(id)arg1;
- (unsigned long long)uniqueValueCount;

@end
