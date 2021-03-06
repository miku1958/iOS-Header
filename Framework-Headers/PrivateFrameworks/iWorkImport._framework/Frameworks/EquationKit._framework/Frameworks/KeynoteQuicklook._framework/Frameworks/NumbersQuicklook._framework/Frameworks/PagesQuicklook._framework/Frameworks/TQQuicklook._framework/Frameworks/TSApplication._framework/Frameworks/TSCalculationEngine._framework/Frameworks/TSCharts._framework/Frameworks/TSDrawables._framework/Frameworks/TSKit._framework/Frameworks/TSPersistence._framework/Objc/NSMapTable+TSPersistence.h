//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSPersistence)

@property (readonly, nonatomic) BOOL tsp_isWeakObjectMapTable;

+ (id)newTspStrongObjectsMapTable;
+ (id)newTspStrongObjectsMapTableWithCapacity:(unsigned long long)arg1;
+ (id)newTspWeakObjectsMapTable;
+ (id)newTspWeakObjectsMapTableWithCapacity:(unsigned long long)arg1;
- (void)tsp_enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsp_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
@end

