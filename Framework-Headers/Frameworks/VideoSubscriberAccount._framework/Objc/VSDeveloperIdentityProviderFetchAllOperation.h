//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSXPCConnection, VSFailable;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation
{
    VSFailable *_result;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)executionDidBegin;
- (id)init;

@end

