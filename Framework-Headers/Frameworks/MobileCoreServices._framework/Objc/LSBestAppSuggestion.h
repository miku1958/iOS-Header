//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSUUID;

@interface LSBestAppSuggestion : NSObject
{
    unsigned long long _type;
    NSUUID *_uniqueIdentifier;
    NSDictionary *_options;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSString *_dynamicIdentifier;
    NSDate *_lastUpdateTime;
    double _confidence;
    NSString *_originatingDeviceIdentifier;
    NSString *_originatingDeviceName;
    NSString *_originatingDeviceType;
}

@property (copy) NSString *activityType; // @synthesize activityType=_activityType;
@property (readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) double confidence; // @synthesize confidence=_confidence;
@property (readonly, copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property (readonly, copy) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property (readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property (readonly, copy) NSString *originatingDeviceIdentifier; // @synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier;
@property (readonly, copy) NSString *originatingDeviceName; // @synthesize originatingDeviceName=_originatingDeviceName;
@property (readonly, copy) NSString *originatingDeviceType; // @synthesize originatingDeviceType=_originatingDeviceType;
@property (readonly) unsigned long long type; // @synthesize type=_type;
@property (copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy) NSString *userActivityTypeIdentifier; // @dynamic userActivityTypeIdentifier;
@property (readonly, copy) NSDate *when; // @dynamic when;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 type:(unsigned long long)arg6 deviceName:(id)arg7 deviceIdentifier:(id)arg8 deviceType:(id)arg9 options:(id)arg10;
- (BOOL)isEqual:(id)arg1;

@end
