//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NSNumberFormatter *_indexNumberFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumberFormatter *indexNumberFormatter; // @synthesize indexNumberFormatter=_indexNumberFormatter;
@property (readonly) Class superclass;

+ (id)sharedFormatter;
- (void).cxx_destruct;
- (id)_localizedIndexForConditions:(id)arg1;
- (id)_richCircularTemplateForComplicationFamily:(long long)arg1 conditions:(id)arg2 location:(id)arg3;
- (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)circularMediumTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)graphicBezelTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicCircularTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicCornerTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicExtraLargeTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)init;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 conditions:(id)arg3;
- (id)modularSmallTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (id)utilitarianLargeTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;

@end
