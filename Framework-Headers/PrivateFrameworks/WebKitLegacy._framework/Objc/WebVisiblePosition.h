//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal *_internal;
}

@property (nonatomic) int affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition)arg1;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition)arg1;
- (struct VisiblePosition)_visiblePosition;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)arg1;
- (BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)directionIsDownstream:(int)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (id)positionAtStartOrEndOfWord;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(BOOL)arg3;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (BOOL)requiresContextForWordBoundary;
- (int)textDirection;
- (BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;

@end

