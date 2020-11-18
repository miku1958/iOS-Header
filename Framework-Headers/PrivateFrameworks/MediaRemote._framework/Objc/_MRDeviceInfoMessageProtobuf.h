//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _protocolVersion;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_name;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    BOOL _allowsPairing;
    BOOL _connected;
    BOOL _isAirplayActive;
    BOOL _isGroupLeader;
    BOOL _isProxyGroupPlayer;
    BOOL _supportsACL;
    BOOL _supportsExtendedMotion;
    BOOL _supportsSharedQueue;
    BOOL _supportsSystemPairing;
    BOOL _tightlySyncedGroup;
    struct {
        unsigned int protocolVersion:1;
        unsigned int deviceClass:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int logicalDeviceCount:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int isAirplayActive:1;
        unsigned int isGroupLeader:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
        unsigned int tightlySyncedGroup:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *airplayReceivers; // @synthesize airplayReceivers=_airplayReceivers;
@property (nonatomic) BOOL allowsPairing; // @synthesize allowsPairing=_allowsPairing;
@property (strong, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (strong, nonatomic) NSString *applicationBundleVersion; // @synthesize applicationBundleVersion=_applicationBundleVersion;
@property (strong, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property (strong, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property (strong, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (strong, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property (strong, nonatomic) NSMutableArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property (nonatomic) BOOL hasAllowsPairing;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationBundleVersion;
@property (readonly, nonatomic) BOOL hasBluetoothAddress;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasDeviceClass;
@property (readonly, nonatomic) BOOL hasDeviceUID;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasGroupUID;
@property (nonatomic) BOOL hasIsAirplayActive;
@property (nonatomic) BOOL hasIsGroupLeader;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL hasLastSupportedMessageType;
@property (readonly, nonatomic) BOOL hasLinkAgent;
@property (readonly, nonatomic) BOOL hasLocalizedModelName;
@property (nonatomic) BOOL hasLogicalDeviceCount;
@property (readonly, nonatomic) BOOL hasManagedConfigDeviceID;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasProtocolVersion;
@property (readonly, nonatomic) BOOL hasSenderDefaultGroupUID;
@property (nonatomic) BOOL hasSharedQueueVersion;
@property (nonatomic) BOOL hasSupportsACL;
@property (nonatomic) BOOL hasSupportsExtendedMotion;
@property (nonatomic) BOOL hasSupportsSharedQueue;
@property (nonatomic) BOOL hasSupportsSystemPairing;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (readonly, nonatomic) BOOL hasSystemMediaApplication;
@property (readonly, nonatomic) BOOL hasSystemPodcastApplication;
@property (readonly, nonatomic) BOOL hasTightSyncUID;
@property (nonatomic) BOOL hasTightlySyncedGroup;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL isAirplayActive; // @synthesize isAirplayActive=_isAirplayActive;
@property (nonatomic) BOOL isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property (nonatomic) BOOL isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property (nonatomic) unsigned int lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
@property (strong, nonatomic) NSString *linkAgent; // @synthesize linkAgent=_linkAgent;
@property (strong, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property (nonatomic) unsigned int logicalDeviceCount; // @synthesize logicalDeviceCount=_logicalDeviceCount;
@property (strong, nonatomic) NSString *managedConfigDeviceID; // @synthesize managedConfigDeviceID=_managedConfigDeviceID;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (strong, nonatomic) NSString *senderDefaultGroupUID; // @synthesize senderDefaultGroupUID=_senderDefaultGroupUID;
@property (nonatomic) unsigned int sharedQueueVersion; // @synthesize sharedQueueVersion=_sharedQueueVersion;
@property (nonatomic) BOOL supportsACL; // @synthesize supportsACL=_supportsACL;
@property (nonatomic) BOOL supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property (nonatomic) BOOL supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property (nonatomic) BOOL supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property (strong, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property (strong, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property (strong, nonatomic) NSString *systemPodcastApplication; // @synthesize systemPodcastApplication=_systemPodcastApplication;
@property (strong, nonatomic) NSString *tightSyncUID; // @synthesize tightSyncUID=_tightSyncUID;
@property (nonatomic) BOOL tightlySyncedGroup; // @synthesize tightlySyncedGroup=_tightlySyncedGroup;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (Class)airplayReceiversType;
+ (Class)groupedDevicesType;
- (void).cxx_destruct;
- (int)StringAsDeviceClass:(id)arg1;
- (void)addAirplayReceivers:(id)arg1;
- (void)addGroupedDevices:(id)arg1;
- (id)airplayReceiversAtIndex:(unsigned long long)arg1;
- (unsigned long long)airplayReceiversCount;
- (void)clearAirplayReceivers;
- (void)clearGroupedDevices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)deviceClassAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (id)groupedDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupedDevicesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
