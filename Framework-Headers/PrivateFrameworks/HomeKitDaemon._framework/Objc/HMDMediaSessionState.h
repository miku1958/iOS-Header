//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDMediaSessionState : HMFObject <HMFDumpState>
{
    NSString *_sessionIdentifier;
    long long _playbackState;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dumpState;
- (id)initWithSessionIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

