//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXLoadingStatusManager, PXOperationStatus;

@protocol PXLoadingStatusManagerObserver <NSObject>
- (void)loadingStatusManager:(PXLoadingStatusManager *)arg1 didUpdateLoadingStatus:(PXOperationStatus *)arg2 forItem:(id)arg3;
@end

