//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXMIDIEvent, NSString, NSUUID;

@interface AXSwitch : NSObject <NSSecureCoding>
{
    unsigned short _keyCode;
    long long _action;
    long long _longPressAction;
    NSString *_name;
    NSString *_source;
    NSString *_type;
    NSString *_productName;
    NSString *_manufacturerName;
    NSUUID *_uuid;
    long long _buttonNumber;
    long long _headSwitch;
    AXMIDIEvent *_midiEvent;
    NSString *_remoteSwitchIdentifier;
    NSString *_remoteDeviceName;
    NSString *_remoteDeviceIdentifier;
}

@property (nonatomic) long long action; // @synthesize action=_action;
@property (nonatomic) long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;
@property (readonly, nonatomic) BOOL hasLongPressAction;
@property (nonatomic) long long headSwitch; // @synthesize headSwitch=_headSwitch;
@property (nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (nonatomic) long long longPressAction; // @synthesize longPressAction=_longPressAction;
@property (copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property (strong, nonatomic) AXMIDIEvent *midiEvent; // @synthesize midiEvent=_midiEvent;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier; // @synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier;
@property (copy, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property (copy, nonatomic) NSString *remoteSwitchIdentifier; // @synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier;
@property (strong, nonatomic) NSString *source; // @synthesize source=_source;
@property (readonly, nonatomic) BOOL supportsLongPress;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

