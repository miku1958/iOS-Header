//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationHandling-Protocol.h>

@class NSString;

@interface AFSiriActivationHandlerAssistantDaemon : NSObject <AFSiriActivationHandling>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

