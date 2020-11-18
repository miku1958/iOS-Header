//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, HMHome, HMUser, NSString, NSURL;

@interface HMUserCloudShareInvitation : NSObject
{
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_shareToken;
    NSString *_containerID;
    HMHome *_home;
    HMUser *_user;
    HMUser *_fromUser;
}

@property (readonly) NSString *containerID; // @synthesize containerID=_containerID;
@property (readonly) HMUser *fromUser; // @synthesize fromUser=_fromUser;
@property (readonly) HMHome *home; // @synthesize home=_home;
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken; // @synthesize shareToken=_shareToken;
@property (readonly) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (readonly) HMUser *user; // @synthesize user=_user;

- (void).cxx_destruct;
- (id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6;

@end
