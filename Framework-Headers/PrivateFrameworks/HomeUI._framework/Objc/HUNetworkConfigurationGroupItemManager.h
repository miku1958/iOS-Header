//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationItemListModule;

@interface HUNetworkConfigurationGroupItemManager : HFItemManager
{
    HUNetworkConfigurationItemListModule *_networkConfigurationItemListModule;
}

@property (readonly, nonatomic) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule; // @synthesize networkConfigurationItemListModule=_networkConfigurationItemListModule;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;

@end
