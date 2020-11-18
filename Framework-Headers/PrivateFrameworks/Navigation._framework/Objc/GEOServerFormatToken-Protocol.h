//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

@protocol GEOServerFormatToken <NSObject>

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkValue;
@property (readonly, nonatomic) id<GEOServerFormatTokenPriceValue> priceValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSArray *timeStampValues;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned int value1;
@property (readonly, nonatomic) unsigned int value2;
@property (readonly, nonatomic) NSArray *value3s;

@end

