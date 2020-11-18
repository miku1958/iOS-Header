//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXTilingCoordinateSpaceConverter : NSObject
{
    BOOL _shouldCache;
}

@property (nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;

+ (BOOL)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2;
+ (BOOL)canConvertBetweenCoordinateSpaceIdentifier:(void *)arg1 andCoordinateSpaceIdentifier:(void *)arg2;
+ (id)defaultConverter;
- (struct CGAffineTransform)_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2;
- (struct CGAffineTransform)_transformOfCoordinateSpaceIdentifier:(void *)arg1 relativeToCoordinateSpaceIdentifier:(void *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;
- (struct PXTileGeometry)convertTileGeometry:(struct PXTileGeometry)arg1 toCoordinateSpaceIdentifier:(void *)arg2;
- (void)invalidateCache;

@end

