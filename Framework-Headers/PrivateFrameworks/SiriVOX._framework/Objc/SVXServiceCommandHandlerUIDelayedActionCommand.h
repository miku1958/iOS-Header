//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXServiceCommandHandling-Protocol.h>

@class NSString, SVXServiceCommandDelayedActionStore, SVXSessionManager;
@protocol SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerUIDelayedActionCommand : NSObject <SVXServiceCommandHandling>
{
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    SVXSessionManager *_sessionManager;
    id<SVXPerforming> _performer;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;
- (void).cxx_destruct;
- (void)_performDelayedAction:(id)arg1;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDelayedActionStore:(id)arg1 sessionManager:(id)arg2 performer:(id)arg3;
- (BOOL)isCommandUUFR:(id)arg1;

@end

