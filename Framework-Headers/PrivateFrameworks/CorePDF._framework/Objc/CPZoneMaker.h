//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPCharSequence;

__attribute__((visibility("hidden")))
@interface CPZoneMaker : NSObject
{
    CPCharSequence *charactersOnPage;
}

- (void)addObjectsToStraddler:(id)arg1 from:(id)arg2;
- (void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2;
- (unsigned int)categorizeGraphicsIn:(id)arg1;
- (void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)dealloc;
- (void)makeZonesIn:(id)arg1;
- (void)makeZonesWithBoundaryIn:(id)arg1;
- (void)mergeQualifyingRectanglesIn:(id)arg1;
- (id)newZoneForStraddlersFrom:(id)arg1;
- (BOOL)overlap:(id)arg1 with:(id)arg2;

@end

