//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <ProactiveSupport/NSFastEnumeration-Protocol.h>

@class _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration>
{
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
}

- (void).cxx_destruct;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPlistReader:(id)arg1 context:(id)arg2;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end

