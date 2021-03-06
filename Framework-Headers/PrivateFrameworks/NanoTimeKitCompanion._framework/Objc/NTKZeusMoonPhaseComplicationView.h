//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>

#import <NanoTimeKitCompanion/NTKMoonPhaseComplicationDisplay-Protocol.h>

@class NSString, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusMoonPhaseComplicationView : NTKZeusComplicationView <NTKMoonPhaseComplicationDisplay>
{
    UIImageView *_imageView;
    long long _moonPhaseHemisphere;
    unsigned long long _phaseNumber;
}

@property (nonatomic) BOOL canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateImages;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (id)initWithBackgroundView:(id)arg1;
- (void)layoutSubviews;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

