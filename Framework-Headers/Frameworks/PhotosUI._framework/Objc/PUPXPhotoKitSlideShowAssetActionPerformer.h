//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createActivityWithActionManager:(id)arg1;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
- (void)_startSlideshow;
- (void)performUserInteractionTask;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;

@end

