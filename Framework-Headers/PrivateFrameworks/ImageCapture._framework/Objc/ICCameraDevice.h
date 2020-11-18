//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ImageCapture/ICDevice.h>

@class NSArray, NSNumber, NSString;

@interface ICCameraDevice : ICDevice
{
    void *_cameraProperties;
    BOOL _basicMediaModel;
    BOOL _isEnumeratingContent;
    NSString *_buildVersion;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    NSNumber *_devicePairedState;
    NSString *_productType;
    NSString *_productVersion;
    NSArray *_supportedSidecarFiles;
}

@property (getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;
@property BOOL allowsSyncingClock;
@property (getter=isApplePTPCapable) BOOL applePTPCapable;
@property BOOL basicMediaModel; // @synthesize basicMediaModel=_basicMediaModel;
@property (readonly) unsigned long long batteryLevel;
@property (readonly) BOOL batteryLevelAvailable;
@property BOOL beingEjected;
@property (readonly) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property unsigned long long contentCatalogPercentCompleted;
@property (readonly) NSArray *contents;
@property (readonly) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property (readonly) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property (readonly) NSString *deviceEnclosureColor; // @synthesize deviceEnclosureColor=_deviceEnclosureColor;
@property (readonly) NSNumber *devicePairedState; // @synthesize devicePairedState=_devicePairedState;
@property (getter=isEjectable) BOOL ejectable;
@property long long enumerationOrder;
@property unsigned long long estimatedNumberOfDownloadableItems;
@property BOOL iCloudPhotosEnabled;
@property (readonly) BOOL isEnumeratingContent; // @synthesize isEnumeratingContent=_isEnumeratingContent;
@property (getter=isLocked) BOOL locked;
@property (readonly) NSArray *mediaFiles;
@property unsigned long long mediaPresentation;
@property unsigned long long numberOfDownloadableItems;
@property (readonly) NSString *productType; // @synthesize productType=_productType;
@property (readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property (readonly) NSArray *supportedSidecarFiles; // @synthesize supportedSidecarFiles=_supportedSidecarFiles;
@property (readonly) double timeOffset;
@property (copy) NSString *volumePath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)addCameraFileToIndex:(id)arg1;
- (id)addCameraFiles:(id)arg1;
- (void)addCameraFolderToIndex:(id)arg1;
- (void)addFolder:(id)arg1;
- (BOOL)addMediaFile:(id)arg1;
- (BOOL)addMediaFiles:(id)arg1;
- (BOOL)applePTPCapable;
- (id)applePTPFiles;
- (id)applePTPObjectLimit;
- (void)aptpUpdateFilesWithCommand:(id)arg1 andData:(id)arg2;
- (void)blendMedia:(id [10])arg1 ofLength:(int)arg2 withMedia:(id [10])arg3 ofLength:(int)arg4;
- (id)cameraFileIndexesMatchingDateCriteria:(id)arg1;
- (id)cameraFileWithObjectID:(unsigned long long)arg1;
- (id)cameraFileWithUUID:(id)arg1;
- (id)cameraFolderWithObjectID:(unsigned long long)arg1;
- (void)cancelDownload;
- (void)dealloc;
- (void)decrementEstimatedNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
- (id)description;
- (id)deviceQSemaphore;
- (void)discardCameraFiles:(id)arg1;
- (void)dispatchAsyncForOperationType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (double)downloadCancelTimestamp;
- (id)enumerationQ;
- (id)filesOfType:(id)arg1;
- (id)generalQ;
- (void)grindMedia:(id [10])arg1 index:(int *)arg2 file:(id)arg3;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (unsigned int)increaseDeviceFailureCount;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)incrementNumberOfDownloadableItems;
- (id)indexedCameraFiles;
- (id)indexedCameraFolders;
- (id)init;
- (BOOL)legacyDevice;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1;
- (id)ownerMedia:(id)arg1 withMedia:(id)arg2;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)popMediaFiles:(id)arg1;
- (void)processAddedFiles:(id)arg1;
- (void)pushMediaFiles:(id)arg1;
- (id)relateGroupedMedia:(id)arg1;
- (id)relateLegacyMedia:(id)arg1;
- (id)relateMedia:(id)arg1;
- (void)removeCameraFileFromIndex:(id)arg1;
- (void)removeCameraFolderFromIndex:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)removeMediaFile:(id)arg1;
- (void)removeMediaFiles:(id)arg1;
- (void)requestCloseSession;
- (void)requestDeleteFiles:(id)arg1;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestEject;
- (void)requestOpenSession;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestSyncClock;
- (void)resetFailureCount;
- (void)setApplePTPObjectLimit:(id)arg1;
- (void)setAppleRelatedUUIDSupport:(unsigned long long)arg1;
- (void)signalCommandCompletion;
- (long long)stitchMedia:(id)arg1 withMedia:(id)arg2;
- (BOOL)supportsMediaFormatCatalog;
- (BOOL)updateMediaPresentation;
- (void)waitForCommandCompletion;

@end

