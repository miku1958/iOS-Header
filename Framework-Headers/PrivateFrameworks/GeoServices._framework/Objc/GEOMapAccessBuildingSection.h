//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapBuildingSection-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection>
{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _baseHeight;
    double _height;
    unsigned long long _sectionIndex;
    CDStruct_2c43369c _centerCoordinate;
    double _radius;
}

@property (readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property (readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property (readonly, nonatomic) unsigned long long coordinateCount; // @synthesize coordinateCount=_coordinateCount;
@property (readonly, nonatomic) CDStruct_c3b9c2ee *coordinates; // @synthesize coordinates=_coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double height; // @synthesize height=_height;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithFeature:(CDStruct_8e575d68 *)arg1 sectionIndex:(unsigned long long)arg2;

@end

