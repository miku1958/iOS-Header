//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

@class UIViewController;
@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider
{
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

@property (nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property (strong, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // @synthesize recentPhotosViewController=_recentPhotosViewController;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)loadDataForGadgets;

@end
