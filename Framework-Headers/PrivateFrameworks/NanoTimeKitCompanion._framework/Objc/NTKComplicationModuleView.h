//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModuleView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay>
{
    BOOL canUseCurvedText;
    BOOL _isXL;
    id<NTKComplicationDisplayObserver> displayObserver;
}

@property (nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL isXL; // @synthesize isXL=_isXL;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

+ (id)_extraLargeAlarmImageProvider;
+ (id)_extraLargeStopwatchImageProvider;
+ (id)_extraLargeTimerImageProvider;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned long long)arg1;
+ (id)smallModuleViewForComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_newImageViewSubview;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id *)arg3 inRange:(struct _NSRange)arg4;

@end
