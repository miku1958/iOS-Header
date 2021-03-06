//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/AXHearingAidDevice.h>

@class CBPeripheral, NSArray, NSDate, NSMutableArray, NSString;

@interface AXFakeHearingAidDevice : AXHearingAidDevice
{
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    CDUnknownBlockType _writeBlock;
    BOOL _isConnecting;
    BOOL _connected;
    short _leftMicrophoneVolumeSteps;
    short _rightMicrophoneVolumeSteps;
    int _type;
    NSString *_name;
    NSArray *_manufacturer;
    NSArray *_model;
    NSString *_leftUUID;
    NSString *_rightUUID;
    double _rightBatteryLevel;
    double _leftBatteryLevel;
    NSString *_leftFirmwareVersion;
    NSString *_rightFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_rightHardwareVersion;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    unsigned long long _excludedProperties;
}

@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic) unsigned long long excludedProperties; // @synthesize excludedProperties=_excludedProperties;
@property (nonatomic) BOOL isConnecting; // @synthesize isConnecting=_isConnecting;
@property (nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel=_leftBatteryLevel;
@property (strong, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property (strong, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion=_leftFirmwareVersion;
@property (strong, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion=_leftHardwareVersion;
@property (nonatomic) short leftMicrophoneVolumeSteps; // @synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps;
@property (strong, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property (strong, nonatomic) NSString *leftUUID; // @synthesize leftUUID=_leftUUID;
@property (strong, nonatomic) NSArray *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (strong, nonatomic) NSArray *model; // @synthesize model=_model;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel=_rightBatteryLevel;
@property (strong, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property (strong, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion=_rightFirmwareVersion;
@property (strong, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion=_rightHardwareVersion;
@property (nonatomic) short rightMicrophoneVolumeSteps; // @synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps;
@property (strong, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property (strong, nonatomic) NSString *rightUUID; // @synthesize rightUUID=_rightUUID;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (void)connect;
- (void)createPrograms;
- (void)dealloc;
- (BOOL)deviceSupportsProperty:(unsigned long long)arg1;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)disconnect;
- (BOOL)hasConnection;
- (id)initWithDeviceType:(int)arg1;
- (BOOL)isConnected;
- (BOOL)isFakeDevice;
- (BOOL)isLeftConnected;
- (BOOL)isPersistent;
- (BOOL)isRightConnected;
- (BOOL)leftAvailable;
- (id)leftPrograms;
- (id)manufacturerForType;
- (id)modelForType;
- (void)persist;
- (id)persistentRepresentation;
- (BOOL)programsListsAreEqual;
- (BOOL)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (void)registerWriteBlock:(CDUnknownBlockType)arg1;
- (BOOL)rightAvailable;
- (id)rightPrograms;
- (void)setNewName:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (BOOL)showCombinedPrograms;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;

@end

