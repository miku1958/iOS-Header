//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARAmbientLightData : NSObject <ARSensorData, NSSecureCoding>
{
    float _lightIntensity;
    double _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float lightIntensity; // @synthesize lightIntensity=_lightIntensity;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

