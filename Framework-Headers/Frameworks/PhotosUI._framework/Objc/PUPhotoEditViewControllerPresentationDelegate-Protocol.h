//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotoEditViewController;
@protocol PUEditableAsset;

@protocol PUPhotoEditViewControllerPresentationDelegate <NSObject>
- (void)photoEditController:(PUPhotoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id<PUEditableAsset>)arg2;
@end
