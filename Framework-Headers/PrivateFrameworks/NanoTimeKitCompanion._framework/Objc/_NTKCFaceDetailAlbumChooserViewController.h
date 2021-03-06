//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewController.h>

@class NSMutableArray, NTKCompanionSyncedAlbumEditor, NTKFace, PHAssetCollection;
@protocol _NTKCFaceDetailAlbumChooserViewControllerDelegate;

@interface _NTKCFaceDetailAlbumChooserViewController : PUAlbumListViewController
{
    NSMutableArray *_allAlbums;
    PHAssetCollection *_syncedAlbum;
    PHAssetCollection *_selectedAlbum;
    BOOL _inGallery;
    NTKCompanionSyncedAlbumEditor *_editor;
    NTKFace *_face;
    id<_NTKCFaceDetailAlbumChooserViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<_NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NTKCompanionSyncedAlbumEditor *editor; // @synthesize editor=_editor;
@property (strong, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (nonatomic) BOOL inGallery; // @synthesize inGallery=_inGallery;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_appendCollectionsWithType:(long long)arg1 subtype:(long long)arg2;
- (void)_reloadData;
- (void)_set_allAlbums;
- (void)_set_selectedAlbum;
- (BOOL)_shouldShowAggregateItem;
- (id)_title;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (BOOL)shouldShowAllPhotosItem;
- (BOOL)showAddNewAlbumPlaceholder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

