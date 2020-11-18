//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFHTTPRequestInternal, NSData, NSDictionary, NSString, NSURL, NSURLRequest;

@interface HMFHTTPRequest : HMFObject
{
    HMFHTTPRequestInternal *_internal;
    double _timeoutInterval;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) HMFHTTPRequestInternal *internal; // @synthesize internal=_internal;
@property (readonly, copy, nonatomic) NSString *method;
@property (nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithInternalRequest:(id)arg1;
- (id)responseWithStatusCode:(long long)arg1;
- (id)shortDescription;

@end

