//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSOrderedSet, NSURL, UIActivityViewController;
@protocol PXActivityViewController;

@protocol PXActivityItemSourceController <NSObject>

@property (weak, nonatomic) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (readonly, copy, nonatomic) NSOrderedSet *assetItemSources;
@property (readonly, copy, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) BOOL isPreparingIndividualItems;
@property (readonly, nonatomic) BOOL itemSourcesSupportMomentShareLinkCreation;
@property (readonly, nonatomic) BOOL itemSourcesSupportSlideshow;
@property (readonly, nonatomic) BOOL momentSharePublishAttempted;
@property (nonatomic) unsigned long long preferredPreparationType;
@property (readonly, nonatomic) NSURL *publishedURL;
@property (readonly, nonatomic) BOOL shouldExcludeAccessibilityDescriptionInAllItemSources;
@property (readonly, nonatomic) BOOL shouldExcludeCaptionInAllItemSources;
@property (readonly, nonatomic) BOOL shouldExcludeLivenessInAllItemSources;
@property (readonly, nonatomic) BOOL shouldExcludeLocationInAllItemSources;
@property (readonly, nonatomic) BOOL shouldShareAsOriginals;
@property (readonly, nonatomic) BOOL shouldUseMomentShareLinkInMessagesIfThresholdMet;

- (struct PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
@end
