//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFVideoExportRangeCoordinator : NSObject
{
    BOOL _cancelled;
    NSMutableArray *_waitingCallers;
    NSObject<OS_dispatch_queue> *_stateQueue;
    struct _NSRange _availableRange;
}

@property struct _NSRange availableRange; // @synthesize availableRange=_availableRange;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property (strong) NSMutableArray *waitingCallers; // @synthesize waitingCallers=_waitingCallers;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)updateAvailableRange:(struct _NSRange)arg1;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;

@end
