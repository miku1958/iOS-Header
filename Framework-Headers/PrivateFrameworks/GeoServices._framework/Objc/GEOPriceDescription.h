//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject
{
    GEOPDPriceDescription *_geoPriceDescription;
}

@property (strong, nonatomic) GEOPDPriceDescription *geoPriceDescription; // @synthesize geoPriceDescription=_geoPriceDescription;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) NSString *priceDescription;

- (void).cxx_destruct;
- (id)initWithGEOPDPriceDescription:(id)arg1;

@end

