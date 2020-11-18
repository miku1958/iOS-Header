//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDDeviceUISupport-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSSet, NSString, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>
{
    NSString *_address;
    NSString *_build;
    NSString *_color;
    NSString *_deviceClass;
    NSString *_enclosureColor;
    NSString *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_productType;
    NSString *_platform;
    NSSet *_capabilities;
    long long _status;
    long long _transport;
    long long _remoteTransport;
    SFDevice *_sfDevice;
    NSString *__hashingKey;
}

@property (strong, nonatomic) NSString *_hashingKey; // @synthesize _hashingKey=__hashingKey;
@property (strong) NSString *address; // @synthesize address=_address;
@property (strong) NSString *build; // @synthesize build=_build;
@property (strong) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property (strong) NSString *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property (strong) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property (readonly) unsigned long long hash;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) NSString *model; // @synthesize model=_model;
@property (strong) NSString *name; // @synthesize name=_name;
@property (strong) NSString *platform; // @synthesize platform=_platform;
@property (strong) NSString *productType; // @synthesize productType=_productType;
@property long long remoteTransport; // @synthesize remoteTransport=_remoteTransport;
@property (strong) SFDevice *sfDevice; // @synthesize sfDevice=_sfDevice;
@property long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property long long transport; // @synthesize transport=_transport;

+ (id)_currentDeviceId;
+ (id)archivedClasses;
+ (id)currentDevice;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2;
+ (id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3;
+ (id)deviceWithDictionary:(id)arg1;
+ (id)idsDeviceWithDevice:(id)arg1 address:(id)arg2;
+ (id)modelForProductType:(id)arg1;
+ (id)nilSafeDevice;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(CDUnknownBlockType)arg2;
- (BOOL)hasCapabilities:(id)arg1;
- (id)hashingKey;
- (id)hashingKeyForTempDevice;
- (id)imageData;
- (id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6;
- (id)imageURLForScale:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentDevice;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (BOOL)isLikeDevice:(id)arg1;
- (BOOL)isMoreCompleteThan:(id)arg1;
- (BOOL)isTemporaryDevice;
- (id)publicLogDescription;
- (id)serialize;
- (id)shortDescription;

@end

