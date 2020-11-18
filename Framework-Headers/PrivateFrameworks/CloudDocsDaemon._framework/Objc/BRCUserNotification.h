//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCUserNotifier-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCUserNotification : NSObject <BRCUserNotifier>
{
    struct __CFUserNotification *_cfUserNotification;
    struct __CFRunLoopSource *_source;
    NSObject<OS_dispatch_source> *_displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary *_dialogInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(CDUnknownBlockType)arg4;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)_hideCurrentDialog;
- (id)_localizationKey:(id)arg1 forOSAndTypeOfShare:(id)arg2;
- (id)_localizationKey:(id)arg1 forTypeOfShare:(id)arg2;
- (id)_localizationKeyForOS:(id)arg1;
- (CDUnknownBlockType)_logWrapUserReplyBlock:(CDUnknownBlockType)arg1;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)close;
- (void)dealloc;
- (id)init;
- (void)moveToFront;
- (void)showErrorDeviceOfflineForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorParticipantLimitReachedForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorReasonUnknownForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorServerNotReachableForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end

