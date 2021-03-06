//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager
{
    unsigned long long _detailsOptions;
}

@property (readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
@property (readonly, nonatomic) PXPhotosDetailsAssetsSpec *spec; // @dynamic spec;

- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (Class)specClass;

@end

