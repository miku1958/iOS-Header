//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXAssetReference;
@protocol PXImportStatusManager;

@protocol PXImportStatusObserver <NSObject>
- (void)importStatusManager:(id<PXImportStatusManager>)arg1 didChangeStatusForAssetReference:(PXAssetReference *)arg2;
@end

