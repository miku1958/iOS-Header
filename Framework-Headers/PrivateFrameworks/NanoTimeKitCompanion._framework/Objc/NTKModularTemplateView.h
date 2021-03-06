//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKModularTemplateView : NTKComplicationModuleView <NTKTemplateComplicationDisplay>
{
    NSDate *_timeTravelDate;
    CLKComplicationTemplate *_complicationTemplate;
    unsigned long long _highlightMode;
}

@property (nonatomic) BOOL canUseCurvedText;
@property (strong, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;

+ (BOOL)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_enumerateColoringViewsSubviewsWithBlock:(CDUnknownBlockType)arg1 invertedHighlight:(BOOL)arg2;
- (void)_propagateColorSchemeToSubviews:(id)arg1;
- (void)_setColorScheme:(id)arg1 propagateToSubviews:(BOOL)arg2;
- (void)_update;
- (BOOL)_useInvertedHighlightForColorScheme:(id)arg1;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setContainsOverrideFaceColor:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end

