//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPCluster, CPZone, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    CDStruct_8db92b66 *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    double medianFontSizeOfFirstCharacter;
    double medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;
- (BOOL)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)getWordEdges;
- (id)gutters;
- (BOOL)hasGutters;
- (BOOL)hasLeftGuides;
- (BOOL)hasRightGuides;
- (id)initWithContentZone:(id)arg1;
- (id)leftGuides;
- (void)markTextLines;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;
- (id)rightGuides;
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (void)splitTextLines;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 *)arg6 ofCount:(unsigned int)arg7;

@end

