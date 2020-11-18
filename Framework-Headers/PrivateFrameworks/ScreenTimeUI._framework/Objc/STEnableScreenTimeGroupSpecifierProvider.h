//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

#import <ScreenTimeUI/MCProfileConnectionObserver-Protocol.h>

@class NSString, PSSpecifier, UIViewController;

__attribute__((visibility("hidden")))
@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>
{
    PSSpecifier *_setupScreenTimeSpecifier;
    UIViewController *_rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (strong) PSSpecifier *setupScreenTimeSpecifier; // @synthesize setupScreenTimeSpecifier=_setupScreenTimeSpecifier;
@property (readonly) Class superclass;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enableScreenTimeFooterText;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)saveValuesForModel:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setupScreenTime:(id)arg1;

@end
