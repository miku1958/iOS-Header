//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class AXHearingAidMode, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableArray, NSString;

@protocol AXHADeviceProtocol <NSObject>

@property (nonatomic) int availableEars;
@property (readonly, strong, nonatomic) NSString *deviceUUID;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) BOOL isPaired;
@property (nonatomic) BOOL keepInSync;
@property (nonatomic) BOOL leftBass;
@property (readonly, nonatomic) double leftBatteryLevel;
@property (readonly, strong, nonatomic) NSDate *leftBatteryLowDate;
@property (readonly, strong, nonatomic) NSString *leftFirmwareVersion;
@property (readonly, strong, nonatomic) NSString *leftHardwareVersion;
@property (nonatomic) double leftMicrophoneVolume;
@property (readonly, nonatomic) short leftMicrophoneVolumeSteps;
@property (nonatomic) double leftMixedVolume;
@property (readonly, nonatomic) short leftMixedVolumeSteps;
@property (readonly, strong, nonatomic) NSString *leftPeripheralUUID;
@property (readonly, copy, nonatomic) NSArray *leftPrograms;
@property (readonly, strong, nonatomic) AXHearingAidMode *leftSelectedProgram;
@property (readonly, strong, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram;
@property (nonatomic) double leftSensitivity;
@property (readonly, nonatomic) short leftSensitivitySteps;
@property (nonatomic) double leftStreamVolume;
@property (readonly, nonatomic) short leftStreamVolumeSteps;
@property (nonatomic) BOOL leftTreble;
@property (readonly, strong, nonatomic) NSString *leftUUID;
@property (readonly, strong, nonatomic) NSMutableArray *manufacturer;
@property (readonly, strong, nonatomic) NSMutableArray *model;
@property (readonly, strong, nonatomic) NSString *name;
@property (nonatomic) BOOL rightBass;
@property (readonly, nonatomic) double rightBatteryLevel;
@property (readonly, strong, nonatomic) NSDate *rightBatteryLowDate;
@property (readonly, strong, nonatomic) NSString *rightFirmwareVersion;
@property (readonly, strong, nonatomic) NSString *rightHardwareVersion;
@property (nonatomic) double rightMicrophoneVolume;
@property (readonly, nonatomic) short rightMicrophoneVolumeSteps;
@property (nonatomic) double rightMixedVolume;
@property (readonly, nonatomic) short rightMixedVolumeSteps;
@property (readonly, strong, nonatomic) NSString *rightPeripheralUUID;
@property (readonly, copy, nonatomic) NSArray *rightPrograms;
@property (readonly, strong, nonatomic) AXHearingAidMode *rightSelectedProgram;
@property (readonly, strong, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram;
@property (nonatomic) double rightSensitivity;
@property (readonly, nonatomic) short rightSensitivitySteps;
@property (nonatomic) double rightStreamVolume;
@property (readonly, nonatomic) short rightStreamVolumeSteps;
@property (nonatomic) BOOL rightTreble;
@property (readonly, strong, nonatomic) NSString *rightUUID;
@property (readonly, nonatomic) BOOL supportsBinauralStreaming;
@property (readonly, nonatomic) BOOL supportsCombinedPresets;
@property (readonly, nonatomic) BOOL supportsCombinedVolumes;

- (void)connect;
- (BOOL)containsPeripheralWithUUID:(NSString *)arg1;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)disconnectAndUnpair:(BOOL)arg1;
- (BOOL)hasConnection;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
- (BOOL)isConnected;
- (BOOL)leftAvailable;
- (void)loadRequiredProperties;
- (NSArray *)programs;
- (BOOL)rightAvailable;
- (void)selectProgram:(AXHearingAidMode *)arg1 forEar:(int)arg2;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (id)valueForProperty:(unsigned long long)arg1;
@end

