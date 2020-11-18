//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BatteryCenter/NSCoding-Protocol.h>
#import <BatteryCenter/NSCopying-Protocol.h>

@class NSDictionary, NSString, UIImage;

@interface BCBatteryDevice : NSObject <NSCopying, NSCoding>
{
    NSString *_matchIdentifier;
    long long _percentCharge;
    BOOL _charging;
    NSDictionary *_glyphs;
    BOOL _connected;
    BOOL _lowBattery;
    BOOL _internal;
    BOOL _powerSource;
    BOOL _fake;
    NSString *_identifier;
    long long _vendor;
    long long _powerSourceState;
    long long _productIdentifier;
    NSString *_name;
    unsigned long long _parts;
    NSString *_baseIdentifier;
    long long _transportType;
}

@property (copy, nonatomic) NSString *baseIdentifier; // @synthesize baseIdentifier=_baseIdentifier;
@property (nonatomic, getter=isCharging) BOOL charging; // @synthesize charging=_charging;
@property (nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic, getter=isFake) BOOL fake; // @synthesize fake=_fake;
@property (readonly, strong, nonatomic) UIImage *glyph;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic, getter=isInternal) BOOL internal; // @synthesize internal=_internal;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // @synthesize lowBattery=_lowBattery;
@property (readonly, copy, nonatomic) NSString *matchIdentifier; // @synthesize matchIdentifier=_matchIdentifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long parts; // @synthesize parts=_parts;
@property (nonatomic) long long percentCharge; // @synthesize percentCharge=_percentCharge;
@property (nonatomic, getter=isPowerSource) BOOL powerSource; // @synthesize powerSource=_powerSource;
@property (nonatomic) long long powerSourceState; // @synthesize powerSourceState=_powerSourceState;
@property (readonly, nonatomic) long long productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property (readonly, nonatomic) long long vendor; // @synthesize vendor=_vendor;

+ (id)batteryDeviceWithVendor:(long long)arg1 productIdentifier:(long long)arg2 baseIdentifier:(id)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;
- (id)_lazyGlyphs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphForPartKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendor:(long long)arg1 productIdentifier:(long long)arg2 baseIdentifier:(id)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;

@end

