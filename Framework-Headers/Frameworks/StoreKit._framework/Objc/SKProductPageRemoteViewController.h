//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKProductPageExtensionClientInterface-Protocol.h>
#import <StoreKit/ServiceProductPage-Protocol.h>

@class NSString;
@protocol SKProductPageRemoteViewControllerDelegate;

@interface SKProductPageRemoteViewController : _UIRemoteViewController <SKProductPageExtensionClientInterface, ServiceProductPage>
{
    id<SKProductPageRemoteViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKProductPageRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (id)extensionProxy;
- (void)finishImmediately;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadDidFinish;
- (void)loadProductWithPageDictionary:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithURL:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(BOOL)arg1;
- (void)setShowsStoreButton:(BOOL)arg1;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
