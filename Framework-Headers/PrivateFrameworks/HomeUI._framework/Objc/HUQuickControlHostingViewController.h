//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUQuickControlInteractiveViewController-Protocol.h>

@class HUQuickControlViewProfile, NSString, UIView;
@protocol HUQuickControlInteractiveView;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController>
{
    HUQuickControlViewProfile *_profile;
    UIViewController *_contraption;
}

@property (readonly, nonatomic) UIViewController *contraption; // @synthesize contraption=_contraption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *view;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 profile:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end

