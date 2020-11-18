//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;
@protocol SXColumnCalculator, SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter>
{
    id<SXLayouterDelegate> delegate;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    SXLayouterFactory *_layouterFactory;
    id<SXColumnCalculator> _columnCalculator;
    id<SXLayoutContextFactory> _layoutContextFactory;
    id<SXUnitConverterFactory> _unitConverterFactory;
}

@property (readonly, nonatomic) id<SXColumnCalculator> columnCalculator; // @synthesize columnCalculator=_columnCalculator;
@property (readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // @synthesize containerComponentBlueprint=_containerComponentBlueprint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXLayouterDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property (readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;

- (void).cxx_destruct;
- (struct CGPoint)calculatePositionForComponentWithBlueprint:(id)arg1 layout:(id)arg2 unitConverter:(id)arg3 margin:(id)arg4 maximumY:(double)arg5 layoutBlueprint:(id)arg6;
- (struct CGSize)calculateSizeForComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3;
- (struct CGSize)calculateSizeForContainerComponentWithBlueprint:(id)arg1 width:(double)arg2 layoutContext:(id)arg3 layoutDescription:(id)arg4 shouldContinue:(BOOL *)arg5;
- (id)childColumnLayoutForContainerComponentWidth:(double)arg1 componentWidth:(double)arg2 componentBlueprint:(id)arg3 columnLayout:(id)arg4 unitConverter:(id)arg5;
- (double)factorForAnchorAlingment:(long long)arg1;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL *)arg4;

@end
