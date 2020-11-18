//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPPageRep.h>

#import <iWorkImport/TSDMasterDrawableDelegate-Protocol.h>

@class CALayer, NSString, TPiOSMarginAdjustRep;

__attribute__((visibility("hidden")))
@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyReps;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (id)layerClass;
- (BOOL)masksToBounds;
- (BOOL)p_pageRequiresHorizontalSeparator;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)willBeRemoved;

@end

