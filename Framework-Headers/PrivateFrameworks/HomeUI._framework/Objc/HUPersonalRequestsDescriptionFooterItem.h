//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem
{
    HULocationDeviceManager *_locationDeviceManager;
}

@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;

- (void).cxx_destruct;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;

@end
