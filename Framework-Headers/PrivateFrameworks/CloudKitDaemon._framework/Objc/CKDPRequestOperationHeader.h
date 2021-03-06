//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPLocale, CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions, NSData, NSMutableArray, NSString;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying>
{
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    unsigned long long _operationGroupQuantity;
    NSMutableArray *_activeThrottlingLabels;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSerialNumber;
    NSString *_deviceSoftwareVersion;
    NSString *_deviceUDID;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    NSString *_operationGroupName;
    NSMutableArray *_serviceIdentityKeyIDs;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
    BOOL _deviceSoftwareIsAppleInternal;
    BOOL _entitlementsValidated;
    struct {
        unsigned int applicationConfigVersion:1;
        unsigned int deviceFlowControlBudget:1;
        unsigned int deviceFlowControlBudgetCap:1;
        unsigned int deviceProtocolVersion:1;
        unsigned int globalConfigVersion:1;
        unsigned int operationGroupQuantity:1;
        unsigned int applicationContainerEnvironment:1;
        unsigned int deviceFlowControlRegeneration:1;
        unsigned int isolationLevel:1;
        unsigned int targetDatabase:1;
        unsigned int deviceSoftwareIsAppleInternal:1;
        unsigned int entitlementsValidated:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *activeThrottlingLabels; // @synthesize activeThrottlingLabels=_activeThrottlingLabels;
@property (strong, nonatomic) NSString *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property (nonatomic) unsigned long long applicationConfigVersion; // @synthesize applicationConfigVersion=_applicationConfigVersion;
@property (strong, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
@property (nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property (strong, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property (strong, nonatomic) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // @synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions;
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
@property (strong, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property (nonatomic) BOOL deviceSoftwareIsAppleInternal; // @synthesize deviceSoftwareIsAppleInternal=_deviceSoftwareIsAppleInternal;
@property (strong, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property (strong, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property (nonatomic) BOOL entitlementsValidated; // @synthesize entitlementsValidated=_entitlementsValidated;
@property (nonatomic) unsigned long long globalConfigVersion; // @synthesize globalConfigVersion=_globalConfigVersion;
@property (readonly, nonatomic) BOOL hasApplicationBundle;
@property (nonatomic) BOOL hasApplicationConfigVersion;
@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (readonly, nonatomic) BOOL hasApplicationVersion;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
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
@property (readonly, nonatomic) BOOL hasDeviceSerialNumber;
@property (nonatomic) BOOL hasDeviceSoftwareIsAppleInternal;
@property (readonly, nonatomic) BOOL hasDeviceSoftwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceUDID;
@property (nonatomic) BOOL hasEntitlementsValidated;
@property (nonatomic) BOOL hasGlobalConfigVersion;
@property (nonatomic) BOOL hasIsolationLevel;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasMmcsProtocolVersion;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (nonatomic) BOOL hasTargetDatabase;
@property (readonly, nonatomic) BOOL hasUserIDContainerID;
@property (readonly, nonatomic) BOOL hasUserToken;
@property (nonatomic) int isolationLevel; // @synthesize isolationLevel=_isolationLevel;
@property (strong, nonatomic) CKDPLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) NSString *mmcsProtocolVersion; // @synthesize mmcsProtocolVersion=_mmcsProtocolVersion;
@property (strong, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property (nonatomic) unsigned long long operationGroupQuantity; // @synthesize operationGroupQuantity=_operationGroupQuantity;
@property (strong, nonatomic) NSMutableArray *serviceIdentityKeyIDs; // @synthesize serviceIdentityKeyIDs=_serviceIdentityKeyIDs;
@property (nonatomic) int targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property (strong, nonatomic) NSString *userIDContainerID; // @synthesize userIDContainerID=_userIDContainerID;
@property (strong, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;

+ (Class)activeThrottlingLabelType;
+ (Class)serviceIdentityKeyIDsType;
- (void).cxx_destruct;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (int)StringAsIsolationLevel:(id)arg1;
- (int)StringAsTargetDatabase:(id)arg1;
- (id)_applicationContainerEnvironmentCKLogValue;
- (id)_isolationLevelCKLogValue;
- (id)_targetDatabaseCKLogValue;
- (id)activeThrottlingLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeThrottlingLabelsCount;
- (void)addActiveThrottlingLabel:(id)arg1;
- (void)addServiceIdentityKeyIDs:(id)arg1;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (void)clearActiveThrottlingLabels;
- (void)clearServiceIdentityKeyIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)isolationLevelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceIdentityKeyIDsCount;
- (id)targetDatabaseAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

