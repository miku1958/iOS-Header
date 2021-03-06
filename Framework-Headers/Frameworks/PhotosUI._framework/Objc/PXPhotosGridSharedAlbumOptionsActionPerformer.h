//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosGridActionPerformer.h>

#import <PhotosUICore/PXAlbumStreamingOptionsViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PXAlbumStreamingOptionsViewController;

@interface PXPhotosGridSharedAlbumOptionsActionPerformer : PXPhotosGridActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    PXAlbumStreamingOptionsViewController *_presentedOptionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_shouldDismissOptionsForReason:(int)arg1;
- (BOOL)_shouldRequestGridDismissalForReason:(int)arg1;
- (id)activitySystemImageName;
- (id)activityType;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;

@end

