//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOImageServiceResponse, NSString;

@interface GEOImageServiceReplySimple : GEOXPCReply <GEOXPCReply>
{
    GEOImageServiceResponse *_response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GEOImageServiceResponse *response; // @synthesize response=_response;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;

@end
