//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAutoloopRequest.h>

@class AVAsset, PXAutoloopVideoPipelinePerformer;

@interface PXAutoloopVariationRequest : PXAutoloopRequest
{
    AVAsset *_asset;
    PXAutoloopVideoPipelinePerformer *__autoloopPerformer;
}

@property (strong, nonatomic, setter=_setAutoloopPerformer:) PXAutoloopVideoPipelinePerformer *_autoloopPerformer; // @synthesize _autoloopPerformer=__autoloopPerformer;
@property (readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;

- (void).cxx_destruct;
- (void)_handlePerformerFinishedWithSuccess:(BOOL)arg1 infos:(id)arg2;
- (void)cancel;
- (unsigned long long)hash;
- (id)initWithAssetUUID:(id)arg1 AVAsset:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
