//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPLocale, NSData, NSString;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying>
{
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
    struct {
        unsigned int applicationConfigVersion:1;
        unsigned int deviceFlowControlBudget:1;
        unsigned int deviceFlowControlBudgetCap:1;
        unsigned int deviceProtocolVersion:1;
        unsigned int globalConfigVersion:1;
        unsigned int applicationContainerEnvironment:1;
        unsigned int deviceFlowControlRegeneration:1;
        unsigned int isolationLevel:1;
        unsigned int targetDatabase:1;
    } _has;
}

@property (strong, nonatomic) NSString *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property (nonatomic) unsigned long long applicationConfigVersion; // @synthesize applicationConfigVersion=_applicationConfigVersion;
@property (strong, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
@property (nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property (strong, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property (strong, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property (strong, nonatomic) NSString *deviceAssignedName; // @synthesize deviceAssignedName=_deviceAssignedName;
@property (nonatomic) unsigned long long deviceFlowControlBudget; // @synthesize deviceFlowControlBudget=_deviceFlowControlBudget;
@property (nonatomic) unsigned long long deviceFlowControlBudgetCap; // @synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap;
@property (strong, nonatomic) NSString *deviceFlowControlKey; // @synthesize deviceFlowControlKey=_deviceFlowControlKey;
@property (nonatomic) float deviceFlowControlRegeneration; // @synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration;
@property (strong, nonatomic) NSString *deviceHardwareID; // @synthesize deviceHardwareID=_deviceHardwareID;
@property (strong, nonatomic) NSString *deviceHardwareVersion; // @synthesize deviceHardwareVersion=_deviceHardwareVersion;
@property (strong, nonatomic) CKDPIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) NSString *deviceLibraryName; // @synthesize deviceLibraryName=_deviceLibraryName;
@property (strong, nonatomic) NSString *deviceLibraryVersion; // @synthesize deviceLibraryVersion=_deviceLibraryVersion;
@property (nonatomic) unsigned long long deviceProtocolVersion; // @synthesize deviceProtocolVersion=_deviceProtocolVersion;
@property (strong, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property (nonatomic) unsigned long long globalConfigVersion; // @synthesize globalConfigVersion=_globalConfigVersion;
@property (readonly, nonatomic) BOOL hasApplicationBundle;
@property (nonatomic) BOOL hasApplicationConfigVersion;
@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (readonly, nonatomic) BOOL hasApplicationVersion;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (readonly, nonatomic) BOOL hasDeviceAssignedName;
@property (nonatomic) BOOL hasDeviceFlowControlBudget;
@property (nonatomic) BOOL hasDeviceFlowControlBudgetCap;
@property (readonly, nonatomic) BOOL hasDeviceFlowControlKey;
@property (nonatomic) BOOL hasDeviceFlowControlRegeneration;
@property (readonly, nonatomic) BOOL hasDeviceHardwareID;
@property (readonly, nonatomic) BOOL hasDeviceHardwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceLibraryName;
@property (readonly, nonatomic) BOOL hasDeviceLibraryVersion;
@property (nonatomic) BOOL hasDeviceProtocolVersion;
@property (readonly, nonatomic) BOOL hasDeviceSoftwareVersion;
@property (nonatomic) BOOL hasGlobalConfigVersion;
@property (nonatomic) BOOL hasIsolationLevel;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasMmcsProtocolVersion;
@property (nonatomic) BOOL hasTargetDatabase;
@property (readonly, nonatomic) BOOL hasUserIDContainerID;
@property (readonly, nonatomic) BOOL hasUserToken;
@property (nonatomic) int isolationLevel; // @synthesize isolationLevel=_isolationLevel;
@property (strong, nonatomic) CKDPLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) NSString *mmcsProtocolVersion; // @synthesize mmcsProtocolVersion=_mmcsProtocolVersion;
@property (nonatomic) int targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property (strong, nonatomic) NSString *userIDContainerID; // @synthesize userIDContainerID=_userIDContainerID;
@property (strong, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;

- (void).cxx_destruct;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (int)StringAsIsolationLevel:(id)arg1;
- (int)StringAsTargetDatabase:(id)arg1;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)isolationLevelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)targetDatabaseAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

