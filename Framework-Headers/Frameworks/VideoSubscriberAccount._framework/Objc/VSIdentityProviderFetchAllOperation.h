//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSFailable;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation
{
    VSFailable *_result;
    NSOperationQueue *_subqueue;
}

@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;
@property (strong, nonatomic) NSOperationQueue *subqueue; // @synthesize subqueue=_subqueue;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end

