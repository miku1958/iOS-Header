//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHFaceCollection.h>

#import <PhotosUICore/PXFaceCollection-Protocol.h>

@class NSString;

@interface PHFaceCollection (PXFaceCollection) <PXFaceCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)name;
- (unsigned long long)numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 round:(BOOL)arg3 cacheResult:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
@end

