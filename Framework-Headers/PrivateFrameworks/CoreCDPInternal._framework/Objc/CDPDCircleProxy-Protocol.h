//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSDictionary, NSSet, NSString;

@protocol CDPDCircleProxy <NSObject>

@property (strong, nonatomic) CDPContext *cdpContext;

+ (BOOL)canAuthenticate;
- (BOOL)anyPeerHasEnabledViewsInSet:(NSSet *)arg1 error:(id *)arg2;
- (int)circleStatus:(id *)arg1;
- (BOOL)hasNonViewAwarePeers;
- (id)initWithContext:(CDPContext *)arg1;
- (BOOL)isLastBackupMakingPeer:(id *)arg1;
- (unsigned long long)peerCount;
- (NSDictionary *)peerDeviceNamesByPeerID;
- (NSString *)peerId;
- (BOOL)removeNonViewAwarePeers:(id *)arg1;
- (BOOL)removeThisDeviceFromCircle:(id *)arg1;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)arg1;
- (BOOL)requestToResetCircle:(id *)arg1;
- (BOOL)setViewsWithEnableSet:(NSSet *)arg1 disableSet:(NSSet *)arg2;
- (BOOL)synchronizeCircleViews;
- (BOOL)viewMemberForAutofillPasswords:(id *)arg1;
@end
