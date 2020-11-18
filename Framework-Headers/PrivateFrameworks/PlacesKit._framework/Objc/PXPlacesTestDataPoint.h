//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesGeotaggable-Protocol.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable>
{
    struct CLLocationCoordinate2D _coordinate;
    NSString *_name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGImage *image;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
- (id)initWithName:(id)arg1 location:(struct CLLocationCoordinate2D)arg2;

@end
