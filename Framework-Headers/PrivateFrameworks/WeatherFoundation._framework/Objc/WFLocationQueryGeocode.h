//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFLocationQuery-Protocol.h>

@class CLGeocoder, MKLocalSearch, MKLocalSearchCompletion, NSString, WFResponse, WFTaskIdentifier;

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery>
{
    BOOL _finished;
    WFTaskIdentifier *identifier;
    MKLocalSearchCompletion *_searchCompletion;
    NSString *_searchString;
    CDUnknownBlockType _resultHandler;
    WFResponse *_response;
    CLGeocoder *_reverseGeocoder;
    MKLocalSearch *_search;
    struct CLLocationCoordinate2D _searchCoordinate;
    struct CLLocationCoordinate2D _unshiftedCoordinate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) WFTaskIdentifier *identifier; // @synthesize identifier;
@property (strong) WFResponse *response; // @synthesize response=_response;
@property (copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property (strong, nonatomic) CLGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property (strong, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property (readonly) MKLocalSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property (nonatomic) struct CLLocationCoordinate2D searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property (readonly) NSString *searchString; // @synthesize searchString=_searchString;
@property (readonly) Class superclass;
@property (nonatomic) struct CLLocationCoordinate2D unshiftedCoordinate; // @synthesize unshiftedCoordinate=_unshiftedCoordinate;

+ (id)clReverseGeocoderCache;
+ (id)mkLocalSearchGeoCodeCache;
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_handleErrorResponse:(id)arg1;
- (id)_mkLocalSearchRequest;
- (id)_reverseGeocoderLocation;
- (void)_startCLGeocoderReverseGeo;
- (void)_startMKLocalSearch;
- (void)cancel;
- (void)handleSearchResponseWithLocation:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)start;

@end

