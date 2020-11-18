//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventObserver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMDLogEventObserver, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedObserver;
+ (BOOL)shouldSubmitEvent:(id)arg1;
+ (id)subTypeForEvent:(id)arg1;
+ (id)supportedEventTypes;
- (void).cxx_destruct;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (id)init;
- (void)start;
- (void)stop;

@end

