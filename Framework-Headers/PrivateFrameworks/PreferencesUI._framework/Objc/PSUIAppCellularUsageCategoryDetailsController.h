//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class WirelessDataUsageWorkspace;

@interface PSUIAppCellularUsageCategoryDetailsController : PSListController
{
    WirelessDataUsageWorkspace *_workspace;
}

@property (strong, nonatomic) WirelessDataUsageWorkspace *workspace; // @synthesize workspace=_workspace;

- (void).cxx_destruct;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifiers;

@end

