//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource
{
    NSArray *_dataSections;
}

@property (readonly, nonatomic) NSArray *dataSections; // @synthesize dataSections=_dataSections;

- (void).cxx_destruct;
- (id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3;
- (id)init;
- (id)initWithDataSections:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;

@end
