//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeStackImage : CLKComplicationTemplate
{
    CLKImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

@property (nonatomic) BOOL highlightLine2;
@property (nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property (copy, nonatomic) CLKImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;

+ (struct CGSize)imageSize;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

