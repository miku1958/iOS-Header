//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>

@class NSString;

@interface RCLayoutMetrics : NSObject <NSCopying>
{
    CDStruct_a8723754 _metricInfo;
    NSString *_label;
    double _hPresentedRecordMemoHeight;
}

@property (readonly, nonatomic) double hDeltaAdditionalInsetFromWaveformEdge;
@property (readonly, nonatomic) double hDeltaControlButtonsSpacing;
@property (readonly, nonatomic) double hDeltaTrimProgressInset;
@property (readonly, nonatomic) double hDetailNavigationBarInset;
@property (readonly, nonatomic) BOOL hIsWaveformFlushToEdges;
@property (nonatomic) double hPresentedRecordMemoHeight; // @synthesize hPresentedRecordMemoHeight=_hPresentedRecordMemoHeight;
@property (readonly, nonatomic) double hTrimModeInset;
@property (readonly, nonatomic) double vDeltaControlsBottomToBottom;
@property (readonly, nonatomic) double vDeltaControlsTopToNavigationBottom;
@property (readonly, nonatomic) double vDeltaDateBaselineToControlsTop;
@property (readonly, nonatomic) double vDeltaLockAbsoluteTopToWaveformTop;
@property (readonly, nonatomic) double vDeltaTimeBaselineToTitleBaseline;
@property (readonly, nonatomic) double vDeltaTitleBaselineToDateBaseline;
@property (readonly, nonatomic) double vDeltaWaveformToTimeBaseline;

+ (id)defaultMetrics;
+ (id)largeHorizontalMetrics;
+ (id)largeVerticalMetrics;
+ (id)normalVerticalMetrics;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1;
- (void)setMetricInfo:(CDStruct_a8723754)arg1;

@end
