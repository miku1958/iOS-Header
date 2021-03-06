//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    BOOL _isDeviceOwnedByCurrentUser;
    BOOL _isCommunalDevice;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
}

@property (readonly, copy, nonatomic) NSString *aceVersion; // @synthesize aceVersion=_aceVersion;
@property (readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *idsDeviceUniqueIdentifier; // @synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (readonly, nonatomic) BOOL isCommunalDevice; // @synthesize isCommunalDevice=_isCommunalDevice;
@property (readonly, nonatomic) BOOL isDeviceOwnedByCurrentUser; // @synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (readonly, copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property (readonly, copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg1 idsIdentifier:(id)arg2 idsDeviceUniqueIdentifier:(id)arg3 rapportEffectiveIdentifier:(id)arg4 mediaSystemIdentifier:(id)arg5 mediaRouteIdentifier:(id)arg6 isCommunalDevice:(BOOL)arg7 roomName:(id)arg8 name:(id)arg9 productType:(id)arg10 buildVersion:(id)arg11 userInterfaceIdiom:(id)arg12 aceVersion:(id)arg13;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

