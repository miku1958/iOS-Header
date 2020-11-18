//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface PXAggregatedDataSection : NSObject
{
    NSArray *_childDataSourcesWithContent;
    NSIndexSet *_childDataSourceIndexes;
    NSArray *_dataSources;
    long long _numberOfItems;
}

@property (readonly, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property (readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;

- (void).cxx_destruct;
- (id)_childDataSourceForIndex:(long long)arg1 adjustedIndex:(long long *)arg2;
- (id)initWithDataSources:(id)arg1;
- (id)objectAtIndex:(long long)arg1;

@end

