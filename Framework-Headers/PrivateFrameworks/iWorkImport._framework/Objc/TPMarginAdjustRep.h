//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

@class TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPMarginAdjustRep : TSDRep
{
    BOOL _hideKnobs;
    BOOL _topKnobEncroachingHeader;
    BOOL _bottomKnobEncroachingFooter;
    double _minTopMargin;
    double _minBottomMargin;
}

@property (nonatomic) BOOL hideKnobs; // @synthesize hideKnobs=_hideKnobs;
@property (nonatomic) double minBottomMargin; // @synthesize minBottomMargin=_minBottomMargin;
@property (nonatomic) double minTopMargin; // @synthesize minTopMargin=_minTopMargin;
@property (readonly, nonatomic) TPPaginatedPageInfo *pageInfo;

- (BOOL)directlyManagesLayerContent;
- (void)hideKnobsEncroachingHeader:(double)arg1 orFooter:(double)arg2;

@end

