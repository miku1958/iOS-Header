//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSImageScalingSpecification : NSObject
{
    int _assetTypeFlags;
    double _nominalShortSideLength;
    double _minimumLongSideLength;
    double _maximumLongSideLength;
}

@property (nonatomic) int assetTypeFlags; // @synthesize assetTypeFlags=_assetTypeFlags;
@property (nonatomic) double maximumLongSideLength; // @synthesize maximumLongSideLength=_maximumLongSideLength;
@property (nonatomic) double minimumLongSideLength; // @synthesize minimumLongSideLength=_minimumLongSideLength;
@property (nonatomic) double nominalShortSideLength; // @synthesize nominalShortSideLength=_nominalShortSideLength;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize)arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;
- (id)description;
- (double)scaleFactorForInputSize:(struct CGSize)arg1;

@end

