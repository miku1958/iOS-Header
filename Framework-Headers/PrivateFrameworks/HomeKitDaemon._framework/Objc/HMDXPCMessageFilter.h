//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageFilter.h>

@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter
{
    HMDXPCClientConnection *_connection;
}

@property (readonly) HMDXPCClientConnection *connection; // @synthesize connection=_connection;

+ (BOOL)canInitWithMessage:(id)arg1;
+ (id)policyClasses;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;

@end
