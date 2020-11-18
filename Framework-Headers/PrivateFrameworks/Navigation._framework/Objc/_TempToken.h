//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatToken-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject <GEOServerFormatToken>
{
    unsigned int _value1;
    unsigned int _value2;
    long long _type;
    NSString *_token;
    NSArray *_value3s;
    NSString *_stringValue;
    id<GEOServerFormatTokenPriceValue> _priceValue;
    id<GEOTransitArtworkDataSource> _artworkValue;
    NSArray *_timeStampValues;
}

@property (strong, nonatomic) id<GEOTransitArtworkDataSource> artworkValue; // @synthesize artworkValue=_artworkValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<GEOServerFormatTokenPriceValue> priceValue; // @synthesize priceValue=_priceValue;
@property (strong, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *timeStampValues; // @synthesize timeStampValues=_timeStampValues;
@property (strong, nonatomic) NSString *token; // @synthesize token=_token;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) unsigned int value1; // @synthesize value1=_value1;
@property (nonatomic) unsigned int value2; // @synthesize value2=_value2;
@property (readonly, nonatomic) NSArray *value3s; // @synthesize value3s=_value3s;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

