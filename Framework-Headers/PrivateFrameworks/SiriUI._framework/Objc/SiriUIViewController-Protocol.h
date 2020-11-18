//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AceObject, NSString;
@protocol SiriUIViewController;

@protocol SiriUIViewController <NSObject>

@property (strong, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;

- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)wasAddedToTranscript;

@optional
- (double)baselineOffsetFromBottom;
- (double)desiredHeight;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredPinnedTopPadding;
- (double)desiredTopPaddingBelowController:(id<SiriUIViewController>)arg1;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;
- (void)handleAceCommand:(AceObject *)arg1;
- (NSString *)navigationTitle;
- (BOOL)shouldHidePriorViews;
- (void)siriDidScrollVisible:(BOOL)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(BOOL)arg2;
@end
