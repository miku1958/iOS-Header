//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem
{
    NSString *_characteristicType;
}

@property (readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;

+ (id)defaultMainTextColorForCharacteristicType:(id)arg1;
+ (Class)valueClass;
- (void).cxx_destruct;
- (BOOL)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getStatus:(out id *)arg1 mainTextColor:(out id *)arg2 supplementaryDescription:(out id *)arg3 withBatchReadResponse:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end

