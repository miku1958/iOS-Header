//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome;

@interface HUAddTriggerItem : HFItem
{
    HMHome *_home;
    unsigned long long _mode;
}

@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;

- (void).cxx_destruct;
- (BOOL)_itemisHidden;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 mode:(unsigned long long)arg2;

@end
