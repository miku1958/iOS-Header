//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray;
@protocol PLVideoResource;

@protocol PLVideoResourceContext <NSObject>
- (id<PLVideoResource>)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (void)repairResource:(id<PLVideoResource>)arg1;
- (double)sizeThresholdForHighQuality;
- (BOOL)validateResource:(id<PLVideoResource>)arg1;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;
@end

