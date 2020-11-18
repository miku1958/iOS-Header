//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMSession.h>

@class PHAsset, PHMomentShare, PHSuggestion, PXCMMPhotoKitImportStatusManager, PXPhotoKitAssetsDataSourceManager, PXPhotoKitMomentShareStatus;

@interface PXCMMPhotoKitSession : PXCMMSession
{
    PXCMMPhotoKitImportStatusManager *_cmmImportStatusManager;
    PXPhotoKitMomentShareStatus *_momentShareStatus;
    PHMomentShare *_momentShare;
    PHSuggestion *_suggestion;
    PHMomentShare *_originatingMomentShare;
    PHAsset *_anchorAsset;
}

@property (weak, nonatomic) PHAsset *anchorAsset; // @synthesize anchorAsset=_anchorAsset;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @dynamic dataSourceManager;
@property (readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property (readonly, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticDictionary;
- (id)importStatusManager;
- (id)initWithContext:(id)arg1;
- (id)initWithPhotoKitContext:(id)arg1;
- (id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1;
- (id)notificationSuppressionContexts;

@end
