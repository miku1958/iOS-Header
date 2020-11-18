//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRRequestReading-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SRReaderRequest : NSObject <SRRequestReading>
{
    NSString *_sensor;
    NSString *_bundleIdentifier;
    NSString *_deviceIdentifier;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *sensor; // @synthesize sensor=_sensor;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
