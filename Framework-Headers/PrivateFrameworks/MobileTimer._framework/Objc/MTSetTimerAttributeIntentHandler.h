//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

#import <MobileTimer/INSetTimerAttributeIntentHandling-Protocol.h>

@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_responseToSetTimerAttributeIntent:(id)arg1 withUpdatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)_updateTimer:(id)arg1 toDuration:(double)arg2 dryRun:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)confirmSetTimerAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSetTimerAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

