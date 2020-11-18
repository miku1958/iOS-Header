//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/BSXPCCoding-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCCoding>
{
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3;
- (id)_responseHandlerConnection;
- (id)_usageResultHandlerConnection;
- (void)completeWithResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)reportUsageResult:(id)arg1;
- (id)request;

@end
