//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFPeerInfoMutating-Protocol.h>

@class AFPeerInfo, NSString;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating>
{
    AFPeerInfo *_baseModel;
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    BOOL _isCommunalDevice;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsDeviceOwnedByCurrentUser:1;
        unsigned int hasIdsIdentifier:1;
        unsigned int hasIdsDeviceUniqueIdentifier:1;
        unsigned int hasRapportEffectiveIdentifier:1;
        unsigned int hasMediaSystemIdentifier:1;
        unsigned int hasMediaRouteIdentifier:1;
        unsigned int hasIsCommunalDevice:1;
        unsigned int hasRoomName:1;
        unsigned int hasName:1;
        unsigned int hasProductType:1;
        unsigned int hasBuildVersion:1;
        unsigned int hasUserInterfaceIdiom:1;
        unsigned int hasAceVersion:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAceVersion:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setIdsDeviceUniqueIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setIsCommunalDevice:(BOOL)arg1;
- (void)setIsDeviceOwnedByCurrentUser:(BOOL)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRapportEffectiveIdentifier:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setUserInterfaceIdiom:(id)arg1;

@end

