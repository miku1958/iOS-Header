//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HSConnection, NSNetService, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface HSHomeSharingLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    BOOL _requiresPassword;
    BOOL _available;
    BOOL __hasPendingUpdateRequest;
    unsigned int _version;
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSString *_homeSharingGroupID;
    NSURL *_baseURL;
    NSNetService *_service;
    long long _connectionType;
    HSConnection *_connection;
}

@property (nonatomic) BOOL _hasPendingUpdateRequest; // @synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest;
@property (readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property (readonly, nonatomic) unsigned int basePlaylistContainerID;
@property (readonly, strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (strong, nonatomic) HSConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property (readonly, nonatomic) unsigned int databaseID;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property (strong, nonatomic) NSNetService *service; // @synthesize service=_service;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) unsigned int version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)urlForRequest:(id)arg1;

@end

