//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMFileTransfer : NSObject
{
    BOOL _isIncoming;
    BOOL _isDirectory;
    BOOL _shouldAttemptToResume;
    BOOL _wasRegisteredAsStandalone;
    BOOL _shouldForceArchive;
    BOOL _needsWrapper;
    BOOL _isAuxImage;
    BOOL _isAuxVideo;
    BOOL _isSticker;
    BOOL _hideAttachment;
    BOOL _isLocation;
    BOOL _isContact;
    BOOL _appMessageFallbackImage;
    unsigned short _hfsFlags;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    double _lastUpdatedInterval;
    double _lastAveragedInterval;
    unsigned long long _lastAveragedBytes;
    NSString *_guid;
    NSString *_messageGUID;
    NSDate *_startDate;
    NSDate *_createdDate;
    long long _transferState;
    NSString *_filename;
    NSURL *_transferDataURL;
    NSString *_utiType;
    NSString *_mimeType;
    NSString *_accountID;
    NSString *_otherPerson;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    unsigned long long _averageTransferRate;
    long long _error;
    NSString *_errorDescription;
    NSDictionary *_localUserInfo;
    NSString *_transferredFilename;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_AuxTranscoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSArray *_attachmentSendContexts;
    long long _cloudKitSyncState;
    NSData *_cloudKitServerChangeTokenBlob;
    NSString *_cloudKitRecordID;
    long long _srCloudKitSyncState;
    NSData *_srCloudKitServerChangeTokenBlob;
    NSString *_srCloudKitRecordID;
    NSString *_sandboxToken;
    NSURL *_localURL;
    NSURL *_temporaryHighQualityLocalURL;
    NSDictionary *_attributionInfo;
    NSString *_originalGUID;
}

@property (strong, nonatomic) NSDictionary *AuxTranscoderUserInfo; // @synthesize AuxTranscoderUserInfo=_AuxTranscoderUserInfo;
@property (readonly, nonatomic) unsigned long long _lastAveragedBytes; // @synthesize _lastAveragedBytes;
@property (nonatomic, setter=_setLastAveragedInterval:) double _lastAveragedInterval; // @synthesize _lastAveragedInterval;
@property (nonatomic, setter=_setLastUpdatedInterval:) double _lastUpdatedInterval; // @synthesize _lastUpdatedInterval;
@property (nonatomic, setter=_setNeedsWrapper:) BOOL _needsWrapper; // @synthesize _needsWrapper;
@property (strong, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (nonatomic) BOOL appMessageFallbackImage; // @synthesize appMessageFallbackImage=_appMessageFallbackImage;
@property (strong, nonatomic) NSArray *attachmentSendContexts; // @synthesize attachmentSendContexts=_attachmentSendContexts;
@property (strong, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property (nonatomic) unsigned long long averageTransferRate; // @synthesize averageTransferRate=_averageTransferRate;
@property (readonly, nonatomic) BOOL canBeAccepted;
@property (readonly, nonatomic) BOOL canMarkPurgable;
@property (strong, nonatomic) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
@property (strong, nonatomic) NSData *cloudKitServerChangeTokenBlob; // @synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob;
@property (nonatomic) long long cloudKitSyncState; // @synthesize cloudKitSyncState=_cloudKitSyncState;
@property (strong, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property (nonatomic) unsigned long long currentBytes; // @synthesize currentBytes=_currentBytes;
@property (readonly, strong, nonatomic) NSString *displayName;
@property (nonatomic, setter=_setError:) long long error; // @synthesize error=_error;
@property (strong, nonatomic, setter=_setErrorDescription:) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (readonly, nonatomic) BOOL existsAtLocalPath;
@property (strong, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (nonatomic) unsigned int hfsCreator; // @synthesize hfsCreator=_hfsCreator;
@property (nonatomic) unsigned short hfsFlags; // @synthesize hfsFlags=_hfsFlags;
@property (nonatomic) unsigned int hfsType; // @synthesize hfsType=_hfsType;
@property (nonatomic) BOOL hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property (readonly, nonatomic) BOOL isAnimojiV2;
@property (readonly, nonatomic) BOOL isAutoloopVideo;
@property (nonatomic) BOOL isAuxImage; // @synthesize isAuxImage=_isAuxImage;
@property (nonatomic) BOOL isAuxVideo; // @synthesize isAuxVideo=_isAuxVideo;
@property (nonatomic) BOOL isContact; // @synthesize isContact=_isContact;
@property (nonatomic) BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isHEVCWithAlphaVideo;
@property (nonatomic) BOOL isIncoming; // @synthesize isIncoming=_isIncoming;
@property (nonatomic) BOOL isLocation; // @synthesize isLocation=_isLocation;
@property (readonly, nonatomic) BOOL isOpusAudioMessage;
@property (readonly, nonatomic) BOOL isRecipeBasedSticker;
@property (nonatomic) BOOL isSticker; // @synthesize isSticker=_isSticker;
@property (strong, nonatomic, setter=_setLocalPath:) NSString *localPath;
@property (strong, nonatomic, setter=_setLocalURL:) NSURL *localURL; // @synthesize localURL=_localURL;
@property (strong, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property (readonly, strong, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property (strong, nonatomic) NSString *originalGUID; // @synthesize originalGUID=_originalGUID;
@property (strong, nonatomic) NSString *otherPerson; // @synthesize otherPerson=_otherPerson;
@property (readonly, strong, nonatomic) NSString *permanentHighQualityLocalPath;
@property (nonatomic) NSDate *refreshDate;
@property (copy, nonatomic) NSString *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property (nonatomic) BOOL shouldAttemptToResume; // @synthesize shouldAttemptToResume=_shouldAttemptToResume;
@property (nonatomic, setter=_setForceArchive:) BOOL shouldForceArchive; // @synthesize shouldForceArchive=_shouldForceArchive;
@property (strong, nonatomic) NSString *srCloudKitRecordID; // @synthesize srCloudKitRecordID=_srCloudKitRecordID;
@property (strong, nonatomic) NSData *srCloudKitServerChangeTokenBlob; // @synthesize srCloudKitServerChangeTokenBlob=_srCloudKitServerChangeTokenBlob;
@property (nonatomic) long long srCloudKitSyncState; // @synthesize srCloudKitSyncState=_srCloudKitSyncState;
@property (strong, nonatomic, setter=_setStartDate:) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSDictionary *stickerUserInfo; // @synthesize stickerUserInfo=_stickerUserInfo;
@property (readonly, strong, nonatomic) NSString *temporaryHighQualityLocalPath;
@property (strong, nonatomic) NSURL *temporaryHighQualityLocalURL; // @synthesize temporaryHighQualityLocalURL=_temporaryHighQualityLocalURL;
@property (nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property (strong, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property (strong, nonatomic, setter=_setTransferDataURL:) NSURL *transferDataURL; // @synthesize transferDataURL=_transferDataURL;
@property (nonatomic, setter=_setTransferState:) long long transferState; // @synthesize transferState=_transferState;
@property (strong, nonatomic) NSString *transferredFilename; // @synthesize transferredFilename=_transferredFilename;
@property (strong, nonatomic) NSString *type; // @synthesize type=_utiType;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_localUserInfo;
@property (readonly, nonatomic) BOOL wantsAlphaRemoved;
@property (nonatomic, setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone; // @synthesize wasRegisteredAsStandalone=_wasRegisteredAsStandalone;

+ (id)AuxGUIDFromFileTransferGUID:(id)arg1;
+ (BOOL)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)guidByStrippingAuxPrefix:(id)arg1;
+ (id)guidForFileTransferDictionary:(id)arg1;
+ (id)whitelistedKeys;
- (id)_auxVideoPathIfItExists;
- (void)_calculateTypeInformation;
- (void)_clear;
- (id)_dictionaryRepresentation;
- (id)_dictionaryToSend;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned int)arg8 hfsCreator:(unsigned int)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11;
- (BOOL)_isCloudKitEnabled;
- (BOOL)_missingAttachmentCanBeDownloadedFromCloudKit;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setDirectory:(BOOL)arg1 hfsType:(unsigned int)arg2 hfsCreator:(unsigned int)arg3 hfsFlags:(unsigned short)arg4;
- (void)_swizzleTransferStateIfMissingAttachmentCanBeDownloadedFromCloudKit;
- (BOOL)_updateWithDictionaryRepresentation:(id)arg1;
- (void)_updateWithDictionaryRepresentationForWhitelistedKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setMimeType:(id)arg1;

@end

