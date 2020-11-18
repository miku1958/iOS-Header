//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void).cxx_destruct;
- (id)cachedObjectEnumerable;
- (id)cachedObjects;
- (unsigned long long)count;
- (id)description;
- (BOOL)hasCachedObjectForKey:(id)arg1;
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;
- (id)keyEnumerable;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;

@end

