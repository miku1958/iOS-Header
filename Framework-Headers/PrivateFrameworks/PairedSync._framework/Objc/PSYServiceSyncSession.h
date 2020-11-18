//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSUUID, PSYSyncCoordinator;
@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;

@interface PSYServiceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isComplete;
    BOOL _complete;
    NRDevice *_pairedDevice;
    unsigned long long _syncSessionType;
    NSUUID *_sessionIdentifier;
    PSYSyncCoordinator *_syncCoordinator;
    unsigned long long _switchID;
    id<PSYServiceSyncSessionDelegate> _delegate;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (weak, nonatomic) id<PSYServiceSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property (strong, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) unsigned long long switchID; // @synthesize switchID=_switchID;
@property (weak, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property (nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)reportProgress:(double)arg1;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncDidFailWithError:(id)arg1;

@end

