//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSDictionary, NSString, NSUserDefaults;

@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain
{
    NSUserDefaults *_sbLegacyDefaults;
}

@property (strong, nonatomic) NSString *lastOSVersion; // @dynamic lastOSVersion;
@property (nonatomic) BOOL needsAlertPresentationAfterOTAUpdate; // @dynamic needsAlertPresentationAfterOTAUpdate;
@property (strong, nonatomic) NSDictionary *softwareUpdateState; // @dynamic softwareUpdateState;

- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)_clearLegacySpringBoardPreferences;
- (id)_initWithLegacyDefaults:(id)arg1;
- (void)_migrateLegacySpringBoardPreferences;
- (void)clearDeveloperInstallBrickAlerts;
- (id)init;
- (void)migrateAndClearLegacyPreferences;

@end

