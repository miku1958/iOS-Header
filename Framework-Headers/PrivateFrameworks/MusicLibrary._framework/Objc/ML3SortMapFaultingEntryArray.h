//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class ML3DatabaseConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3SortMapFaultingEntryArray : NSMutableArray
{
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)enumerateDirtyObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
