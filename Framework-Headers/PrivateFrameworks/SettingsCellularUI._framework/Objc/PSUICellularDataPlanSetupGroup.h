//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanSetupGroup : NSObject <PSSpecifierGroup>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)setupAccountPressed:(id)arg1;
- (id)specifiers;

@end
