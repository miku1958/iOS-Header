//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem
{
    HMAccessorySelectionSettingItem *_optionItem;
}

@property (strong, nonatomic) HMAccessorySelectionSettingItem *optionItem; // @synthesize optionItem=_optionItem;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)homeKitObject;
- (id)initWithAccessoryProfile:(id)arg1 setting:(id)arg2 optionItem:(id)arg3;
- (id)settingKeyPath;
- (id)toggleSelection;
- (id)value;

@end

