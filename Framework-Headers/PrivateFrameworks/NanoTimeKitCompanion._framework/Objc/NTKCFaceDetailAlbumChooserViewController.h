//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

#import <NanoTimeKitCompanion/_NTKCFaceDetailAlbumChooserViewControllerDelegate-Protocol.h>

@class NSString, NTKCompanionSyncedAlbumEditor, NTKFace, _NTKCFaceDetailAlbumChooserViewController;
@protocol NTKCFaceDetailAlbumChooserViewControllerDelegate;

@interface NTKCFaceDetailAlbumChooserViewController : NTKCNavigationController <_NTKCFaceDetailAlbumChooserViewControllerDelegate>
{
    _NTKCFaceDetailAlbumChooserViewController *_implementationVC;
    id<NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NTKCompanionSyncedAlbumEditor *editor;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL inGallery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_albumChooserDidFinish:(id)arg1;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3;

@end

