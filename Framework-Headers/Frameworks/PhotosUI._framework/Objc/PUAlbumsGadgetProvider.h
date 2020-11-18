//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUI/PUAlbumGadgetDelegate-Protocol.h>
#import <PhotosUI/PUHorizontalAlbumListGadgetLayoutDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXCollectionsDataSourceManagerObserver-Protocol.h>

@class NSString, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate>
{
    BOOL _hasGeneratedGadgets;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUAlbumListCellContentViewHelper *_contentViewHelper;
    unsigned long long _albumListType;
    PXExtendedTraitCollection *_extendedTraitCollection;
    unsigned long long _currentDataSourceIdentifier;
}

@property (readonly, nonatomic) unsigned long long albumListType; // @synthesize albumListType=_albumListType;
@property (strong, nonatomic) PUAlbumListCellContentViewHelper *contentViewHelper; // @synthesize contentViewHelper=_contentViewHelper;
@property (nonatomic) unsigned long long currentDataSourceIdentifier; // @synthesize currentDataSourceIdentifier=_currentDataSourceIdentifier;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property (nonatomic) BOOL hasGeneratedGadgets; // @synthesize hasGeneratedGadgets=_hasGeneratedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) const struct __CFString *seeAllAccessoryButtonEventTrackerKey;
@property (readonly, nonatomic) NSString *seeAllAccessoryButtonTitle;
@property (readonly, nonatomic) BOOL shouldShowSeeAllAccessoryButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_albumGadgetClassForCollection:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_newGadgetForCollection:(id)arg1;
- (void)_reconfigureGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)arg1;
- (id)albumListCellContentViewHelperForAlbum:(id)arg1;
- (id)albumListCellContentViewHelperForLayout:(id)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)gadgetForCollection:(id)arg1;
- (id)gadgetForIndexPath:(id)arg1;
- (void)generateGadgets;
- (id)init;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)startLoadingRemainingData;

@end

