//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSMutableCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHEncodedStrokeIdentifier, NSDictionary, NSMutableDictionary;

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMutableDictionary *_supportByStrokeIdentifier;
    double _support;
    CHEncodedStrokeIdentifier *_strokeIdentifier;
    long long _classificationAsNonText;
    long long _substrokesCount;
    double _lineError;
    double _containerScore;
    double _lineOrientationAngle;
    double _boundsDiagonal;
    struct CGRect _bounds;
    struct CGRect _enlargedBounds;
    struct CGRect _rotatedBounds;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) double boundsDiagonal; // @synthesize boundsDiagonal=_boundsDiagonal;
@property (readonly, nonatomic) long long classificationAsNonText; // @synthesize classificationAsNonText=_classificationAsNonText;
@property (readonly, nonatomic) double containerScore; // @synthesize containerScore=_containerScore;
@property (readonly, nonatomic) long long effectiveClassification;
@property (readonly, nonatomic) struct CGRect enlargedBounds; // @synthesize enlargedBounds=_enlargedBounds;
@property (readonly, nonatomic) double lineError; // @synthesize lineError=_lineError;
@property (readonly, nonatomic) double lineOrientationAngle; // @synthesize lineOrientationAngle=_lineOrientationAngle;
@property (readonly, nonatomic) struct CGRect rotatedBounds; // @synthesize rotatedBounds=_rotatedBounds;
@property (readonly, strong, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
@property (readonly, nonatomic) long long substrokesCount; // @synthesize substrokesCount=_substrokesCount;
@property (readonly, nonatomic) double support; // @synthesize support=_support;
@property (readonly, strong, nonatomic) NSDictionary *supportByStrokeIdentifier; // @synthesize supportByStrokeIdentifier=_supportByStrokeIdentifier;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 bounds:(struct CGRect)arg7 boundsDiagonal:(double)arg8 enlargedBounds:(struct CGRect)arg9 rotatedBounds:(struct CGRect)arg10 supportByStrokeIdentifier:(id)arg11 support:(double)arg12;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNonTextCandidateStroke:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
