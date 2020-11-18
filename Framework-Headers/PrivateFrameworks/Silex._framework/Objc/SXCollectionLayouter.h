//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;
@protocol SXColumnCalculator, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXCollectionLayouter : NSObject <SXLayouter>
{
    id<SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    id<SXColumnCalculator> _columnCalculator;
    id<SXUnitConverterFactory> _unitConverterFactory;
}

@property (readonly, nonatomic) id<SXColumnCalculator> columnCalculator; // @synthesize columnCalculator=_columnCalculator;
@property (readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // @synthesize containerComponentBlueprint=_containerComponentBlueprint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;

- (void).cxx_destruct;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL *)arg4;

@end
