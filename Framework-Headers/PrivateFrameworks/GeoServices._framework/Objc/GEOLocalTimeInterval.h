//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOLocalTimeInterval : NSObject <NSSecureCoding>
{
    double _startTime;
    double _endTime;
}

@property (nonatomic) double endTime; // @synthesize endTime=_endTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange *)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;

@end

