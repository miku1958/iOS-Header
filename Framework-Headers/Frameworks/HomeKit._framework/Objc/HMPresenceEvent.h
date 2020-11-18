//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMPresenceEventActivation, HMThreadSafeMutableArrayCollection, NSString;

@interface HMPresenceEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_presenceType;
    HMPresenceEventActivation *_activation;
    unsigned long long _presenceEventType;
    unsigned long long _presenceUserType;
    HMThreadSafeMutableArrayCollection *_observedUsers;
}

@property (strong, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) HMThreadSafeMutableArrayCollection *observedUsers; // @synthesize observedUsers=_observedUsers;
@property (readonly, nonatomic) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property (strong, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
@property (readonly, nonatomic) unsigned long long presenceUserType; // @synthesize presenceUserType=_presenceUserType;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)isSupportedForHome:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3;
- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_update:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3;
- (id)initWithPresenceType:(id)arg1;
- (id)initWithPresenceType:(id)arg1 users:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)users;

@end

