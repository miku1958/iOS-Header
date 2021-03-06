//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

#import <DACoreDAVGlue/DATask-Protocol.h>

@class NSString;

@interface CoreDAVTask (DACoreDAVGlueExtensions) <DATask>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)performTask;
@end

