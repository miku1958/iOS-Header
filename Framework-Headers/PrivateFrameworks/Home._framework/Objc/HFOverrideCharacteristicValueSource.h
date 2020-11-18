//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>

@class NSString;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;

@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource>
{
    id<HFCharacteristicValueSource> _originalValueSource;
    id<HFOverrideCharacteristicValueProvider> _overrideValueProvider;
}

@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> originalValueSource; // @synthesize originalValueSource=_originalValueSource;
@property (weak, nonatomic) id<HFOverrideCharacteristicValueProvider> overrideValueProvider; // @synthesize overrideValueProvider=_overrideValueProvider;
@property (readonly) Class superclass;

+ (id)na_identity;
- (void).cxx_destruct;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;

@end

