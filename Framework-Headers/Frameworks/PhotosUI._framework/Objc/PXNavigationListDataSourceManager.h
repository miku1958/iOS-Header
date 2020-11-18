//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXNavigationListDataSourceManagerObserver-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, PXArrayChangeDetails, PXNavigationListDataSource, PXNavigationListDataSourceConfiguration, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

@interface PXNavigationListDataSourceManager : PXSectionedDataSourceManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSourceManagerObserver>
{
    NSMutableDictionary *_childDataSourceManagers;
    NSMutableDictionary *_childDataSourceIndexes;
    NSMapTable *_parentListItems;
    PXNavigationListDataSourceConfiguration *_configuration;
    PXPhotoKitCollectionsDataSourceManager *_collectionsDataSourceManager;
    PXPhotoKitCollectionsDataSource *_collectionsDataSource;
    PXArrayChangeDetails *_latestArrayChangeDetails;
    PXNavigationListDataSource *_latestDataSource;
}

@property (strong, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager; // @synthesize collectionsDataSourceManager=_collectionsDataSourceManager;
@property (readonly, nonatomic) PXNavigationListDataSourceConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) PXNavigationListDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXArrayChangeDetails *latestArrayChangeDetails; // @synthesize latestArrayChangeDetails=_latestArrayChangeDetails;
@property (strong, nonatomic) PXNavigationListDataSource *latestDataSource; // @synthesize latestDataSource=_latestDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSource:(id)arg2 expanding:(BOOL)arg3;
- (id)_newCollectionsDataSourceManager;
- (id)_newDataSource;
- (void)_updateDataSourceWithChangeDetailsHint:(id)arg1 changeDetailsByItem:(id)arg2;
- (id)childDataSourceManagerForItem:(id)arg1;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)createInitialDataSource;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)init;
- (id)initWithCollectionList:(id)arg1 indentationLevel:(long long)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)resumeBackgroundFetchingIfNeeded;

@end

