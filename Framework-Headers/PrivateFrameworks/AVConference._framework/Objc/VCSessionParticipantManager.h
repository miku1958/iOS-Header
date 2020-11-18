//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCSessionParticipantDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantManager : NSObject <VCSessionParticipantDelegate>
{
    NSMutableDictionary *_sessionParticipants;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *sessionParticipants; // @synthesize sessionParticipants=_sessionParticipants;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (id)participantForID:(id)arg1;
- (void)registerBlocksForService;
- (void)vcSessionParticipant:(id)arg1 didFrequencyLevelsChange:(id)arg2;

@end

