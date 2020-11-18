//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamTracker : NSObject <HMFLogging>
{
    NSMutableSet *_currentStreamIdentifiers;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (strong, nonatomic) NSMutableSet *currentStreamIdentifiers; // @synthesize currentStreamIdentifiers=_currentStreamIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
+ (id)sharedTracker;
- (void).cxx_destruct;
- (void)endStream:(id)arg1;
- (id)init;
- (BOOL)startStream:(id)arg1;

@end

