//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUBonjourDevice, IDSDevice, NSArray, NSDictionary, NSString, SFDevice;

@interface RPEndpoint : NSObject <NSSecureCoding>
{
    NSString *_accountID;
    SFDevice *_bleDevice;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _hotspotInfo;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    int _linkType;
    NSString *_mediaRemoteIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_model;
    NSString *_name;
    NSArray *_serviceTypes;
    unsigned long long _statusFlags;
    NSString *_sourceVersion;
    BOOL _present;
    int _proximity;
    NSArray *_homeKitUserIdentifiers;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    IDSDevice *_idsDevice;
}

@property (copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (strong, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property (strong, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property (copy, nonatomic) NSArray *homeKitUserIdentifiers; // @synthesize homeKitUserIdentifiers=_homeKitUserIdentifiers;
@property (readonly, nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) IDSDevice *idsDevice; // @synthesize idsDevice=_idsDevice;
@property (copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property (nonatomic) int linkType; // @synthesize linkType=_linkType;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier; // @synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier;
@property (copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL present; // @synthesize present=_present;
@property (readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property (readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (copy, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property (copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property (nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;

+ (id)nullEndpoint;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)removeBonjourDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (BOOL)removeSFDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

@end

