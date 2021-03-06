//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularStackImage : CLKComplicationTemplateGraphicExtraLargeCircular
{
    CLKFullColorImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;

+ (id)templateWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;
- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;

@end

