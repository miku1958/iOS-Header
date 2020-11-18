//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdServiceProtocol-Protocol.h>

@class NSString, NSURL, NSXPCConnection, PLAssetsdCPLResourceDownloader, PLAssetsdConnectionAuthorization, PLAssetsdInnerService, PLCacheMetricsCollectorServerShell, PLLibraryServicesManager, PLPhotoLibrary, PLPhotoLibraryBundle, PLPhotoLibraryBundleController;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol>
{
    PLAssetsdInnerService *_innerLibraryService;
    PLAssetsdInnerService *_innerLibraryInternalService;
    PLAssetsdInnerService *_innerSystemLibraryURLReadOnlyService;
    PLAssetsdInnerService *_innerLibraryManagementService;
    PLAssetsdInnerService *_innerPhotoKitService;
    PLAssetsdInnerService *_innerPhotoKitAddService;
    PLAssetsdInnerService *_innerResourceAvailabilityService;
    PLAssetsdInnerService *_innerResourceService;
    PLAssetsdInnerService *_innerResourceWriteOnlyService;
    PLAssetsdInnerService *_innerResourceInternalService;
    PLAssetsdInnerService *_innerCloudService;
    PLAssetsdInnerService *_innerCloudInternalService;
    PLAssetsdInnerService *_innerMigrationService;
    PLAssetsdInnerService *_innerSyncService;
    PLAssetsdInnerService *_innerNotificationService;
    PLAssetsdInnerService *_innerDemoService;
    PLAssetsdInnerService *_innerDiagnosticsService;
    PLAssetsdInnerService *_innerDebugService;
    PLAssetsdInnerService *_innerPrivacySupportService;
    BOOL _readyForDaemonJobs;
    NSXPCConnection *_connection;
    int _remotePID;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    NSURL *_libraryURL;
    PLCacheMetricsCollectorServerShell *_cacheMetricsShellObject;
}

@property (readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject; // @synthesize cacheMetricsShellObject=_cacheMetricsShellObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPhotosClient;
@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_photoLibrary;
- (BOOL)_prepareToRunDaemonJob:(id)arg1 error:(id *)arg2;
- (id)_waitForLibraryServicesForDaemonJob;
- (void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 clientOptions:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)clientDebugDescription;
- (void)getCloudInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getCloudServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDebugServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDemoServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getDiagnosticsServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getLibraryInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getLibraryManagementServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getLibraryServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getMigrationServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getNotificationServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotoKitAddServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotoKitServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getPrivacySupportServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceAvailabilityServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceInternalServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getResourceWriteOnlyServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getSyncServiceWithReply:(CDUnknownBlockType)arg1;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(CDUnknownBlockType)arg1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2;
- (void)invalidateConnectionWithReason:(id)arg1;
- (void)logStatus;
- (id)newCloudInternalService;
- (id)newCloudService;
- (id)newDebugService;
- (id)newDemoService;
- (id)newDiagnosticsService;
- (id)newLibraryInternalService;
- (id)newLibraryManagementService;
- (id)newLibraryService;
- (id)newMigrationService;
- (id)newNotificationService;
- (id)newPhotoKitAddService;
- (id)newPhotoKitService;
- (id)newPrivacySupportService;
- (id)newResourceAvailabilityService;
- (id)newResourceInternalService;
- (id)newResourceService;
- (id)newResourceWriteOnlyService;
- (id)newSyncService;
- (id)newSystemLibraryURLReadOnlyService;
- (id)permissionsForCloudInternalService;
- (id)permissionsForCloudService;
- (id)permissionsForDebugService;
- (id)permissionsForDemoService;
- (id)permissionsForDiagnosticsService;
- (id)permissionsForLibraryInternalService;
- (id)permissionsForLibraryManagementService;
- (id)permissionsForLibraryService;
- (id)permissionsForMigrationService;
- (id)permissionsForNotificationService;
- (id)permissionsForPhotoKitAddService;
- (id)permissionsForPhotoKitService;
- (id)permissionsForPrivacySupportService;
- (id)permissionsForResourceAvailabilityService;
- (id)permissionsForResourceInternalService;
- (id)permissionsForResourceService;
- (id)permissionsForResourceWriteOnlyService;
- (id)permissionsForSyncService;
- (id)permissionsForSystemLibraryURLReadOnlyService;
- (long long)requiredStateForCloudInternalService;
- (long long)requiredStateForCloudService;
- (long long)requiredStateForDebugService;
- (long long)requiredStateForDemoService;
- (long long)requiredStateForDiagnosticsService;
- (long long)requiredStateForLibraryInternalService;
- (long long)requiredStateForLibraryManagementService;
- (long long)requiredStateForLibraryService;
- (long long)requiredStateForMigrationService;
- (long long)requiredStateForNotificationService;
- (long long)requiredStateForPhotoKitAddService;
- (long long)requiredStateForPhotoKitService;
- (long long)requiredStateForPrivacySupportService;
- (long long)requiredStateForResourceAvailabilityService;
- (long long)requiredStateForResourceInternalService;
- (long long)requiredStateForResourceService;
- (long long)requiredStateForResourceWriteOnlyService;
- (long long)requiredStateForSyncService;
- (long long)requiredStateForSystemLibraryURLReadOnlyService;
- (id)resourceDownloader;
- (void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2;
- (void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)serviceContextWithSelector:(SEL)arg1;

@end
