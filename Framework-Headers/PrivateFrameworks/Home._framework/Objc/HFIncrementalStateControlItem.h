//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFPrimaryStateControlItem, NSNumber, NSString;

@interface HFIncrementalStateControlItem : HFControlItem
{
    HFPrimaryStateControlItem *_primaryStateControlItem;
    NSString *_incrementalCharacteristicType;
}

@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
@property (readonly, nonatomic) HFPrimaryStateControlItem *primaryStateControlItem; // @synthesize primaryStateControlItem=_primaryStateControlItem;
@property (readonly, nonatomic) NSNumber *stepValue;

+ (Class)valueClass;
- (void).cxx_destruct;
- (BOOL)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;
- (id)togglePrimaryAndIncrementalState;
- (id)updateWithOptions:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
