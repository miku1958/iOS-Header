//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface INExtensionContext : NSObject <NSSecureCoding>
{
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    NSArray *_airPlayRouteIdentifiers;
}

@property (copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers; // @synthesize _airPlayRouteIdentifiers;
@property (copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier; // @synthesize _recordDeviceIdentifier;
@property (copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID; // @synthesize _recordDeviceUID;
@property (copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute; // @synthesize _recordRoute;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
