//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATNetworkReachabilityDelegate-Protocol.h>
#import <ClassroomKit/CRKClassSessionBeaconBrowserDelegate-Protocol.h>
#import <ClassroomKit/CRKSessionDelegate-Protocol.h>

@class CATNetworkReachability, CRKClassSessionBeaconBrowser, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol CRKClassSessionBrowserDelegate, CRKInvitationSessionBrowserDelegate;

@interface CRKClassSessionBrowser : NSObject <CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate>
{
    NSMutableDictionary *mClassSessionsByIdentifier;
    NSMutableArray *mInRangeClassSessions;
    NSMutableDictionary *mInvitationSessionsByIPAddress;
    CRKClassSessionBeaconBrowser *mBeaconBrowser;
    CATNetworkReachability *mNetworkReachability;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionIP;
    BOOL _allowInvitationSessions;
    BOOL _allowUnenrolledSessions;
    id<CRKClassSessionBrowserDelegate> _delegate;
    id<CRKInvitationSessionBrowserDelegate> _invitationSessionDelegate;
    NSSet *_organizationUUIDs;
    NSSet *_enrolledControlGroupIdentifiers;
}

@property (nonatomic) BOOL allowInvitationSessions; // @synthesize allowInvitationSessions=_allowInvitationSessions;
@property (nonatomic) BOOL allowUnenrolledSessions; // @synthesize allowUnenrolledSessions=_allowUnenrolledSessions;
@property (readonly, nonatomic, getter=isBrowsing) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKClassSessionBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *enrolledControlGroupIdentifiers; // @synthesize enrolledControlGroupIdentifiers=_enrolledControlGroupIdentifiers;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CRKInvitationSessionBrowserDelegate> invitationSessionDelegate; // @synthesize invitationSessionDelegate=_invitationSessionDelegate;
@property (copy, nonatomic) NSSet *organizationUUIDs; // @synthesize organizationUUIDs=_organizationUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithIPAddress:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)addInRangeClassSession:(id)arg1;
- (void)beaconBrowser:(id)arg1 didFailWithError:(id)arg2;
- (void)beaconBrowser:(id)arg1 didFindBeaconForClassSession:(id)arg2 flags:(unsigned short)arg3;
- (void)beaconBrowser:(id)arg1 didFindBeaconForInvitationSessionWithIPAddress:(id)arg2;
- (id)browserStateDictionary;
- (void)classSessionInvalidated:(id)arg1;
- (void)classSessionRejected:(id)arg1;
- (id)clientIdentityForSession:(id)arg1;
- (void)connectToClassSessionWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)delegateClassSessionDidBecomeConnectable:(id)arg1;
- (void)delegateClassSessionDidBecomeNotConnectable:(id)arg1;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 transport:(id)arg2;
- (void)delegateDidFindInvitationSession:(id)arg1 transport:(id)arg2;
- (void)delegateDidRemoveClassSession:(id)arg1;
- (void)delegateDidRemoveInvitationSession:(id)arg1;
- (void)delegateInRangeClassSessionsDidChange;
- (void)delegateLostConnectionToClassSession:(id)arg1;
- (void)delegateLostConnectionToInvitationSession:(id)arg1;
- (id)delegateNeedsClientIdentityForGroup:(id)arg1;
- (id)delegateNeedsClientIdentityInvitationSession;
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg1;
- (BOOL)hasConnectionToClassWithIdentifier:(id)arg1;
- (id)init;
- (void)invitationSessionWithIPAddressInvalidated:(id)arg1;
- (void)lostConnectionToClassSession:(id)arg1;
- (void)lostConnectionToInvitationSessionWithIPAddress:(id)arg1;
- (void)reachabilityDidChange:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithIPAddress:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)removeInRangeClassSession:(id)arg1;
- (void)session:(id)arg1 didConnectWithTransport:(id)arg2;
- (void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidBecomeConnectable:(id)arg1;
- (void)sessionDidBecomeNotConnectable:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidInvalidate:(id)arg1;
- (void)sessionDidLoseBeacon:(id)arg1;
- (void)startBrowsing;
- (id)stateDictionariesByClassSessionIdentifierString;
- (void)stopBrowsing;
- (id)trustedAnchorCertificatesForSession:(id)arg1;
- (void)updateConnectedSessions;
- (void)updateRequiresBeaconFlagForSession:(id)arg1;

@end

