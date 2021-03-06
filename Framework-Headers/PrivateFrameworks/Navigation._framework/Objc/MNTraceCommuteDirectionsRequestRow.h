//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceCommuteDirectionsRequestRow : NSObject
{
    unsigned long long _destinationID;
    double _requestTimestamp;
    double _responseTimestamp;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_responseError;
}

@property (nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
@property (strong, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property (nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property (strong, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property (nonatomic) double responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;

- (void).cxx_destruct;

@end

