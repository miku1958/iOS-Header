//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicMediaProductDetailViewController.h>

#import <FuseUI/UIImagePickerControllerDelegate-Protocol.h>
#import <FuseUI/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface MusicMediaPlaylistDetailViewController : MusicMediaProductDetailViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSString *_curatorStoreID;
    BOOL _hasForcedCuratorPlaylistRefresh;
    unsigned long long _playlistSagaID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelEditing;
- (void)_handleCameraActionFromButton:(id)arg1;
- (id)_loadDetailHeaderConfiguration;
- (id)_loadProductHeaderContentViewController;
- (id)_loadProductSplitDetailViewController;
- (id)_loadProductSplitMainViewController;
- (void)_proceedWithSetEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5 curatorStoreID:(id)arg6;
- (void)mediaProductHeaderContentViewController:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)mediaProductSplitDetailViewController:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;

@end
