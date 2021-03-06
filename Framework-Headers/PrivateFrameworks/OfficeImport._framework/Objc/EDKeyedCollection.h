//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection
{
    OITSUIntegerKeyDictionary *mMap;
}

- (void).cxx_destruct;
- (unsigned long long)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertIntoMap:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isObjectInMap:(id)arg1;
- (BOOL)isOverwritingKeyOK;
- (id)objectWithKey:(long long)arg1;
- (void)removeAllObjects;
- (void)removeFromMap:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end

