//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;
@protocol CKCompleteParticipantVettingOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDCompleteParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _verifyProgressURLReconstructedBlock;
    CDUnknownBlockType _verifyProgressShareMetadataFetchedBlock;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
    struct _OpaquePCSShareProtection *_protectionInfo;
    NSString *_shortToken;
    CKShareMetadata *_shareMetadata;
}

@property (readonly, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property (strong, nonatomic) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (readonly, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property (readonly, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property (nonatomic) struct _OpaquePCSShareProtection *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property (readonly, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property (strong, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property (strong, nonatomic) NSString *shortToken; // @synthesize shortToken=_shortToken;
@property (nonatomic) unsigned long long state; // @dynamic state;
@property (copy, nonatomic) CDUnknownBlockType verifyProgressShareMetadataFetchedBlock; // @synthesize verifyProgressShareMetadataFetchedBlock=_verifyProgressShareMetadataFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType verifyProgressURLReconstructedBlock; // @synthesize verifyProgressURLReconstructedBlock=_verifyProgressURLReconstructedBlock;
@property (readonly, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property (readonly, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property (readonly, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_forceFetchShareMetadata;
- (void)_performAuthKitVerification;
- (void)_reconstructShareURL;
- (void)_reconstructShortToken;
- (void)_verifyOONParticipant;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)shortSharingTokenFromData:(id)arg1;
- (id)shortSharingTokenFromFullToken:(id)arg1;

@end

