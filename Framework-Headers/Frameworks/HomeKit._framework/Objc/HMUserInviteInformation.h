//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMUserInviteInformation : NSObject
{
    BOOL _administrator;
    BOOL _remoteAccessAllowed;
    NSString *_userID;
}

@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator; // @synthesize administrator=_administrator;
@property (readonly, nonatomic, getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
@property (readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3;

@end

