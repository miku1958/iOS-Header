//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface AVAudioDevice : NSObject
{
    NSString *_deviceName;
    NSNumber *_deviceID;
    NSString *_UID;
    BOOL _inputAvailable;
    BOOL _outputAvailable;
    BOOL _preferredDevice;
    BOOL _isBluetoothDevice;
    BOOL _isLineIn;
}

@property (readonly, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property (readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property (readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly, nonatomic) BOOL inputAvailable; // @synthesize inputAvailable=_inputAvailable;
@property (readonly, nonatomic) BOOL isBluetoothDevice;
@property (readonly, nonatomic) BOOL outputAvailable; // @synthesize outputAvailable=_outputAvailable;
@property (readonly, nonatomic, getter=isPreferredDevice) BOOL preferredDevice;

- (void)createName;
- (void)createNameForScope:(unsigned int)arg1;
- (void)createUID;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDeviceID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSomethingConnectedToJack;
- (BOOL)isStreamAvailableForScope:(unsigned int)arg1;
- (BOOL)isValidDevice;
- (BOOL)isValidInputDevice;

@end

