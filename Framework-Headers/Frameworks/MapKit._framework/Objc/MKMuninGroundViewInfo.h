//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationInfo;

__attribute__((visibility("hidden")))
@interface MKMuninGroundViewInfo : NSObject
{
    double _startHeading;
    double _endHeading;
    GEOLocationInfo *_locationInfo;
}

@property (readonly, nonatomic) double endHeading; // @synthesize endHeading=_endHeading;
@property (readonly, nonatomic) GEOLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property (readonly, nonatomic) double startHeading; // @synthesize startHeading=_startHeading;

- (void).cxx_destruct;
- (id)initWithStartHeading:(double)arg1 endHeading:(double)arg2 localityName:(id)arg3 locationName:(id)arg4 secondaryLocationName:(id)arg5;
- (BOOL)isHeadingInRange:(double)arg1;

@end
