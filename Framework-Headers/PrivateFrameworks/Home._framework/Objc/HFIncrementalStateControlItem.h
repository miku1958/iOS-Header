//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

#import <Home/HFTogglableControlItem-Protocol.h>

@class NSNumber, NSString;
@protocol HFPrimaryStateWriter;

@interface HFIncrementalStateControlItem : HFControlItem <HFTogglableControlItem>
{
    HFControlItem<HFPrimaryStateWriter> *_primaryStateControlItem;
    NSString *_incrementalCharacteristicType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem; // @synthesize primaryStateControlItem=_primaryStateControlItem;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly) Class superclass;

+ (id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2;
+ (id)readOnlyCharacteristicTypes;
+ (Class)valueClass;
- (void).cxx_destruct;
- (BOOL)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;
- (id)togglePrimaryAndIncrementalState;
- (id)toggleValue;
- (id)updateWithOptions:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
