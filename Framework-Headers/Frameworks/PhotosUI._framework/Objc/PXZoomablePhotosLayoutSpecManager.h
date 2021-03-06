//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXZoomablePhotosLayoutSpec;
@protocol PXZoomablePhotosUserDefaults;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager
{
    id<PXZoomablePhotosUserDefaults> _userDefaults;
    NSArray *_availableThumbnailSizes;
}

@property (strong, nonatomic) NSArray *availableThumbnailSizes; // @synthesize availableThumbnailSizes=_availableThumbnailSizes;
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec; // @dynamic spec;
@property (strong, nonatomic) id<PXZoomablePhotosUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;

- (void).cxx_destruct;
- (id)createSpec;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (Class)specClass;

@end

