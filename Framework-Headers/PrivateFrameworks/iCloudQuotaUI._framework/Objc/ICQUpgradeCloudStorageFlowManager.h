//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuotaUI/ICQUpgradeFlowManager.h>

#import <iCloudQuotaUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class NSString, NSURLSession, PSCloudStorageOffersManager;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate>
{
    NSURLSession *_buyProductSession;
    PSCloudStorageOffersManager *_storageOffersManager;
    CDUnknownBlockType _purchaseCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType purchaseCompletionHandler; // @synthesize purchaseCompletionHandler=_purchaseCompletionHandler;
@property (strong, nonatomic) PSCloudStorageOffersManager *storageOffersManager; // @synthesize storageOffersManager=_storageOffersManager;
@property (readonly) Class superclass;

+ (BOOL)_canDoTokenPurchaseWithOffer:(id)arg1;
+ (BOOL)shouldSubclassShowForOffer:(id)arg1;
- (void).cxx_destruct;
- (void)_adoptRemoteUI;
- (void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (id)_buyProductQueryDictionary;
- (id)_buyProductQueryFragment;
- (id)_buyProductQueryItems;
- (id)_buyProductQueryKeySet;
- (id)_buyProductRequestWithAccount:(id)arg1 token:(id)arg2;
- (void)_buyProductShouldUseToken:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_buyProductURL;
- (void)_performPageButtonActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPurchase;
- (void)_performPurchaseUsingSettingsUI;
- (void)_performPurchaseUsingTouchID;
- (id)_storageContextHeaderDictionary;
- (id)_storageContextJSONString;
- (id)initSubclassWithOffer:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;

@end

