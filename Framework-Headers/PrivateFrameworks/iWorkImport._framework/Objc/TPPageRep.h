//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPPageRep.h>

#import <iWorkImport/TSDMasterDrawableDelegate-Protocol.h>
#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>

@class CALayer, NSString, TPiOSMarginAdjustRep, TSDFill;

__attribute__((visibility("hidden")))
@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
    TSDFill *_cachedBackgroundFill;
}

@property (strong, nonatomic) TSDFill *cachedBackgroundFill; // @synthesize cachedBackgroundFill=_cachedBackgroundFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundFill;
- (id)bodyReps;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)isOpaque;
- (BOOL)masksToBounds;
- (BOOL)p_pageRequiresHorizontalSeparator;
- (id)parentRepForMagnification;
- (void)willBeRemoved;

@end
