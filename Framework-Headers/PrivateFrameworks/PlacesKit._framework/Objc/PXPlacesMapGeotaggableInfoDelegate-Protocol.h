//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@protocol PXPlacesGeotaggable;

@protocol PXPlacesMapGeotaggableInfoDelegate <NSObject>

@optional
- (void)imageForGeotaggable:(id<PXPlacesGeotaggable>)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(void (^)(id<PXPlacesGeotaggable>, struct CGImage *, NSError *, NSDictionary *))arg4;
@end
