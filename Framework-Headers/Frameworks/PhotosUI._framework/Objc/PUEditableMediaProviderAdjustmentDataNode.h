//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

@class PHAdjustmentData, PUEditableMediaProvider;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode
{
    int _requestID;
    id<PUEditableAsset> _asset;
    PHAdjustmentData *_adjustmentData;
    PUEditableMediaProvider *_mediaProvider;
}

@property (readonly, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property (readonly, nonatomic) id<PUEditableAsset> asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;

- (void).cxx_destruct;
- (void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)run;

@end

