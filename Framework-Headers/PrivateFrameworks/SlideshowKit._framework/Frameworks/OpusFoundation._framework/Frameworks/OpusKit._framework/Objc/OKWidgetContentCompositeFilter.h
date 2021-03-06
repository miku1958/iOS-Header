//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetBasicFilter.h>

#import <OpusKit/JSOKWidgetContentCompositeFilter-Protocol.h>

@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter>
{
    NSArray *_inputFilters;
    NSArray *_inputBackgroundFilters;
    NSString *_inputCompositionFilterName;
}

@property (strong, nonatomic) NSArray *inputBackgroundFilters; // @synthesize inputBackgroundFilters=_inputBackgroundFilters;
@property (strong, nonatomic) NSString *inputCompositionFilterName; // @synthesize inputCompositionFilterName=_inputCompositionFilterName;
@property (strong, nonatomic) NSArray *inputFilters; // @synthesize inputFilters=_inputFilters;

+ (id)filterWithInputFilters:(id)arg1 inputBackgroundFilters:(id)arg2 inputCompositionFilterName:(id)arg3;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)dealloc;
- (id)inputKeys;
- (id)outputImage;
- (void)setSettingInputBackgroundFilters:(id)arg1;
- (void)setSettingInputCompositionFilterName:(id)arg1;
- (void)setSettingInputFilters:(id)arg1;

@end

