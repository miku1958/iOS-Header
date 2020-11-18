//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingIdentityPropertiesLoading-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading>
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedLoader;
- (void).cxx_destruct;
- (id)init;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

