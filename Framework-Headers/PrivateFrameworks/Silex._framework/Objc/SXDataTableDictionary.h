//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSFastEnumeration-Protocol.h>

@class NSMutableArray, NSMutableIndexSet;

@interface SXDataTableDictionary : NSObject <NSFastEnumeration>
{
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    NSMutableIndexSet *_indexes;
    NSMutableArray *_storage;
}

@property (strong, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
@property (readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (strong, nonatomic) NSMutableArray *storage; // @synthesize storage=_storage;

+ (id)dataTableDictionaryWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)indexForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathForIndex:(unsigned long long)arg1;
- (CDStruct_2fea82da)indexPathOfObject:(id)arg1;
- (id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (id)objectForIndexPath:(CDStruct_2fea82da)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndexPath:(CDStruct_2fea82da)arg1;
- (void)setObject:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;

@end
