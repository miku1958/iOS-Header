//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface PFVideoExportRangeWaitingCaller : NSObject
{
    BOOL _requestedRangeIsAvailable;
    BOOL _cancelled;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct _NSRange _requestedRange;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property struct _NSRange requestedRange; // @synthesize requestedRange=_requestedRange;
@property BOOL requestedRangeIsAvailable; // @synthesize requestedRangeIsAvailable=_requestedRangeIsAvailable;
@property (strong) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;

+ (id)waitingCallerWithRequestedRange:(struct _NSRange)arg1;
- (void).cxx_destruct;
- (BOOL)canResumeForRange:(struct _NSRange)arg1;
- (id)init;
- (void)resume;
- (void)waitWithTimeout:(unsigned long long)arg1;

@end

