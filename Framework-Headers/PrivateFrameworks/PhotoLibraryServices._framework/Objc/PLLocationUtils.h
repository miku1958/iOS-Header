//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLocationUtils : NSObject
{
}

+ (BOOL)canUseCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (struct PLCartesianCoordinate3D)cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2;
+ (struct CLLocationCoordinate2D)defaultLocationCoordinate2D;
+ (BOOL)horizontalAccuracyIsCoarse:(double)arg1;
+ (BOOL)locationIsCoarse:(id)arg1;
+ (id)predicateForAssetWithLocation;
+ (id)predicateForMomentWithLocation;

@end

