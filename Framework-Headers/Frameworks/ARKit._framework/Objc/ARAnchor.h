//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface ARAnchor : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    double _lastUpdateTimestamp;
    CDStruct_14d5dc5e _transform;
    CDStruct_14d5dc5e _referenceTransform;
}

@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property (nonatomic) CDStruct_14d5dc5e referenceTransform; // @synthesize referenceTransform=_referenceTransform;
@property (nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_description:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAnchor:(id)arg1;

@end

