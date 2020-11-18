//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation
{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    UIImage *__resultImage;
    NSDictionary *__resultInfo;
}

@property (strong, nonatomic, setter=_setResultImage:) UIImage *_resultImage; // @synthesize _resultImage=__resultImage;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // @synthesize _resultInfo=__resultInfo;
@property (copy, nonatomic) CDUnknownBlockType externalProgressHandler; // @synthesize externalProgressHandler=_externalProgressHandler;
@property (copy, nonatomic) CDUnknownBlockType externalResultHandler; // @synthesize externalResultHandler=_externalResultHandler;
@property (readonly, copy, nonatomic) CDUnknownBlockType internalProgressHandler; // @synthesize internalProgressHandler=_internalProgressHandler;
@property (readonly, copy, nonatomic) CDUnknownBlockType internalResultHandler; // @synthesize internalResultHandler=_internalResultHandler;

- (void).cxx_destruct;
- (void)_handleResultImage:(id)arg1 info:(id)arg2;
- (void)endSimulationWithError:(id)arg1;
- (id)init;
- (void)updateSimulationWithProgress:(double)arg1;

@end

