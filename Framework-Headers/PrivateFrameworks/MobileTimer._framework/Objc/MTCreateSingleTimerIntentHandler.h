//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import <MobileTimer/INCreateTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTCreateSingleTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_createTimerWithIntent:(id)arg1 dryRun:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)confirmCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

