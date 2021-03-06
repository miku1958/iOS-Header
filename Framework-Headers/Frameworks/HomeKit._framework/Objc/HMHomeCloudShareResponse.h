//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject
{
    CKShareParticipant *_participant;
    HMUser *_ownerUser;
    HMUserCloudShareClientInfo *_clientInfo;
}

@property (readonly) HMUserCloudShareClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property (readonly) HMUser *ownerUser; // @synthesize ownerUser=_ownerUser;
@property (readonly) CKShareParticipant *participant; // @synthesize participant=_participant;

- (void).cxx_destruct;
- (id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3;

@end

