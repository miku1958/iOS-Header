//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HUAccessorySettingsProfileModule;

@interface HUAccessorySettingsProfileItemManager : HFItemManager
{
    HUAccessorySettingsProfileModule *_profileModule;
}

@property (strong, nonatomic) HUAccessorySettingsProfileModule *profileModule; // @synthesize profileModule=_profileModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;

@end

