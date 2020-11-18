//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSURL;

@interface WCSessionState : NSObject <NSSecureCoding>
{
    BOOL _reachable;
    BOOL _paired;
    BOOL _appInstalled;
    BOOL _complicationEnabled;
    BOOL _iOSDeviceNeedsFirstUnlock;
    NSString *_pairingID;
    NSSet *_pairedDevicesPairingIDs;
    NSString *_appInstallationID;
}

@property (readonly, copy) NSString *appInstallationID; // @synthesize appInstallationID=_appInstallationID;
@property (readonly, getter=isAppInstalled) BOOL appInstalled; // @synthesize appInstalled=_appInstalled;
@property (readonly, getter=isComplicationEnabled) BOOL complicationEnabled; // @synthesize complicationEnabled=_complicationEnabled;
@property (readonly) BOOL iOSDeviceNeedsFirstUnlock; // @synthesize iOSDeviceNeedsFirstUnlock=_iOSDeviceNeedsFirstUnlock;
@property (readonly, getter=isPaired) BOOL paired; // @synthesize paired=_paired;
@property (readonly, copy) NSSet *pairedDevicesPairingIDs; // @synthesize pairedDevicesPairingIDs=_pairedDevicesPairingIDs;
@property (readonly, copy) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property (readonly, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (readonly, copy) NSURL *watchDirectoryURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReachable:(BOOL)arg1 iOSDeviceNeedsFirstUnlock:(BOOL)arg2 activePairingID:(id)arg3;
- (id)initWithReachable:(BOOL)arg1 paired:(BOOL)arg2 appInstalled:(BOOL)arg3 complicationEnabled:(BOOL)arg4 activePairingID:(id)arg5 pairedDevicesPairingIDs:(id)arg6 appInstallationID:(id)arg7;
- (id)initWithReachable:(BOOL)arg1 paired:(BOOL)arg2 appInstalled:(BOOL)arg3 complicationEnabled:(BOOL)arg4 iOSDeviceNeedsFirstUnlock:(BOOL)arg5 pairingID:(id)arg6 pairedDevicesPairingIDs:(id)arg7 appInstallationID:(id)arg8;

@end

