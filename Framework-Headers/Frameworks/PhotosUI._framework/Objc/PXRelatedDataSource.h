//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXRelatedDataSource : PXSectionedDataSource
{
    BOOL _transient;
    NSArray *_relatedEntries;
}

@property (readonly, copy, nonatomic) NSArray *relatedEntries; // @synthesize relatedEntries=_relatedEntries;
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;

- (void).cxx_destruct;
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForRelatedEntry:(id)arg1;
- (id)init;
- (id)initWithRelatedEntries:(id)arg1 isTransient:(BOOL)arg2;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;

@end

