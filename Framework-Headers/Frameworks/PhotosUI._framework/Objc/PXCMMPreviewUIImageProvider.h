//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@class NSString;
@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>
{
    id<PXUIImageProvider> _underlyingAssetImageProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PXUIImageProvider> underlyingAssetImageProvider; // @synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider;

- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

