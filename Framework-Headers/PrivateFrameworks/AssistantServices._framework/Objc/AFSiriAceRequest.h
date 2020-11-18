//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@protocol OS_xpc_object;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest>
{
    NSObject<OS_xpc_object> *_startRequestData;
    unsigned long long _requestOptions;
}

- (void).cxx_destruct;
- (id)initWithStartRequest:(id)arg1;
- (id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
