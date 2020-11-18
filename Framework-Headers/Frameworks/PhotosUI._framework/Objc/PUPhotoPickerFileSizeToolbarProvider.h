//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotosGridViewSupplementalToolbarProvider-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, PUPhotoPickerResizeTaskDescriptor, UIBarButtonItem, UILabel, UITableViewController;
@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerFileSizeToolbarProvider : NSObject <UITableViewDataSource, UITableViewDelegate, PUPhotosGridViewSupplementalToolbarProvider>
{
    id<PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;
    UIBarButtonItem *_sizePickerItem;
    UILabel *_sizePickerDescriptionLabel;
    UITableViewController *_sizePickerViewController;
    BOOL _preparingToPresentSizePickerViewController;
    NSArray *_toolbarItems;
    NSArray *_resizeTaskDescriptors;
    NSSet *_cachedAssetSet;
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;
    NSMutableDictionary *_taskDescriptorsToCachedLabels;
    id<PUPhotoPickerFileSizeToolbarProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoPickerFileSizeToolbarProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldShowToolbar;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *toolbarItems;

- (void).cxx_destruct;
- (id)_computeSelectedIndexPath;
- (id)_localizedLabelForResizeTaskDescriptor:(id)arg1;
- (id)_orderedResizeTaskDescriptors;
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
- (void)_presentSizePicker:(id)arg1;
- (id)_sizePickerItem;
- (void)_updateSizePickerItemIfNeeded;
- (void)_updateTableViewSelection;
- (id)initWithDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
