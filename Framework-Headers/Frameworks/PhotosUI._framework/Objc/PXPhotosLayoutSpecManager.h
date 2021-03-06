//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXPhotosLayoutSpec;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager
{
    BOOL _sectionHeadersEnabled;
    NSArray *_availableThumbnailSizes;
}

@property (strong, nonatomic) NSArray *availableThumbnailSizes; // @synthesize availableThumbnailSizes=_availableThumbnailSizes;
@property (readonly, nonatomic) BOOL sectionHeadersEnabled; // @synthesize sectionHeadersEnabled=_sectionHeadersEnabled;
@property (readonly, nonatomic) PXPhotosLayoutSpec *spec; // @dynamic spec;

- (void).cxx_destruct;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 enableSectionHeaders:(BOOL)arg3;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (Class)specClass;

@end

