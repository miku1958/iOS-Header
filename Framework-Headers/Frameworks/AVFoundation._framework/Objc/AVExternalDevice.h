//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;
@protocol AVExternalDeviceDelegate;

@interface AVExternalDevice : NSObject
{
    AVExternalDeviceInternal *_externalDevice;
}

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSData *MFiCertificateSerialNumber;
@property (readonly, nonatomic) NSData *OEMIcon;
@property (readonly, nonatomic) NSString *OEMIconLabel;
@property (readonly, nonatomic) BOOL OEMIconVisible;
@property (readonly, nonatomic) NSArray *OEMIcons;
@property (nonatomic) id<AVExternalDeviceDelegate> delegate;
@property (readonly, nonatomic) NSArray *externalDeviceHIDs;
@property (readonly, nonatomic) BOOL limitedUI;
@property (readonly, nonatomic) NSArray *limitedUIElements;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL nightMode;
@property (readonly, nonatomic) BOOL nightModeSupported;
@property (readonly, nonatomic) BOOL ownsTurnByTurnNavigation;
@property (readonly, nonatomic) BOOL recognizingSpeech;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly, nonatomic) NSArray *screenIDs;
@property (readonly, nonatomic) NSDictionary *screenInputCapabilities;
@property (readonly, nonatomic) long long transportType;

+ (id)currentCarPlayExternalDevice;
+ (id)currentExternalDevice;
+ (BOOL)setDiagnosticMode:(BOOL)arg1 error:(id *)arg2;
+ (id)sharedLocalDevice;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (id)_weakReference;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)externalDeviceHIDWithUUID:(id)arg1;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (void)finalize;
- (id)init;
- (id)initWithCurrentCarPlayExternalDevice;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (void)requestCarUI;
- (id)requestTurnByTurnNavigationOwnership;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;

@end

