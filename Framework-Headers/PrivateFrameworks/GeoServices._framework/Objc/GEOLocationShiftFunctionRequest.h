//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject
{
    unsigned short _providerID;
    GEOLocationShiftRequest *_locationShiftRequest;
    GEOPolyLocationShiftRequest *_polyLocationShiftRequest;
}

@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) unsigned short providerID; // @synthesize providerID=_providerID;
@property (readonly, nonatomic) PBRequest *shiftRequest;

- (void)dealloc;

@end

