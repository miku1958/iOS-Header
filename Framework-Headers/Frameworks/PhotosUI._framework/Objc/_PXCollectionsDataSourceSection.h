//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection
{
    long long _count;
    PXCollectionsDataSource *_collectionsDataSource;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;

- (void).cxx_destruct;
- (id)content;
- (long long)count;
- (long long)countForCollection:(id)arg1;
- (id)existingAssetsFetchResultAtIndex:(long long)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1;
- (id)objectAtIndex:(long long)arg1;

@end
