//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateModularSmallSimpleImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

