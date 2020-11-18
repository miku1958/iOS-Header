//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAppConfigurationManager;
@protocol NUAdProvider, NUInterstitialAdManagerDelegate, NUPage;

@interface NUInterstitialAdManager : NSObject
{
    BOOL _enabled;
    id<NUInterstitialAdManagerDelegate> _delegate;
    id<NUPage> _activePage;
    id<NUAdProvider> _adProvider;
    FCAppConfigurationManager *_appConfigurationManager;
}

@property (strong, nonatomic) id<NUPage> activePage; // @synthesize activePage=_activePage;
@property (readonly, nonatomic) id<NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property (readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property (weak, nonatomic) id<NUInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2;
- (void)loadInterstitial;
- (void)restartTimer;
- (void)triggerTimerChangesForActivePage:(id)arg1;

@end

