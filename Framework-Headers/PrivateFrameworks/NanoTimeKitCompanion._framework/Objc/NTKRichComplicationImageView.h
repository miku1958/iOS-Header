//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKDevice, NSString, NTKStackedImagesComplicationImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>
{
    BOOL _useAccentColor;
    BOOL _hostingOverrideView;
    BOOL _paused;
    BOOL _inMonochromeMode;
    BOOL _prefersFilterOverTransition;
    id<CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UIView *_richComplicationImageView;
    NTKStackedImagesComplicationImageView *_monochromeImageView;
    long long _monochromeFilterType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView; // @synthesize hostingOverrideView=_hostingOverrideView;
@property (nonatomic) BOOL inMonochromeMode; // @synthesize inMonochromeMode=_inMonochromeMode;
@property (nonatomic) long long monochromeFilterType; // @synthesize monochromeFilterType=_monochromeFilterType;
@property (weak, nonatomic) NTKStackedImagesComplicationImageView *monochromeImageView; // @synthesize monochromeImageView=_monochromeImageView;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) BOOL prefersFilterOverTransition; // @synthesize prefersFilterOverTransition=_prefersFilterOverTransition;
@property (weak, nonatomic) UIView *richComplicationImageView; // @synthesize richComplicationImageView=_richComplicationImageView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useAccentColor; // @synthesize useAccentColor=_useAccentColor;

- (void).cxx_destruct;
- (long long)_filterStyle;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (void)enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithDevice:(id)arg1 useAccentColor:(BOOL)arg2;
- (id)interpolatedColorForView:(id)arg1;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)setImageProvider:(id)arg1 reason:(long long)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1;

@end

