//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHAsset;

@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver>
{
    CDUnknownBlockType _resultHandler;
    BOOL _finished;
    PHAsset *_asset;
    long long _workerType;
}

@property (readonly) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long workerType; // @synthesize workerType=_workerType;

- (void).cxx_destruct;
- (void)_handleFinishWithSuccess:(BOOL)arg1;
- (id)initWithAsset:(id)arg1 workerType:(long long)arg2;
- (void)runWithResultHandler:(CDUnknownBlockType)arg1;

@end
