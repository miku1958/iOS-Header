//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class SSRequest, VSFailable, VSStoreRequest;

__attribute__((visibility("hidden")))
@interface VSStoreRequestOperation : VSAsyncOperation
{
    int _requestCompletionFlag;
    VSStoreRequest *_request;
    VSFailable *_result;
    SSRequest *_storeServicesRequest;
}

@property (copy, nonatomic) VSStoreRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;
@property (strong, nonatomic) SSRequest *storeServicesRequest; // @synthesize storeServicesRequest=_storeServicesRequest;

- (void).cxx_destruct;
- (BOOL)_isFirstToFinish;
- (void)cancel;
- (void)executionDidBegin;

@end

