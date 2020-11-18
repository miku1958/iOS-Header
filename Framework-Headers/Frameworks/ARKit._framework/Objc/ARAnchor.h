//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class NSUUID;

@interface ARAnchor : NSObject <NSCopying>
{
    NSUUID *_identifier;
    CDStruct_14d5dc5e _transform;
    CDStruct_14d5dc5e _referenceTransform;
}

@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) CDStruct_14d5dc5e referenceTransform; // @synthesize referenceTransform=_referenceTransform;
@property (nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;

- (void).cxx_destruct;
- (id)_description:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAnchor:(id)arg1;

@end

