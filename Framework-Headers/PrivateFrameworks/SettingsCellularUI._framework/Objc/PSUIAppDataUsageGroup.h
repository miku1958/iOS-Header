//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSAppCellularUsageSpecifierDelegate-Protocol.h>
#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class CTUIListLoadingGroup, NSArray, NSString, PSListController, PSSpecifier;

@interface PSUIAppDataUsageGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup>
{
    NSArray *_specifiers;
    PSListController *_hostController;
    PSSpecifier *_groupSpecifier;
    CTUIListLoadingGroup *_loadingGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) PSListController *hostController; // @synthesize hostController=_hostController;
@property (strong, nonatomic) CTUIListLoadingGroup *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calculateUsage;
- (void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)prefetchResourcesFor:(id)arg1;
- (void)presentAlert:(id)arg1;
- (id)specifiers;

@end
