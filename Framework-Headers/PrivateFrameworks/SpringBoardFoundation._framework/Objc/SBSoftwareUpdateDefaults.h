//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown3DayWarning) BOOL developerInstallBrickAlertShown3DayWarning; // @dynamic developerInstallBrickAlertShown3DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown7DayWarning) BOOL developerInstallBrickAlertShown7DayWarning; // @dynamic developerInstallBrickAlertShown7DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShownTomorrowWarning) BOOL developerInstallBrickAlertShownTomorrowWarning; // @dynamic developerInstallBrickAlertShownTomorrowWarning;

- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;

@end
