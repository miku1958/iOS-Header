//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasDataToSync;
    BOOL _isCurrentUser;
    NSString *_username;
    unsigned long long _dataQuota;
    unsigned long long _dataUsed;
}

@property (readonly, nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property (readonly, nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property (readonly, nonatomic) BOOL hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property (readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property (readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(BOOL)arg4 isCurrentUser:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;

@end
