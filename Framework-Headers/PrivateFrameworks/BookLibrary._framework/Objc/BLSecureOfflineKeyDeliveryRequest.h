//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

#import <BookLibrary/AVContentKeySessionDelegate-Protocol.h>

@class AVContentKeySession, ICStoreRequestContext, NSData, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate>
{
    AVContentKeySession *_keySession;
    NSObject<OS_dispatch_queue> *_keySessionQueue;
    ICStoreRequestContext *_requestContext;
    NSData *_persistentKeyData;
    NSData *_certificateData;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSString *_identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property (copy, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSPCData;
- (id)_deviceGUID;
- (void)_fetchCKCDataUsingSPC:(id)arg1 forKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)execute;
- (id)init;
- (id)initWithRequestContext:(id)arg1;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;

@end
