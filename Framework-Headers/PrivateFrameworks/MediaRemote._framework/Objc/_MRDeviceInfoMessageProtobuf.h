//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _protocolVersion;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    unsigned int _lastSupportedMessageType;
    NSString *_localizedModelName;
    NSString *_name;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_uniqueIdentifier;
    BOOL _allowsPairing;
    BOOL _connected;
    BOOL _supportsACL;
    BOOL _supportsExtendedMotion;
    BOOL _supportsSharedQueue;
    BOOL _supportsSystemPairing;
    struct {
        unsigned int protocolVersion:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
    } _has;
}

@property (nonatomic) BOOL allowsPairing; // @synthesize allowsPairing=_allowsPairing;
@property (strong, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (strong, nonatomic) NSString *applicationBundleVersion; // @synthesize applicationBundleVersion=_applicationBundleVersion;
@property (strong, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic) BOOL hasAllowsPairing;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationBundleVersion;
@property (readonly, nonatomic) BOOL hasBluetoothAddress;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasLastSupportedMessageType;
@property (readonly, nonatomic) BOOL hasLocalizedModelName;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasSharedQueueVersion;
@property (nonatomic) BOOL hasSupportsACL;
@property (nonatomic) BOOL hasSupportsExtendedMotion;
@property (nonatomic) BOOL hasSupportsSharedQueue;
@property (nonatomic) BOOL hasSupportsSystemPairing;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (readonly, nonatomic) BOOL hasSystemMediaApplication;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) unsigned int lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
@property (strong, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (nonatomic) unsigned int sharedQueueVersion; // @synthesize sharedQueueVersion=_sharedQueueVersion;
@property (nonatomic) BOOL supportsACL; // @synthesize supportsACL=_supportsACL;
@property (nonatomic) BOOL supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property (nonatomic) BOOL supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property (nonatomic) BOOL supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property (strong, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property (strong, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
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

