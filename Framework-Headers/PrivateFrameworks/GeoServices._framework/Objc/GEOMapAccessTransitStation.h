//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessTransitNodeBase.h>

#import <GeoServices/GEOMapTransitStation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitStation : GEOMapAccessTransitNodeBase <GEOMapTransitStation>
{
}

@property (readonly, nonatomic) double boundingRadius;
@property (readonly, nonatomic) CDStruct_90e2a262 boundingRect;
@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property (readonly, nonatomic) long long polygonPointsCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long transitID;

- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

