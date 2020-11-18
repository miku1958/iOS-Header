//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSITunesStore.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIJSITunesStore-Protocol.h>

@class NSString, SKUIClientContext, SKUIJSAppleAccount, SKUIJSRestrictions;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore>
{
    SKUIClientContext *_clientContext;
}

@property (nonatomic) long long applicationIconBadgeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *hostApp;
@property (readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
@property (readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)approveInPerson:(id)arg1:(id)arg2;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (void)buy:(id)arg1;
- (void)clearToggleStateItems;
- (void)dealloc;
- (void)download:(id)arg1;
- (void)exit:(id)arg1;
- (void)findApps:(id)arg1:(id)arg2:(id)arg3;
- (void)findLibraryItems:(id)arg1:(id)arg2:(id)arg3;
- (void)findToggleStateForItem:(id)arg1:(id)arg2;
- (void)getAdminStatus:(id)arg1:(id)arg2;
- (void)getBookSample:(id)arg1;
- (void)getProfilePermissions:(id)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)isRemovedSystemApp:(id)arg1:(id)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(id)arg1;
- (void)log:(id)arg1;
- (void)resetStateForActiveDocument;
- (BOOL)resourceExists:(id)arg1;
- (void)restoreRemovedSystemApp:(id)arg1:(id)arg2;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (BOOL)sendOnXEventWithDictionary:(id)arg1;
- (void)setPreviewOverlay:(id)arg1:(id)arg2;
- (void)updateToggleStateForItem:(id)arg1 toggled:(BOOL)arg2:(id)arg3;

@end

