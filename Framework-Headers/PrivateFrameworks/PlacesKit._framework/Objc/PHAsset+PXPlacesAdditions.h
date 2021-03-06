//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PlacesKit/PXPlacesGeotaggable-Protocol.h>

@class NSString;

@interface PHAsset (PXPlacesAdditions) <PXPlacesGeotaggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pk_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
- (long long)pk_isContentEqualTo:(id)arg1;
@end

