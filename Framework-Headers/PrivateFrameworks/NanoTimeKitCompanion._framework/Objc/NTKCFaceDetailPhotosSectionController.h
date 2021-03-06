//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionVerticalSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailAlbumChooserViewControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailCustomPhotosViewControllerDelegate-Protocol.h>

@class NSArray, NSString, NTKBasePhotosFaceView, NTKCompanionCustomPhotosEditor, NTKCompanionMemoriesEditor, NTKCompanionSyncedAlbumEditor, NTKCompanionTransientCustomPhotosEditor, UIViewController;
@protocol NTKCFaceDetailPhotosSectionDelegate;

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate>
{
    BOOL _canDeleteCustomPhotos;
    unsigned long long _currentContent;
    UIViewController *_parentViewController;
    NTKCompanionCustomPhotosEditor *_customPhotosEditor;
    NTKCompanionSyncedAlbumEditor *_syncedAlbumEditor;
    NTKCompanionMemoriesEditor *_memoriesEditor;
    NTKCompanionTransientCustomPhotosEditor *_transientEditor;
    NSArray *_externalAssets;
}

@property (readonly, nonatomic) unsigned long long contentType;
@property (strong, nonatomic) NTKCompanionCustomPhotosEditor *customPhotosEditor; // @synthesize customPhotosEditor=_customPhotosEditor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailPhotosSectionDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *externalAssets; // @synthesize externalAssets=_externalAssets;
@property (strong, nonatomic) NTKBasePhotosFaceView *faceView; // @dynamic faceView;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NTKCompanionMemoriesEditor *memoriesEditor; // @synthesize memoriesEditor=_memoriesEditor;
@property (weak, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor; // @synthesize syncedAlbumEditor=_syncedAlbumEditor;
@property (strong, nonatomic) NTKCompanionTransientCustomPhotosEditor *transientEditor; // @synthesize transientEditor=_transientEditor;

+ (BOOL)hasPhotosSectionForFace:(id)arg1 forEditMode:(long long)arg2;
- (void).cxx_destruct;
- (id)_actionNameForOption:(id)arg1;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (id)_currentEditor;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (BOOL)_handleDidSelectActionRowForOption:(id)arg1;
- (BOOL)_handleDidSelectOption:(id)arg1;
- (void)_setPhotos:(id)arg1;
- (void)_updatePhotosSection;
- (void)albumChooserDidFinish:(id)arg1;
- (BOOL)canAddFace;
- (void)customPhotosControllerDidFinish:(id)arg1;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 externalAssets:(id)arg6;
- (void)saveChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSelectedOptions:(id)arg1;

@end

