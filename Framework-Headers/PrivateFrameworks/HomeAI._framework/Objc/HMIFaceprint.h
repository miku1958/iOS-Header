//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSData *_data;
    NSUUID *_modelUUID;
    NSUUID *_faceCropUUID;
}

@property (readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSUUID *faceCropUUID; // @synthesize faceCropUUID=_faceCropUUID;
@property (readonly, copy) NSUUID *modelUUID; // @synthesize modelUUID=_modelUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 data:(id)arg2 modelUUID:(id)arg3 faceCropUUID:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end
