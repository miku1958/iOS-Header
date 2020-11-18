//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject <NSCopying>
{
    NSMapTable *_map;
}

@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) _UISelectorSet *allSelectors;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMap:(id)arg1;
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)objectForSelector:(SEL)arg1;
- (void)removeObjectForSelector:(SEL)arg1;
- (void)removeObjectsForSelectors:(id)arg1;
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;

@end
