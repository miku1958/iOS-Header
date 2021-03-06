//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>
{
    struct CGRect _faceBoundingBox;
    unsigned long long _pointCount;
    unsigned long long _requestRevision;
}

@property struct CGRect faceBoundingBox; // @synthesize faceBoundingBox=_faceBoundingBox;
@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property (readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2;
- (BOOL)isEqual:(id)arg1;

@end

