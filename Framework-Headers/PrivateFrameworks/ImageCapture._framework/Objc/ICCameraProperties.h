//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICCameraProperties : NSObject
{
    NSString *_volumePath;
    BOOL _ejectable;
    BOOL _beingEjected;
    BOOL _locked;
    BOOL _allowsSyncingClock;
    unsigned long long _contentCatalogPercentCompleted;
    BOOL _batteryLevelAvailable;
    unsigned long long _batteryLevel;
    NSMutableArray *_contents;
    NSMutableArray *_mediaFiles;
    NSMutableArray *_toBeNotifiedAddedItems;
    struct os_unfair_lock_s _contentsLock;
    struct os_unfair_lock_s _mediaFilesLock;
    double _timeOffset;
    unsigned long long _estimatedNumberOfDownloadableItems;
    unsigned long long _numberOfDownloadableItems;
    BOOL _contentReceived;
    double _downloadCancelTimestamp;
    NSMutableArray *_originalMediaFiles;
    NSMutableArray *_convertedMediaFiles;
    NSMutableArray *_universalMediaFiles;
    NSMutableIndexSet *_enumeratedObjectIndexes;
    NSMutableOrderedSet *_indexedCameraFiles;
    NSMutableOrderedSet *_indexedCameraFolders;
    BOOL _accessRestrictedAppleDevice;
    BOOL _iCloudPhotosEnabled;
    BOOL _applePTPCapable;
    NSMutableArray *_applePTPFiles;
    NSNumber *_applePTPObjectLimit;
    long long _appleRelatedUUIDSupport;
    long long _enumerationOrder;
    unsigned int _deviceFailureCount;
    NSObject<OS_dispatch_queue> *_deviceNotificationQueue;
    NSObject<OS_dispatch_queue> *_deviceCommandQueue;
    unsigned long long _mediaPresentation;
    NSMutableOrderedSet *_indexedCameraFileUUIDs;
    NSMutableOrderedSet *_indexedCameraFileDates;
}

@property BOOL accessRestrictedAppleDevice; // @synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice;
@property BOOL allowsSyncingClock; // @synthesize allowsSyncingClock=_allowsSyncingClock;
@property (nonatomic) BOOL applePTPCapable; // @synthesize applePTPCapable=_applePTPCapable;
@property (strong) NSMutableArray *applePTPFiles; // @synthesize applePTPFiles=_applePTPFiles;
@property (strong) NSNumber *applePTPObjectLimit; // @synthesize applePTPObjectLimit=_applePTPObjectLimit;
@property long long appleRelatedUUIDSupport; // @synthesize appleRelatedUUIDSupport=_appleRelatedUUIDSupport;
@property unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property BOOL batteryLevelAvailable; // @synthesize batteryLevelAvailable=_batteryLevelAvailable;
@property BOOL beingEjected; // @synthesize beingEjected=_beingEjected;
@property unsigned long long contentCatalogPercentCompleted; // @synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted;
@property BOOL contentReceived; // @synthesize contentReceived=_contentReceived;
@property (strong) NSMutableArray *contents; // @synthesize contents=_contents;
@property struct os_unfair_lock_s contentsLock; // @synthesize contentsLock=_contentsLock;
@property (strong) NSMutableArray *convertedMediaFiles; // @synthesize convertedMediaFiles=_convertedMediaFiles;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *deviceCommandQueue; // @synthesize deviceCommandQueue=_deviceCommandQueue;
@property unsigned int deviceFailureCount; // @synthesize deviceFailureCount=_deviceFailureCount;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *deviceNotificationQueue; // @synthesize deviceNotificationQueue=_deviceNotificationQueue;
@property double downloadCancelTimestamp; // @synthesize downloadCancelTimestamp=_downloadCancelTimestamp;
@property BOOL ejectable; // @synthesize ejectable=_ejectable;
@property (strong) NSMutableIndexSet *enumeratedObjectIndexes; // @synthesize enumeratedObjectIndexes=_enumeratedObjectIndexes;
@property long long enumerationOrder; // @synthesize enumerationOrder=_enumerationOrder;
@property unsigned long long estimatedNumberOfDownloadableItems; // @synthesize estimatedNumberOfDownloadableItems=_estimatedNumberOfDownloadableItems;
@property BOOL iCloudPhotosEnabled; // @synthesize iCloudPhotosEnabled=_iCloudPhotosEnabled;
@property (strong) NSMutableOrderedSet *indexedCameraFileDates; // @synthesize indexedCameraFileDates=_indexedCameraFileDates;
@property (strong) NSMutableOrderedSet *indexedCameraFileUUIDs; // @synthesize indexedCameraFileUUIDs=_indexedCameraFileUUIDs;
@property (strong) NSMutableOrderedSet *indexedCameraFiles; // @synthesize indexedCameraFiles=_indexedCameraFiles;
@property (strong) NSMutableOrderedSet *indexedCameraFolders; // @synthesize indexedCameraFolders=_indexedCameraFolders;
@property BOOL locked; // @synthesize locked=_locked;
@property (strong) NSMutableArray *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
@property struct os_unfair_lock_s mediaFilesLock; // @synthesize mediaFilesLock=_mediaFilesLock;
@property unsigned long long mediaPresentation; // @synthesize mediaPresentation=_mediaPresentation;
@property unsigned long long numberOfDownloadableItems; // @synthesize numberOfDownloadableItems=_numberOfDownloadableItems;
@property (strong) NSMutableArray *originalMediaFiles; // @synthesize originalMediaFiles=_originalMediaFiles;
@property double timeOffset; // @synthesize timeOffset=_timeOffset;
@property (strong) NSMutableArray *toBeNotifiedAddedItems; // @synthesize toBeNotifiedAddedItems=_toBeNotifiedAddedItems;
@property (strong) NSMutableArray *universalMediaFiles; // @synthesize universalMediaFiles=_universalMediaFiles;
@property (copy) NSString *volumePath; // @synthesize volumePath=_volumePath;

- (void)dealloc;
- (unsigned int)incrementDeviceFailureCount;
- (id)init;
- (void)lockContents;
- (void)lockMediaFiles;
- (void)resetFailureCount;
- (void)unlockContents;
- (void)unlockMediaFiles;

@end

