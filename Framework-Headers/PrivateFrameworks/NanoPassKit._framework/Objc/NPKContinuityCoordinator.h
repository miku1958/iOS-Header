//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserActivity;
@protocol OS_dispatch_queue;

@interface NPKContinuityCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserActivity *_provisionPassUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_setUpPeerPaymentUserActivity;
    NSUserActivity *_viewPeerPaymentUserActivity;
    NSUserActivity *_currentUserActivity;
}

@property (weak, nonatomic) NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property (strong, nonatomic) NSUserActivity *getPaymentPassesUserActivity; // @synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity;
@property (strong, nonatomic) NSUserActivity *individualPassUserActivity; // @synthesize individualPassUserActivity=_individualPassUserActivity;
@property (strong, nonatomic) NSUserActivity *passListUserActivity; // @synthesize passListUserActivity=_passListUserActivity;
@property (strong, nonatomic) NSUserActivity *provisionPassUserActivity; // @synthesize provisionPassUserActivity=_provisionPassUserActivity;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSUserActivity *setUpPeerPaymentUserActivity; // @synthesize setUpPeerPaymentUserActivity=_setUpPeerPaymentUserActivity;
@property (strong, nonatomic) NSUserActivity *viewPeerPaymentUserActivity; // @synthesize viewPeerPaymentUserActivity=_viewPeerPaymentUserActivity;

+ (id)sharedContinuityCoordinator;
- (void).cxx_destruct;
- (id)_init;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (void)dealloc;
- (id)init;
- (void)invalidateAllActivities;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userNeedsToSetUpPeerPayment;
- (void)userNeedsToViewPeerPaymentForHandle:(id)arg1;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(BOOL)arg2;

@end

