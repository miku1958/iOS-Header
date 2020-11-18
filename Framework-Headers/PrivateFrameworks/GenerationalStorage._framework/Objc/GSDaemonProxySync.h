//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <GenerationalStorage/GSProtocol-Protocol.h>

@class NSError, NSObject;
@protocol GSProtocol;

@interface GSDaemonProxySync : NSProxy <GSProtocol>
{
    NSObject<GSProtocol> *_target;
    NSError *_error;
    id _result;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) id result; // @synthesize result=_result;

+ (id)proxy;
- (void).cxx_destruct;
- (struct __CFError *)copyCFError;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (void)handleBoolResult:(BOOL)arg1 error:(id)arg2;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
