//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, SSLookupRequest, SSLookupResponse;

@interface MPStoreLookupBatchOperation : NSOperation
{
    SSLookupRequest *_subrequest;
    SSLookupResponse *_response;
    NSError *_error;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) SSLookupResponse *response; // @synthesize response=_response;
@property (readonly, nonatomic) SSLookupRequest *subrequest; // @synthesize subrequest=_subrequest;

- (void).cxx_destruct;
- (id)initWithSubrequest:(id)arg1;
- (void)main;

@end

