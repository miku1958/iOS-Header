//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject <NSSecureCoding>
{
    vector_2e7754b6 _convexHull;
    CHEncodedStrokeIdentifier *_strokeIdentifier;
    double _startTimestamp;
    double _endTimestamp;
    double _curvature;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) double curvature; // @synthesize curvature=_curvature;
@property (readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property (readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property (readonly, strong, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;

+ (id)substrokesForStroke:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_2e7754b6 *)convexHull;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector_2e7754b6 *)arg5 curvature:(double)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSubstroke:(id)arg1;

@end
