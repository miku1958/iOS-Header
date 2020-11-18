//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAggregatedCharacteristicValueSource-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFMultiServiceAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource>
{
    id<HFCharacteristicValueSource> _valueSource;
    NSSet *_services;
    NSMutableDictionary *_characteristicsByType;
}

@property (readonly, nonatomic) NSMutableDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *services; // @synthesize services=_services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

- (void).cxx_destruct;
- (id)_aggregatedBatchResponseForMultiServiceResponse:(id)arg1;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)initWithValueSource:(id)arg1 services:(id)arg2;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;

@end

