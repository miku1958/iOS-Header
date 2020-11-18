//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSString, PXAssetReference, PXAssetsDataSourceManager, PXPhotoKitUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate>
{
    PXPhotoKitUIMediaProvider *_oneUpMediaProvider;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (id)init;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(BOOL)arg3;
- (id)suggestionGadgetPreviewController:(id)arg1;

@end

