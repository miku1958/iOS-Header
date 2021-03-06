//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject
{
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_ssid;
    NSString *_macAddress;
    unsigned long long _properties;
}

@property (readonly, copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property (readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property (readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAirPortAssistantWACDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

