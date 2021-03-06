//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIStoreFPSKeyLoaderDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUISecureInvalidationManager : NSObject <VUIStoreFPSKeyLoaderDelegate>
{
    BOOL _networkErrorOccurredDuringInvalidation;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_keyLoaders;
    NSMutableSet *_penaltyBox;
    unsigned long long _backgroundTaskIdentifier;
}

@property (nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *keyLoaders; // @synthesize keyLoaders=_keyLoaders;
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation; // @synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation;
@property (strong, nonatomic) NSMutableSet *penaltyBox; // @synthesize penaltyBox=_penaltyBox;
@property (strong, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_getParamsForDeletionInfo:(id)arg1 keyServerURL:(id *)arg2 nonceURL:(id *)arg3 keyIdentifier:(id *)arg4 offlineKeyData:(id *)arg5 dsid:(id *)arg6 additionalRequestParams:(id *)arg7 contentID:(id *)arg8;
- (id)_invalidateKeysForDeletedVideos;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)_sendInvalidationRequestsForDeletionInfoArrays:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendInvalidationRequestsForFirstArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_validateParamsForDeletionInfo:(id)arg1;
- (void)addDeletionInfoToPenaltyBox:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateKeysForDeletedVideos;
- (void)removeDeletionInfoFromPenaltyBox:(id)arg1;
- (BOOL)storeFPSKeyLoader:(id)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg2;

@end

