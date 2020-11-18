//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@protocol _INPBRidePartySizeOption <NSObject>

@property (readonly, nonatomic) BOOL hasPartySizeRange;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (readonly, nonatomic) BOOL hasSizeDescription;
@property (strong, nonatomic) _INPBRangeValue *partySizeRange;
@property (strong, nonatomic) _INPBPriceRangeValue *priceRange;
@property (copy, nonatomic) NSString *sizeDescription;

@end

