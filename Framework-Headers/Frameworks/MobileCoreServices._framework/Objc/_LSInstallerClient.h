//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/LSInstallationServiceCallbackProtocol-Protocol.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _callbacksCompleteCondMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _callbacksCompleteCond;
    BOOL _uninstaller;
    BOOL _allCallbacksDeleviered;
    unsigned long long _operationType;
    NSString *_operationTypeString;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    NSString *_bundleID;
    NSURL *_bundleURL;
    NSDictionary *_options;
}

@property (nonatomic) BOOL allCallbacksDeleviered; // @synthesize allCallbacksDeleviered=_allCallbacksDeleviered;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property (readonly, nonatomic) NSString *operationTypeString; // @synthesize operationTypeString=_operationTypeString;
@property (strong, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUninstaller) BOOL uninstaller; // @synthesize uninstaller=_uninstaller;

+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)_waitForAllCallbackMessagesToExecute;
- (void)callbackDeliveryComplete;
- (void)dealloc;
- (id)init;
- (id)installTypeString;
- (void)updateCallbackWithData:(id)arg1;

@end

