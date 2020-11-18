//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

#import <HomeUI/HUQuickControlDetailsViewControllerVendor-Protocol.h>

@class NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)controlItemPredicate;
- (id)controlItem;
- (id)createDetailsViewController;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)secondaryQuickControlPresentationStyle;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;

@end

