//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointWithIndex : NSObject
{
    BOOL _isStartOfSegment;
    BOOL _isPolylineA;
    BOOL _isFlipped;
    unsigned long long _index;
    Matrix_2bdd42a3 _point;
    LineSegment_ede69d4d _segment;
}

@property (nonatomic) unsigned long long index; // @synthesize index=_index;
@property (nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property (nonatomic) BOOL isPolylineA; // @synthesize isPolylineA=_isPolylineA;
@property (nonatomic) BOOL isStartOfSegment; // @synthesize isStartOfSegment=_isStartOfSegment;
@property (nonatomic) Matrix_2bdd42a3 point; // @synthesize point=_point;
@property (nonatomic) LineSegment_ede69d4d segment; // @synthesize segment=_segment;

- (id).cxx_construct;

@end

