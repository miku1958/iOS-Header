//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, _INPBPriceRangeValue;

@protocol INPriceRangeExport <NSObject, JSExport>

@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *maximumPrice;
@property (readonly, nonatomic) NSDecimalNumber *minimumPrice;

+ (id)_priceWithPriceRangeValue:(_INPBPriceRangeValue *)arg1;
- (id)init;
@end

