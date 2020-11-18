//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPParagraph, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPParagraphFlow : NSObject
{
    CPParagraph *paragraph;
    double fLeft;
    double fRight;
    double fTop;
    double fBottom;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    BOOL placed;
    BOOL adjacentToCallout;
    int calloutType;
    CPParagraph *nextInColumn;
}

@property int calloutType; // @synthesize calloutType;
@property double fBottom; // @synthesize fBottom;
@property double fLeft; // @synthesize fLeft;
@property double fRight; // @synthesize fRight;
@property (nonatomic) CPParagraph *nextInColumn; // @synthesize nextInColumn;
@property (strong, nonatomic) CPParagraph *paragraph; // @synthesize paragraph;
@property BOOL placed; // @synthesize placed;

- (double)area;
- (struct CGRect)belowBounds;
- (id)belowTwoSides:(unsigned int)arg1;
- (double)dAbove;
- (double)dBelow;
- (void)dealloc;
- (id)description;
- (id)ignoreCallouts:(unsigned int)arg1;
- (int)inOrder;
- (int)inOrder:(BOOL)arg1;
- (id)initWithParagraph:(id)arg1;
- (BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 rects:(id)arg3;
- (BOOL)intervalOverlapTop:(double)arg1 bottom:(double)arg2 paragraphs:(id)arg3;
- (int)leftOrder;
- (id)nextParagraphInColumn:(id)arg1;
- (int)outOrder;
- (id)paragraphsAbove;
- (id)paragraphsBelow;
- (id)paragraphsLeft;
- (id)paragraphsRight;
- (void)removeFromAbove:(id)arg1;
- (void)removeFromBelow:(id)arg1;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (int)rightOrder;
- (void)setParagraphsAboveIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (id)simpleRule:(unsigned int)arg1;
- (long long)topDescending:(id)arg1;
- (id)twoSides:(unsigned int)arg1;

@end
