//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFCharacteristicValueOperationBatching-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class HFCharacteristicValueSet, HMActionSet, HMCharacteristic, NAFuture, NSError, NSSet;
@protocol HFCharacteristicOperationContextProviding;

@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable>

@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;

- (id)cachedValueForCharacteristic:(HMCharacteristic *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1 inServices:(NSSet *)arg2;
- (NAFuture *)readValuesForCharacteristics:(NSSet *)arg1;
- (NAFuture *)writeValuesForCharacteristics:(HFCharacteristicValueSet *)arg1;

@optional
- (NSError *)cachedErrorForExecutionOfActionSet:(HMActionSet *)arg1;
- (NSError *)cachedErrorForWriteToCharacteristic:(HMCharacteristic *)arg1;
- (void)executeActionSet:(HMActionSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

