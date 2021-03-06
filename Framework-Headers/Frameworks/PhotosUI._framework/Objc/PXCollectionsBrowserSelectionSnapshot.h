//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXBrowserSelectionSnapshot-Protocol.h>

@class NSArray, NSString, PXSectionedDataSource;

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>
{
    NSArray *_indexPaths;
    PXSectionedDataSource *_dataSource;
    NSArray *_modelObjects;
}

@property (readonly, nonatomic) long long assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long estimatedAssetCount;
@property (readonly, nonatomic) long long estimatedModelObjectsCount;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetReferenceAtIndex:(long long)arg1;
- (id)displayAssetAtIndex:(long long)arg1;
- (long long)indexOfAssetReference:(id)arg1;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2;

@end

