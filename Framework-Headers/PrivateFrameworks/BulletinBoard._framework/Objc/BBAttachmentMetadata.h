//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSMutableCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSURL, NSUUID;

@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    long long _type;
    NSURL *_URL;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1 type:(long long)arg2 URL:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

