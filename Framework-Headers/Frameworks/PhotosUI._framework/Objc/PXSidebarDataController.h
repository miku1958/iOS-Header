//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>
#import <PhotosUICore/PXOutlineDataSectionManagerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString, PHPhotoLibrary, PXDataSectionManager, PXNavigationListItemDataSectionManager, PXOutlineDataSectionManager, PXPhotoLibraryLocalDefaults;
@protocol PXSidebarDataSourceControllerDelegate;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver>
{
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjects;
    NSArray *_arrangedObjectIdentifiers;
    PXDataSectionManager *_mediaTypesSectionManager;
    PXNavigationListItemDataSectionManager *_mediaTypesItemManager;
    PHPhotoLibrary *_photoLibrary;
    NSOperationQueue *_workQueue;
    id<PXSidebarDataSourceControllerDelegate> _delegate;
    PXPhotoLibraryLocalDefaults *_localDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXSidebarDataSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults; // @synthesize localDefaults=_localDefaults;
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager; // @synthesize mediaTypesItemManager=_mediaTypesItemManager;
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager; // @synthesize mediaTypesSectionManager=_mediaTypesSectionManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;

+ (id)albumsDataSectionManagerWithMediaTypesItemManager:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3;
+ (id)dataSectionManagerForCollection:(id)arg1 workQueue:(id)arg2;
+ (id)devicesDataSectionManagerForLibrary:(id)arg1;
+ (id)photosDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3;
+ (id)projectsDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2;
+ (id)prototypesDataSectionManagerForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3;
- (void).cxx_destruct;
- (id)_dataSectionManagerForListItem:(id)arg1;
- (void)_removeDataSectionManagerForKey:(id)arg1;
- (void)_setDataSectionManager:(id)arg1 forKey:(id)arg2;
- (void)_updateDataSectionForRemovedItems:(id)arg1;
- (void)_updateMediaTypesItemManager;
- (id)child:(long long)arg1 ofItem:(id)arg2;
- (id)childDataSectionForItem:(id)arg1;
- (id)childrenOfListItem:(id)arg1;
- (id)dataSectionManagerForItem:(id)arg1;
- (id)infoForItem:(id)arg1 childIndex:(long long)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 sectionEnablementProvider:(id)arg2;
- (BOOL)isItemExpanded:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (BOOL)moveGroupItem:(id)arg1 afterGroupItem:(id)arg2;
- (long long)numberOfChildrenOfItem:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)outlineDataSectionManager:(id)arg1 arrangedSectionContent:(id)arg2;
- (void)requestImageForItem:(id)arg1 parentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sectionManagersForLibrary:(id)arg1 workQueue:(id)arg2 sectionEnablementProvider:(id)arg3;
- (void)setExpanded:(BOOL)arg1 forItem:(id)arg2;

@end
