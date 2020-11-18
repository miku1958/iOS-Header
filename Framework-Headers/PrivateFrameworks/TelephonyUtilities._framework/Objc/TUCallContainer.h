//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallContainer-Protocol.h>
#import <TelephonyUtilities/TUCallContainerPrivate-Protocol.h>

@class NSArray, NSString, TUCall;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer>
{
    NSArray *_calls;
}

@property (readonly, copy, nonatomic) NSArray *_allCalls;
@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (copy, nonatomic) NSArray *calls; // @synthesize calls=_calls;
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, nonatomic) TUCall *conferenceCall;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, nonatomic) unsigned long long currentCallCount;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) unsigned long long currentVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TUCall *displayedCall;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, nonatomic) BOOL existingCallsHaveMultipleProviders;
@property (readonly, strong, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property (readonly, nonatomic) TUCall *frontmostCall;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_callGroupsFromCalls:(id)arg1;
- (BOOL)allCallsAreOfService:(int)arg1;
- (BOOL)allCallsPassTest:(CDUnknownBlockType)arg1;
- (BOOL)anyCallPassesTest:(CDUnknownBlockType)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1 sortedUsingComparator:(CDUnknownBlockType)arg2;
- (id)callPassingTest:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (id)displayedCallFromCalls:(id)arg1;
- (void)enumerateCallsInvokingBlock:(CDUnknownBlockType)arg1 forCallsPassingTest:(CDUnknownBlockType)arg2;
- (void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(CDUnknownBlockType)arg2 forCallsPassingTest:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithCalls:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;

@end

