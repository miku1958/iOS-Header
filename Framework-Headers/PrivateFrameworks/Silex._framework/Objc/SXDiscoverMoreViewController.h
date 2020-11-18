//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXVideoAccessoryItem-Protocol.h>

@class NSString, SXAdvanceButton, SXNowPlayingButton, UIView;
@protocol SXDiscoverMoreConfigurationProviding;

@interface SXDiscoverMoreViewController : UIViewController <SXVideoAccessoryItem>
{
    unsigned long long _displayMode;
    SXNowPlayingButton *_discoverMoreButton;
    SXAdvanceButton *_advanceButton;
    id<SXDiscoverMoreConfigurationProviding> _configurationProvider;
}

@property (readonly, nonatomic) SXAdvanceButton *advanceButton; // @synthesize advanceButton=_advanceButton;
@property (readonly, nonatomic) id<SXDiscoverMoreConfigurationProviding> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXNowPlayingButton *discoverMoreButton; // @synthesize discoverMoreButton=_discoverMoreButton;
@property (nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithDiscoverMoreButton:(id)arg1 advanceButton:(id)arg2 configurationProvider:(id)arg3;
- (void)viewDidLoad;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;

@end
