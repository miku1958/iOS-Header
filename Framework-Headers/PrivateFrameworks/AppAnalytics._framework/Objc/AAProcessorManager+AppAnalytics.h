//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppAnalytics/AAProcessorManager.h>

@interface AAProcessorManager (AppAnalytics)
- (void)addEventProcessor:(id)arg1;
- (void)flushWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeEventProcessor:(id)arg1;
- (void)resumeBackgroundProcessingForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

