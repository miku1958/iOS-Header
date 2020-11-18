//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenMeteredGaugeImage : CLKComplicationTemplateGraphicCircular
{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_imageProvider;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property (copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;

@end
