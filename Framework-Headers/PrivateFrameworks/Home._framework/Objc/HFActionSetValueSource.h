//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>

@class HFItemBuilder, HMActionSet, NSString;
@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding;

@interface HFActionSetValueSource : NSObject <HFCharacteristicValueSource>
{
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;
    HMActionSet *_actionSet;
    id<HFActionSetValueSourceDelegate> _delegate;
}

@property (strong, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property (strong, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HFActionSetValueSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;
- (void).cxx_destruct;
- (id)_actionForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForCharacteristic:(id)arg1;
- (BOOL)_isCurrentStateCharacteristic:(id)arg1;
- (id)_targetValueForCharacteristic:(id)arg1;
- (id)_valueForCurrentStateCharacteristic:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (id)initWithActionSet:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;

@end

