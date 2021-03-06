//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMFaceCrop.h>

#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSUUID;

@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying>
{
    NSUUID *_personUUID;
    NSUUID *_unassociatedFaceCropUUID;
}

@property (readonly, copy) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
@property (copy) NSUUID *unassociatedFaceCropUUID; // @synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect)arg4 personUUID:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

