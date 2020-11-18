//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, SSRequest, VSAuditToken, VSOptional;

@interface VSLegaleseFetchOperation : VSAsyncOperation
{
    int _requestCompletionFlag;
    long long _format;
    NSURL *_endpointURL;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSRequest *_storeServicesRequest;
}

@property (strong, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property (readonly, nonatomic) long long format; // @synthesize format=_format;
@property (strong, nonatomic) VSOptional *result; // @synthesize result=_result;
@property (strong, nonatomic) SSRequest *storeServicesRequest; // @synthesize storeServicesRequest=_storeServicesRequest;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1 orError:(id)arg2;
- (void)_finishWithResponse:(id)arg1;
- (BOOL)_isFirstToFinish;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithFormat:(long long)arg1 endpointURL:(id)arg2;

@end

