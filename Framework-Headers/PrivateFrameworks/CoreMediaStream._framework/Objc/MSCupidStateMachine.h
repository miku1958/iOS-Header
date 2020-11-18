//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSBackoffManager, NSMutableDictionary, NSString;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate>
{
    NSString *_personID;
    NSString *_manifestPath;
    NSMutableDictionary *_userManifest;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    BOOL _hasDeactivated;
}

@property (strong, nonatomic) NSMutableDictionary *_userManifest; // @synthesize _userManifest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDeactivated; // @synthesize hasDeactivated=_hasDeactivated;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abort;
- (void)_backoffMMCSBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_commitUserManifest;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_forget;
- (id)_latestNextActivityDate;
- (void)_resetMMCSBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_updateMasterManifest;
- (void)deactivate;
- (void)dealloc;
- (void)forget;
- (id)initWithPersonID:(id)arg1;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;

@end

