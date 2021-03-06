//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_bottomTextProvider;
    CLKTextProvider *_centerTextProvider;
}

@property (copy, nonatomic) CLKTextProvider *bottomTextProvider; // @synthesize bottomTextProvider=_bottomTextProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // @synthesize centerTextProvider=_centerTextProvider;
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;

+ (id)templateWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;
- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;

@end

