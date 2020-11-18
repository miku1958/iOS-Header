//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject
{
    BOOL _alreadyCapturedErrorWithAutoBugCapture;
    BOOL _allowsWritingToDisk;
    BOOL _deviceLowOnDiskSpace;
    BOOL _isUpdatingAttachmentFileSizes;
}

@property (nonatomic) BOOL allowsWritingToDisk; // @synthesize allowsWritingToDisk=_allowsWritingToDisk;
@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture; // @synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace; // @synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace;
@property BOOL isUpdatingAttachmentFileSizes; // @synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;
- (void)_cacheDeleteSetUp;
- (id)_ckUtilitiesSharedInstance;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray *)arg1;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(BOOL)arg2;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)init;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (void)registerWithCacheDelete;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(BOOL)arg2;
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;

@end

