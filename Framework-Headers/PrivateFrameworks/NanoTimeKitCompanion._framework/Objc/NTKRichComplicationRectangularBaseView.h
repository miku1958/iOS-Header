//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView
{
}

+ (void)startDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(BOOL)arg3;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;

@end

