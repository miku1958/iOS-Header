//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicCircularStackViewTextBridge : CLKComplicationTemplateGraphicCircular
{
    NSData *_contentData;
    CLKTextProvider *_textProvider;
}

@property (strong, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;
@property (copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)arg1;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;

@end

