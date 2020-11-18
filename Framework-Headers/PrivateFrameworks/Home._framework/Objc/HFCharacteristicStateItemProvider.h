//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFServiceItem, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFCharacteristicStateItemProvider : HFItemProvider
{
    HFServiceItem *_serviceItem;
    id<HFCharacteristicValueSource> _valueSource;
    NSSet *_characteristicStateItems;
}

@property (strong, nonatomic) NSSet *characteristicStateItems; // @synthesize characteristicStateItems=_characteristicStateItems;
@property (readonly, nonatomic) HFServiceItem *serviceItem; // @synthesize serviceItem=_serviceItem;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

+ (id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3;
+ (id)standardCharacteristicTypes;
- (void).cxx_destruct;
- (CDUnknownBlockType)characteristicStateItemComparator;
- (id)initWithHome:(id)arg1;
- (id)initWithValueSource:(id)arg1 serviceItem:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

