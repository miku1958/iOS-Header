//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSString, VSFailable;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchOperation : VSAsyncOperation
{
    NSString *_identityProviderID;
    VSFailable *_result;
    NSOperationQueue *_privateQueue;
}

@property (copy, nonatomic) NSString *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithIdentityProviderID:(id)arg1;

@end

