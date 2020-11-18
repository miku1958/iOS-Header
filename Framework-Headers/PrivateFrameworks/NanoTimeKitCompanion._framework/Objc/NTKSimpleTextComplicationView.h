//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, CLKFont, NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>
{
    BOOL canUseCurvedText;
    id<NTKComplicationDisplayObserver> displayObserver;
    CLKFont *_font;
    NTKColoringLabel *_label;
    CLKDevice *_device;
    CLKComplicationTemplate *_template;
}

@property (nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (strong, nonatomic) CLKFont *font; // @synthesize font=_font;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (strong, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (id)complicationTemplate;
- (id)init;
- (void)layoutSubviews;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;

@end
