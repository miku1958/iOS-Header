//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXMutableIndexPathSet, PXSectionedDataSource, PXSectionedDataSourceManager, PXSelectionSnapshot;

@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver>
{
    struct {
        BOOL selectionSnapshot;
    } _needsUpdateFlags;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSource *_dataSource;
    PXMutableIndexPathSet *__selectedIndexPaths;
}

@property (strong, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *_selectedIndexPaths; // @synthesize _selectedIndexPaths=__selectedIndexPaths;
@property (strong, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateSelectionSnapshot;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2;
- (void)_updateIfNeeded;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)deselectAll;
- (void)didPerformChanges;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)setSelectedState:(BOOL)arg1 forIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)setSelectedState:(BOOL)arg1 forIndexPathSet:(id)arg2;

@end
