//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy
{
    long long _nominalShortSide;
    long long _minLongSide;
    long long _maxLongSide;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;
- (BOOL)isBestFitPolicy;
- (BOOL)isEqual:(id)arg1;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;

@end
