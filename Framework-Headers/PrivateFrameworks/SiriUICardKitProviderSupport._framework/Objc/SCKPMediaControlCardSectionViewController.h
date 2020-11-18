//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class AFSecurityConnection, NSString, SCKPMediaControlCardSectionView, SFMediaRemoteControlCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling>
{
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
    id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    SFMediaRemoteControlCardSection *_cardSection;
}

@property (readonly) SFMediaRemoteControlCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SCKPMediaControlCardSectionView *view; // @dynamic view;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (void)_updatePlatterForRouteUID:(id)arg1;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;
- (void)loadView;

@end

