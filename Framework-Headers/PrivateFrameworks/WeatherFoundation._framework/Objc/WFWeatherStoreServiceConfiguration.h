//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class NSMutableDictionary, NSURL, NSURLSession, NWPathEvaluator, WFAggregateDictionary;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSCopying>
{
    NWPathEvaluator *_serviceConnectivityEvaluator;
    NSURLSession *_session;
    WFAggregateDictionary *_aggDictionary;
    NSURL *_cacheURL;
    NSMutableDictionary *_requestFormatterForForecastType;
    NSMutableDictionary *_requestParserForForecastType;
    Class _airQualityRequestFormatterClass;
    Class _airQualityParserClass;
    Class _cacheClass;
    NSURL *_serviceConnectivityEvaluationURL;
}

@property (strong, nonatomic) WFAggregateDictionary *aggDictionary; // @synthesize aggDictionary=_aggDictionary;
@property (strong, nonatomic) Class airQualityParserClass; // @synthesize airQualityParserClass=_airQualityParserClass;
@property (strong, nonatomic) Class airQualityRequestFormatterClass; // @synthesize airQualityRequestFormatterClass=_airQualityRequestFormatterClass;
@property (strong, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
@property (copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property (readonly, nonatomic) BOOL isServiceAvailable;
@property (readonly, nonatomic) BOOL isValid;
@property (strong, nonatomic) NSMutableDictionary *requestFormatterForForecastType; // @synthesize requestFormatterForForecastType=_requestFormatterForForecastType;
@property (strong, nonatomic) NSMutableDictionary *requestParserForForecastType; // @synthesize requestParserForForecastType=_requestParserForForecastType;
@property (strong, nonatomic) NSURL *serviceConnectivityEvaluationURL; // @synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL;
@property (readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator; // @synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;

+ (id)defaultConfiguration;
+ (id)generateUserAgent;
- (void).cxx_destruct;
- (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)forecastRequestForType:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (id)init;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)setAirQualityFormatter:(Class)arg1;
- (void)setAirQualityParser:(Class)arg1;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;

@end

