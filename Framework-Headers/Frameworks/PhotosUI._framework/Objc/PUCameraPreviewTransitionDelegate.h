//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosPreviewTransitionDelegate.h>

@class PUScrubberView, UIImage;

__attribute__((visibility("hidden")))
@interface PUCameraPreviewTransitionDelegate : PUPhotosPreviewTransitionDelegate
{
    BOOL _shouldHideScrubber;
    PUScrubberView *_previewScrubber;
    UIImage *_previewSourceImage;
    struct CGRect _previewSourceRect;
}

@property (strong, nonatomic) PUScrubberView *previewScrubber; // @synthesize previewScrubber=_previewScrubber;
@property (strong, nonatomic) UIImage *previewSourceImage; // @synthesize previewSourceImage=_previewSourceImage;
@property (nonatomic) struct CGRect previewSourceRect; // @synthesize previewSourceRect=_previewSourceRect;
@property (nonatomic) BOOL shouldHideScrubber; // @synthesize shouldHideScrubber=_shouldHideScrubber;

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end

