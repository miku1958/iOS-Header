//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString, _MRAVOutputDeviceSourceInfoProtobuf;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _batteryLevel;
    int _deviceSubType;
    int _deviceType;
    NSString *_groupID;
    NSData *_macAddress;
    NSString *_modelID;
    NSData *_modelSpecificInfoData;
    NSString *_name;
    _MRAVOutputDeviceSourceInfoProtobuf *_sourceInfo;
    NSString *_uniqueIdentifier;
    BOOL _canAccessRemoteAssets;
    BOOL _isGroupLeader;
    BOOL _isGroupable;
    BOOL _isLocalDevice;
    BOOL _isRemoteControllable;
    BOOL _requiresAuthorization;
    BOOL _shouldForceRemoteControlabillity;
    BOOL _supportsExternalScreen;
    struct {
        unsigned int batteryLevel:1;
        unsigned int deviceSubType:1;
        unsigned int deviceType:1;
        unsigned int canAccessRemoteAssets:1;
        unsigned int isGroupLeader:1;
        unsigned int isGroupable:1;
        unsigned int isLocalDevice:1;
        unsigned int isRemoteControllable:1;
        unsigned int requiresAuthorization:1;
        unsigned int shouldForceRemoteControlabillity:1;
        unsigned int supportsExternalScreen:1;
    } _has;
}

@property (nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (nonatomic) BOOL canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property (nonatomic) int deviceSubType; // @synthesize deviceSubType=_deviceSubType;
@property (nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property (strong, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (nonatomic) BOOL hasBatteryLevel;
@property (nonatomic) BOOL hasCanAccessRemoteAssets;
@property (nonatomic) BOOL hasDeviceSubType;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (nonatomic) BOOL hasIsGroupLeader;
@property (nonatomic) BOOL hasIsGroupable;
@property (nonatomic) BOOL hasIsLocalDevice;
@property (nonatomic) BOOL hasIsRemoteControllable;
@property (readonly, nonatomic) BOOL hasMacAddress;
@property (readonly, nonatomic) BOOL hasModelID;
@property (readonly, nonatomic) BOOL hasModelSpecificInfoData;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasRequiresAuthorization;
@property (nonatomic) BOOL hasShouldForceRemoteControlabillity;
@property (readonly, nonatomic) BOOL hasSourceInfo;
@property (nonatomic) BOOL hasSupportsExternalScreen;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property (nonatomic) BOOL isGroupable; // @synthesize isGroupable=_isGroupable;
@property (nonatomic) BOOL isLocalDevice; // @synthesize isLocalDevice=_isLocalDevice;
@property (nonatomic) BOOL isRemoteControllable; // @synthesize isRemoteControllable=_isRemoteControllable;
@property (strong, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property (strong, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property (strong, nonatomic) NSData *modelSpecificInfoData; // @synthesize modelSpecificInfoData=_modelSpecificInfoData;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property (nonatomic) BOOL shouldForceRemoteControlabillity; // @synthesize shouldForceRemoteControlabillity=_shouldForceRemoteControlabillity;
@property (strong, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property (nonatomic) BOOL supportsExternalScreen; // @synthesize supportsExternalScreen=_supportsExternalScreen;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

