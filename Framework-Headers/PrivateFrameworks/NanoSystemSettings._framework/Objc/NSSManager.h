//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NSSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSXPCConnection *_xpcConnection;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (void)displayAirplaneModeMirroringUserEducationAlert;
+ (void)displayAlertFailedRemoteAirplaneMode;
+ (void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3;
+ (void)initialize;
- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)enableAirplaneMode:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAboutInfo:(CDUnknownBlockType)arg1;
- (void)getAccountsInfo:(CDUnknownBlockType)arg1;
- (void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLegalDocuments:(CDUnknownBlockType)arg1;
- (void)getLocalesInfo:(CDUnknownBlockType)arg1;
- (void)getProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getProfilesInfo:(CDUnknownBlockType)arg1;
- (void)getUsage:(CDUnknownBlockType)arg1;
- (void)getiCloudInfo:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)installProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)obliterateGizmo:(CDUnknownBlockType)arg1;
- (void)obliterateGizmoPreservingeSIM:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)protocol;
- (void)purgeUsageBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDeviceName:(id)arg1;
- (void)unsafe_invalidate;

@end

