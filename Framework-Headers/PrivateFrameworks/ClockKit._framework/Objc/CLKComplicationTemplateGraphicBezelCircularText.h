//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate
{
    CLKComplicationTemplateGraphicCircular *_circularTemplate;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKComplicationTemplateGraphicCircular *circularTemplate; // @synthesize circularTemplate=_circularTemplate;
@property (copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;

- (void).cxx_destruct;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

