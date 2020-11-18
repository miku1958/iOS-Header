//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSSet, NSUUID, TUHandle;

@interface TUJoinConversationRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_groupUUID;
    TUHandle *_localParticipantHandle;
    NSSet *_remoteParticipantHandles;
    NSUUID *_UUID;
}

@property (strong, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property (readonly, copy, nonatomic) TUHandle *localParticipantHandle; // @synthesize localParticipantHandle=_localParticipantHandle;
@property (readonly, copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;

@end

