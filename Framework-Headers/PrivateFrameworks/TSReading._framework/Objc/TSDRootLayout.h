//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDAbstractLayout.h>

#import <TSReading/TSDAdaptiveLayout-Protocol.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>
{
    TSDLayoutController *mLayoutController;
    BOOL mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}

- (struct CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint)arg3;
- (void)beginDynamicAdaptiveLayout;
- (id)childLayoutsInRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)endDynamicAdaptiveLayout;
- (id)initWithLayoutController:(id)arg1;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)layoutController;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (BOOL)providesGuidesForChildLayouts;

@end

