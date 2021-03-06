//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDXPCActivityInterfacing-Protocol.h>

@class NSString;

@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)criteriaForXPCActivity:(id)arg1;
- (void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
- (void)setCriteria:(id)arg1 forXPCActivity:(id)arg2;
- (BOOL)setState:(long long)arg1 forXPCActivity:(id)arg2;
- (long long)stateForXPCActivity:(id)arg1;
- (void)unregisterXPCActivityWithActivityIdentifier:(id)arg1;

@end

