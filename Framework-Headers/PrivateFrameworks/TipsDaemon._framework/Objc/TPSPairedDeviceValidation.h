//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TPSPairedDeviceValidation : TPSInclusivityValidation
{
    NSArray *_cachedPeers;
    NSArray *_cachedDevices;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (copy, nonatomic) NSArray *cachedDevices; // @synthesize cachedDevices=_cachedDevices;
@property (copy, nonatomic) NSArray *cachedPeers; // @synthesize cachedPeers=_cachedPeers;
@property (readonly, nonatomic) NSArray *excludeDevices;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (readonly, nonatomic) NSArray *targetDevices;

- (void).cxx_destruct;
- (id)_validationForDeviceNumber:(long long)arg1;
- (id)_validationsForDevices:(id)arg1;
- (id)completionQueue;
- (id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;

@end

