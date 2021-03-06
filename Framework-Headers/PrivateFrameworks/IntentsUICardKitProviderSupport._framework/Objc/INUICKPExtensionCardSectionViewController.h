//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewController.h>

#import <IntentsUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class NSString;
@protocol CRKCardSectionViewControllingDelegate;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling>
{
    id _touchDeliveryPolicyAssertion;
    id<CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;
}

@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)remoteViewControllerWillBeginEditing:(id)arg1;

@end

