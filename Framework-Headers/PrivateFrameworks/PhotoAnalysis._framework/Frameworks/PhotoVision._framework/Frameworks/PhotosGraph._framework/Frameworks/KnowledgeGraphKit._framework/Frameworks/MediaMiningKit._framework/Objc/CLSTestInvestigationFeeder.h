//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (unsigned long long)numberOfItems;
- (id)startDateComponents;

@end

