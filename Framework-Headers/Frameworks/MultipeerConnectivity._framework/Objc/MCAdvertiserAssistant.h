//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/MCNearbyServiceAdvertiserDelegate-Protocol.h>
#import <MultipeerConnectivity/UIAlertViewDelegate-Protocol.h>

@class MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSBundle, NSDictionary, NSMutableArray, NSString, UIAlertView;
@protocol MCAdvertiserAssistantDelegate;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate>
{
    id<MCAdvertiserAssistantDelegate> _delegate;
    BOOL _isAdvertising;
    BOOL _wasAdvertising;
    MCSession *_session;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    MCPeerID *_myPeerID;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_invitationsBuffer;
    CDUnknownBlockType _invitationHandlerForPresentedAlert;
    NSString *_appName;
    NSBundle *_frameworkBundle;
    UIAlertView *_alertView;
}

@property (strong, nonatomic) MCNearbyServiceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property (strong, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property (readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MCAdvertiserAssistantDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;
@property (strong, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invitationHandlerForPresentedAlert; // @synthesize invitationHandlerForPresentedAlert=_invitationHandlerForPresentedAlert;
@property (strong, nonatomic) NSMutableArray *invitationsBuffer; // @synthesize invitationsBuffer=_invitationsBuffer;
@property (nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property (copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (strong, nonatomic) MCSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;

- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;
- (void)presentNextInvitation;
- (void)start;
- (void)stop;
- (void)willPresentAlertView:(id)arg1;

@end
