//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBStarkBannerSource.h>

#import <SpringBoard/SBStarkNotificationBannerItemDelegate-Protocol.h>

@class NSString;
@protocol SBStarkNotificationBannerSourceDelegate;

@interface SBStarkNotificationBannerSource : SBStarkBannerSource <SBStarkNotificationBannerItemDelegate>
{
    id<SBStarkNotificationBannerSourceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBStarkNotificationBannerSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;

@end
