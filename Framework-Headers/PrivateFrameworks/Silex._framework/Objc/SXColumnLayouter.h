//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSMutableDictionary, NSString, SXLayouterFactory;
@protocol SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXColumnLayouter : NSObject <SXLayouter>
{
    id<SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    NSMutableDictionary *_intersectionCache;
    id<SXLayoutContextFactory> _layoutContextFactory;
    id<SXUnitConverterFactory> _unitConverterFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *intersectionCache; // @synthesize intersectionCache=_intersectionCache;
@property (readonly, nonatomic) id<SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property (readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;

- (void).cxx_destruct;
- (void)analyzeSnapLinesForLayoutBlueprint:(id)arg1;
- (BOOL)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (struct CGPoint)calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3;
- (struct CGSize)calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4;
- (id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2;
- (BOOL)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2;
- (void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3;
- (double)factorForLayoutAttribute:(int)arg1;
- (id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2;
- (id)initWithLayouterFactory:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;
- (BOOL)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (int)layoutAttributeForAnchor:(long long)arg1;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 shouldContinue:(BOOL *)arg3;
- (id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2;
- (BOOL)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4;

@end

