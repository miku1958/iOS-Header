//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NPKStandaloneFirstUnlockCoordinator : NSObject
{
    int _firstDeviceUnlockRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocksToPerformAfterFirstDeviceUnlock;
}

@property (strong, nonatomic) NSMutableArray *blocksToPerformAfterFirstDeviceUnlock; // @synthesize blocksToPerformAfterFirstDeviceUnlock=_blocksToPerformAfterFirstDeviceUnlock;
@property (nonatomic) int firstDeviceUnlockRegistrationToken; // @synthesize firstDeviceUnlockRegistrationToken=_firstDeviceUnlockRegistrationToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_performFirstUnlockWork;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)performSubjectToFirstUnlock:(CDUnknownBlockType)arg1;

@end

