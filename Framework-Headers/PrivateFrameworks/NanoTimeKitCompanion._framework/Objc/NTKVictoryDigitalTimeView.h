//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, CLKTimeFormatter, NSString, NTKVictoryDigitsView;
@protocol NTKVictoryDigitalTimeViewDelegate;

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView>
{
    CLKDevice *_device;
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    BOOL _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
    BOOL _frozen;
    BOOL _invertedColors;
    unsigned long long _style;
    unsigned long long _color;
    id<NTKVictoryDigitalTimeViewDelegate> _delegate;
}

@property (nonatomic) unsigned long long color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKVictoryDigitalTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL invertedColors; // @synthesize invertedColors=_invertedColors;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

+ (id)transitionTimingFunction;
- (void).cxx_destruct;
- (long long)_lowerDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_resetDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_setFlipViewIsLower:(BOOL)arg1;
- (void)_setupFlipDigitsView;
- (long long)_upperDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)clearEditingTransitions;
- (void)dealloc;
- (long long)defaultAppearance;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)willBeginEditing;

@end

