//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNSettings, MNSettingsManager;

@protocol MNSettingsObserver <NSObject>
- (void)settingsManager:(MNSettingsManager *)arg1 didUpdateSettings:(MNSettings *)arg2 previousSettings:(MNSettings *)arg3;
@end
