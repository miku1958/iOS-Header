//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEODataConditionalConnectionProperties, GEOETATrafficUpdateRequest, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest>
{
    GEOETATrafficUpdateRequest *_request;
    GEODataConditionalConnectionProperties *_connectionProperties;
}

@property (strong, nonatomic) GEODataConditionalConnectionProperties *connectionProperties; // @synthesize connectionProperties=_connectionProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;
@property (readonly) Class superclass;

+ (Class)replyClass;
- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)isValid;

@end

