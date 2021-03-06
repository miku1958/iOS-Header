//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

@class CPParagraph, CPTextLine;
@protocol CPGraphicUser;

__attribute__((visibility("hidden")))
@interface CPGraphicObject : CPChunk
{
    unsigned int clipIndex;
    struct CGRect renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPParagraph *anchoringParagraph;
    CPChunk<CPGraphicUser> *user;
}

@property (strong, nonatomic) CPParagraph *anchoringParagraph; // @synthesize anchoringParagraph;
@property (nonatomic) unsigned int clipIndex; // @synthesize clipIndex;

- (id)anchoringTextLine;
- (BOOL)canBeContainer;
- (void)dealloc;
- (id)init;
- (BOOL)isInZoneBorder;
- (BOOL)isIndivisible;
- (BOOL)isNarrow;
- (BOOL)isVisible;
- (struct CGRect)renderedBounds;
- (void)setAnchoringTextLine:(id)arg1;
- (void)setIsInZoneBorder:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (void)setZoneGraphicType:(int)arg1;
- (unsigned short)unicode;
- (id)user;
- (int)zoneGraphicType;

@end

