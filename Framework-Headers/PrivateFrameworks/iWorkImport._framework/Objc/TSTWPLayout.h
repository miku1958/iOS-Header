//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPLayout.h>

@class TSTCellStyle, TSWPPadding, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTWPLayout : TSWPLayout
{
    BOOL _cachedCellWraps;
    BOOL _cacheIsValid;
    struct TSUCellCoord _cachedCellID;
    int _cachedVerticalAlignment;
    int _cachedParagraphAlignment;
    unsigned int _cachedAutoSizeFlags;
    TSTCellStyle *_cachedCellStyle;
    TSWPParagraphStyle *_cachedTextStyle;
    struct TSUCellRect _cachedMergeRange;
    struct TSUCellRect _cachedMaskSpillRange;
    TSWPPadding *_cachedPadding;
    struct CGRect _cachedMaskRect;
    struct CGRect _cachedAutosizedFrame;
}

@property (nonatomic) BOOL cacheIsValid; // @synthesize cacheIsValid=_cacheIsValid;
@property (nonatomic) unsigned int cachedAutoSizeFlags; // @synthesize cachedAutoSizeFlags=_cachedAutoSizeFlags;
@property (nonatomic) struct CGRect cachedAutosizedFrame; // @synthesize cachedAutosizedFrame=_cachedAutosizedFrame;
@property (nonatomic) struct TSUCellCoord cachedCellID; // @synthesize cachedCellID=_cachedCellID;
@property (strong, nonatomic) TSTCellStyle *cachedCellStyle; // @synthesize cachedCellStyle=_cachedCellStyle;
@property (nonatomic) BOOL cachedCellWraps; // @synthesize cachedCellWraps=_cachedCellWraps;
@property (nonatomic) struct CGRect cachedMaskRect; // @synthesize cachedMaskRect=_cachedMaskRect;
@property (nonatomic) struct TSUCellRect cachedMaskSpillRange; // @synthesize cachedMaskSpillRange=_cachedMaskSpillRange;
@property (nonatomic) struct TSUCellRect cachedMergeRange; // @synthesize cachedMergeRange=_cachedMergeRange;
@property (strong, nonatomic) TSWPPadding *cachedPadding; // @synthesize cachedPadding=_cachedPadding;
@property (nonatomic) int cachedParagraphAlignment; // @synthesize cachedParagraphAlignment=_cachedParagraphAlignment;
@property (strong, nonatomic) TSWPParagraphStyle *cachedTextStyle; // @synthesize cachedTextStyle=_cachedTextStyle;
@property (nonatomic) int cachedVerticalAlignment; // @synthesize cachedVerticalAlignment=_cachedVerticalAlignment;

- (void)dealloc;
- (id)initWithStorage:(id)arg1 parentLayout:(id)arg2 cellID:(struct TSUCellCoord)arg3 frame:(struct CGRect)arg4;
- (void)invalidate;
- (BOOL)invalidateForPageCountChange;
- (void)validate;

@end

