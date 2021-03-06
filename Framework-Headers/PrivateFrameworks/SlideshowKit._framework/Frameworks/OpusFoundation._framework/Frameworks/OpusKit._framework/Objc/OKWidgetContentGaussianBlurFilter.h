//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetBasicFilter.h>

#import <OpusKit/JSOKWidgetContentGaussianBlurFilter-Protocol.h>

@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>
{
    NSNumber *_inputRadius;
}

@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;

+ (id)filterWithInputRadius:(id)arg1;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)dealloc;
- (id)inputKeys;
- (id)outputImage;
- (void)setSettingInputRadius:(id)arg1;
- (id)settingInputRadius;

@end

