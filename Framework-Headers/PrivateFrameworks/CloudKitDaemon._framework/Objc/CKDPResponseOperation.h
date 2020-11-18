//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPArchiveRecordsResponse, CKDPAssetUploadTokenRetrieveResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPFetchArchivedRecordsResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPPostCommentResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveAncestorsResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeleteResponse, CKDPShareRetrieveResponse, CKDPShareSaveResponse, CKDPShareTokenDeleteResponse, CKDPShareTokenRetrieveResponse, CKDPShareTokenSaveResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperation : PBCodable <NSCopying>
{
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;
    CKDPDeleteCommentResponse *_deleteCommentResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;
    CKDPGetCommentResponse *_getCommentResponse;
    CKDPGetCommentsResponse *_getCommentsResponse;
    CKDPGetLikesResponse *_getLikesResponse;
    CKDPLikeResponse *_likeResponse;
    CKDPMescalCertificateResponse *_mescalCertificateResponse;
    CKDPMescalSessionInfoResponse *_mescalSessionInfoResponse;
    CKDPMescalSignatureResponse *_mescalSignatureResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    unsigned int _operationCost;
    CKDPPostCommentResponse *_postCommentResponse;
    CKDPPulseResponse *_pulseResponse;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;
    CKDPRecordRetrieveAncestorsResponse *_recordRetrieveAncestorsResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPOperation *_response;
    CKDPResponseOperationResult *_result;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareAcceptResponse *_shareAcceptResponse;
    CKDPShareDeleteResponse *_shareDeleteResponse;
    CKDPShareRetrieveResponse *_shareRetrieveResponse;
    CKDPShareSaveResponse *_shareSaveResponse;
    CKDPShareTokenDeleteResponse *_shareTokenDeleteResponse;
    CKDPShareTokenRetrieveResponse *_shareTokenRetrieveResponse;
    CKDPShareTokenSaveResponse *_shareTokenSaveResponse;
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUnlikeResponse *_unlikeResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property (strong, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property (strong, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property (strong, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property (strong, nonatomic) CKDPDeleteCommentResponse *deleteCommentResponse;
@property (strong, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property (strong, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property (strong, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property (strong, nonatomic) CKDPGetCommentResponse *getCommentResponse;
@property (strong, nonatomic) CKDPGetCommentsResponse *getCommentsResponse;
@property (strong, nonatomic) CKDPGetLikesResponse *getLikesResponse;
@property (readonly, nonatomic) BOOL hasArchiveRecordsResponse;
@property (readonly, nonatomic) BOOL hasAssetUploadTokenRetrieveResponse;
@property (readonly, nonatomic) BOOL hasBundlesForContainerResponse;
@property (readonly, nonatomic) BOOL hasDeleteCommentResponse;
@property (readonly, nonatomic) BOOL hasDeleteContainerResponse;
@property (readonly, nonatomic) BOOL hasFetchArchivedRecordsResponse;
@property (readonly, nonatomic) BOOL hasFunctionInvokeResponse;
@property (readonly, nonatomic) BOOL hasGetCommentResponse;
@property (readonly, nonatomic) BOOL hasGetCommentsResponse;
@property (readonly, nonatomic) BOOL hasGetLikesResponse;
@property (readonly, nonatomic) BOOL hasLikeResponse;
@property (readonly, nonatomic) BOOL hasMescalCertificateResponse;
@property (readonly, nonatomic) BOOL hasMescalSessionInfoResponse;
@property (readonly, nonatomic) BOOL hasMescalSignatureResponse;
@property (readonly, nonatomic) BOOL hasNotificationMarkReadResponse;
@property (readonly, nonatomic) BOOL hasNotificationSyncResponse;
@property (nonatomic) BOOL hasOperationCost;
@property (readonly, nonatomic) BOOL hasPostCommentResponse;
@property (readonly, nonatomic) BOOL hasPulseResponse;
@property (readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property (readonly, nonatomic) BOOL hasRecordDeleteResponse;
@property (readonly, nonatomic) BOOL hasRecordResolveTokenResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveAncestorsResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveChangesResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveVersionsResponse;
@property (readonly, nonatomic) BOOL hasRecordSaveResponse;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasResult;
@property (readonly, nonatomic) BOOL hasSetBadgeCountResponse;
@property (readonly, nonatomic) BOOL hasShareAcceptResponse;
@property (readonly, nonatomic) BOOL hasShareDeleteResponse;
@property (readonly, nonatomic) BOOL hasShareRetrieveResponse;
@property (readonly, nonatomic) BOOL hasShareSaveResponse;
@property (readonly, nonatomic) BOOL hasShareTokenDeleteResponse;
@property (readonly, nonatomic) BOOL hasShareTokenRetrieveResponse;
@property (readonly, nonatomic) BOOL hasShareTokenSaveResponse;
@property (readonly, nonatomic) BOOL hasShareVettingInitiateResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionCreateResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionDeleteResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionRetrieveResponse;
@property (readonly, nonatomic) BOOL hasTokenRegistrationResponse;
@property (readonly, nonatomic) BOOL hasTokenUnregistrationResponse;
@property (readonly, nonatomic) BOOL hasUnlikeResponse;
@property (readonly, nonatomic) BOOL hasUserAvailableQuotaResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsBatchLookupResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsResetResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsRetrieveResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsUpdateResponse;
@property (readonly, nonatomic) BOOL hasUserQueryResponse;
@property (readonly, nonatomic) BOOL hasUserRetrieveResponse;
@property (readonly, nonatomic) BOOL hasWebAuthTokenRetrieveResponse;
@property (readonly, nonatomic) BOOL hasZoneDeleteResponse;
@property (readonly, nonatomic) BOOL hasZoneRetrieveChangesResponse;
@property (readonly, nonatomic) BOOL hasZoneRetrieveResponse;
@property (readonly, nonatomic) BOOL hasZoneSaveResponse;
@property (strong, nonatomic) CKDPLikeResponse *likeResponse;
@property (strong, nonatomic) CKDPMescalCertificateResponse *mescalCertificateResponse;
@property (strong, nonatomic) CKDPMescalSessionInfoResponse *mescalSessionInfoResponse;
@property (strong, nonatomic) CKDPMescalSignatureResponse *mescalSignatureResponse;
@property (strong, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property (strong, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property (nonatomic) unsigned int operationCost; // @synthesize operationCost=_operationCost;
@property (strong, nonatomic) CKDPPostCommentResponse *postCommentResponse;
@property (strong, nonatomic) CKDPPulseResponse *pulseResponse;
@property (strong, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property (strong, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property (strong, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property (strong, nonatomic) CKDPRecordRetrieveAncestorsResponse *recordRetrieveAncestorsResponse;
@property (strong, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property (strong, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property (strong, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property (strong, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property (strong, nonatomic) CKDPOperation *response; // @synthesize response=_response;
@property (strong, nonatomic) CKDPResponseOperationResult *result; // @synthesize result=_result;
@property (strong, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property (strong, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property (strong, nonatomic) CKDPShareDeleteResponse *shareDeleteResponse;
@property (strong, nonatomic) CKDPShareRetrieveResponse *shareRetrieveResponse;
@property (strong, nonatomic) CKDPShareSaveResponse *shareSaveResponse;
@property (strong, nonatomic) CKDPShareTokenDeleteResponse *shareTokenDeleteResponse;
@property (strong, nonatomic) CKDPShareTokenRetrieveResponse *shareTokenRetrieveResponse;
@property (strong, nonatomic) CKDPShareTokenSaveResponse *shareTokenSaveResponse;
@property (strong, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property (strong, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property (strong, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property (strong, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property (strong, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property (strong, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property (strong, nonatomic) CKDPUnlikeResponse *unlikeResponse;
@property (strong, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property (strong, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property (strong, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property (strong, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property (strong, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property (strong, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property (strong, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property (strong, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property (strong, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property (strong, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property (strong, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property (strong, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

