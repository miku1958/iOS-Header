//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec
{
    unsigned long long _contentInsetEdges;
}

@property (readonly, nonatomic) unsigned long long contentInsetEdges; // @synthesize contentInsetEdges=_contentInsetEdges;
@property (readonly, nonatomic) struct CGSize playButtonSize;

- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (double)defaultCornerRadius;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end

