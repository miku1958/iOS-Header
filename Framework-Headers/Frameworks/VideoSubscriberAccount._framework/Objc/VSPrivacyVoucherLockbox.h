//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSArray, NSString, NSUndoManager, VSRemoteNotifier;

__attribute__((visibility("hidden")))
@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate>
{
    NSUndoManager *_undoManager;
    VSRemoteNotifier *_remoteNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property (readonly, copy, nonatomic) NSArray *unredeemedVouchers;

- (void).cxx_destruct;
- (id)_voucherArchiveURL;
- (id)init;
- (void)issueVouchers:(id)arg1;
- (void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2;
- (void)redeemVoucher:(id)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAllVouchers;
- (void)setUnredeemedVouchers:(id)arg1;

@end

