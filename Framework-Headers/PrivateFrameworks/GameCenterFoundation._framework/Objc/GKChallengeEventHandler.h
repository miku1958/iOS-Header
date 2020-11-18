//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKChallengeInternal;
@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;

@interface GKChallengeEventHandler : NSObject
{
    id<GKChallengeEventHandlerDelegate> _delegateWeak;
    id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
    GKChallengeInternal *_pendingReceivedChallenge;
    GKChallengeInternal *_pendingCompletedChallenge;
}

@property (nonatomic) id<GKChallengeEventHandlerDelegate> delegate; // @synthesize delegate=_delegateWeak;
@property (strong, nonatomic) GKChallengeInternal *pendingCompletedChallenge; // @synthesize pendingCompletedChallenge=_pendingCompletedChallenge;
@property (strong, nonatomic) GKChallengeInternal *pendingReceivedChallenge; // @synthesize pendingReceivedChallenge=_pendingReceivedChallenge;
@property (strong, nonatomic) id<GKChallengeEventHandlerUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;

+ (id)challengeEventHandler;
- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)dealloc;
- (void)receivedChallengeSelected:(id)arg1;
- (void)showBannerForChallenge:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

