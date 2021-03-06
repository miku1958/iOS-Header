//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate
{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
}

@property (copy, nonatomic) CLKTextProvider *line1TextProvider; // @synthesize line1TextProvider=_line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;

+ (id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;
- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;
- (id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;

@end

