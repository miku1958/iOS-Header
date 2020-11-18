//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFValueTransformer, NSString;

@interface HFPrimaryStateControlItem : HFControlItem
{
    NSString *_primaryStateCharacteristicType;
    HFValueTransformer *_valueTransformer;
}

@property (readonly, copy, nonatomic) NSString *primaryStateCharacteristicType; // @synthesize primaryStateCharacteristicType=_primaryStateCharacteristicType;
@property (readonly, nonatomic) HFValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;

+ (id)powerStateControlItemWithValueSource:(id)arg1 displayResults:(id)arg2;
+ (Class)valueClass;
- (void).cxx_destruct;
- (BOOL)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)togglePrimaryState;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writePrimaryState:(long long)arg1;
- (id)writeValue:(id)arg1;

@end

