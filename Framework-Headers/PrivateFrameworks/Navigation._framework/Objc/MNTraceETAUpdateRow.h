//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError, NSString;

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _requestTimestamp;
    double _responseTimestamp;
    GEOETATrafficUpdateRequest *_request;
    GEOETATrafficUpdateResponse *_response;
    NSError *_error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double position;
@property (strong, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;
@property (nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property (strong, nonatomic) GEOETATrafficUpdateResponse *response; // @synthesize response=_response;
@property (nonatomic) double responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

