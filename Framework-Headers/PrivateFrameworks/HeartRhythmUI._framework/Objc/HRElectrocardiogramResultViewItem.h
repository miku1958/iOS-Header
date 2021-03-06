//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HRElectrocardiogramResultViewItem : NSObject
{
    NSString *_badge;
    NSString *_title;
    NSString *_numberedTitle;
    NSString *_visibleBodyText;
    NSString *_videoPath;
    NSArray *_expandedContentItems;
}

@property (readonly, copy, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property (readonly, nonatomic) NSArray *expandedContentItems; // @synthesize expandedContentItems=_expandedContentItems;
@property (readonly, copy, nonatomic) NSString *numberedTitle; // @synthesize numberedTitle=_numberedTitle;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property (readonly, copy, nonatomic) NSString *visibleBodyText; // @synthesize visibleBodyText=_visibleBodyText;

+ (id)_makeItemForAtrialFibrillationAlgorithmVersionOne;
+ (id)_makeItemForAtrialFibrillationAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1;
+ (id)_makeItemForHighOrLowAbove120Below50AlgorithmVersionOne;
+ (id)_makeItemForHighOrLowAbove150Below50AlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1;
+ (id)_makeItemForInconclusiveAlgorithmVersionOneWithLearnMoreDelegate:(id)arg1;
+ (id)_makeItemForInconclusiveAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1 withLearnMoreDelegate:(id)arg2;
+ (id)_makeItemForPoorRecordingAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1 withLearnMoreDelegate:(id)arg2;
+ (id)_makeItemForSinusRhythmAlgorithmVersionOne;
+ (id)viewItemWithClassification:(unsigned long long)arg1 sampleAlgorithmVersion:(id)arg2 forAlgorithmVersion:(long long)arg3 learnMoreDelegate:(id)arg4;
+ (id)viewItemWithClassification:(unsigned long long)arg1 sampleAlgorithmVersion:(id)arg2 forAlgorithmVersion:(long long)arg3 upgradingFromAlgorithmVersion:(long long)arg4 learnMoreDelegate:(id)arg5;
- (void).cxx_destruct;
- (id)initWithBadge:(id)arg1 title:(id)arg2 numberedTitle:(id)arg3 visibleBodyText:(id)arg4 videoPath:(id)arg5 expandedContentItems:(id)arg6;

@end

