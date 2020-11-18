//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICompoundObjectMap : NSObject
{
    NSMutableDictionary *_mapTable;
}

+ (id)compoundObjectMap;
+ (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;
- (void).cxx_destruct;
- (id)deepCopy;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)performWithEach:(CDUnknownBlockType)arg1;
- (void)removeAllMappings;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;

@end
