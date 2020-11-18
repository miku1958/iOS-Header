//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _activationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType activationHandler; // @synthesize activationHandler=_activationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithActivationHandler:(CDUnknownBlockType)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;

@end

