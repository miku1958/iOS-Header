//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTextView;

@interface ICSharedScrollClampingController : NSObject
{
    long long _scrollClampingTopTextIndex;
    double _scrollClampingTopOffsetFactor;
    long long _scrollClampingStack;
    ICTextView *_textView;
    double _scrollClampingTurnOffDelay;
    double _scrollClampingTopOffsetLineFragmentHeight;
}

@property (readonly) long long scrollClampingStack; // @synthesize scrollClampingStack=_scrollClampingStack;
@property double scrollClampingTopOffsetFactor; // @synthesize scrollClampingTopOffsetFactor=_scrollClampingTopOffsetFactor;
@property (nonatomic) double scrollClampingTopOffsetLineFragmentHeight; // @synthesize scrollClampingTopOffsetLineFragmentHeight=_scrollClampingTopOffsetLineFragmentHeight;
@property long long scrollClampingTopTextIndex; // @synthesize scrollClampingTopTextIndex=_scrollClampingTopTextIndex;
@property (readonly, nonatomic) double scrollClampingTurnOffDelay; // @synthesize scrollClampingTurnOffDelay=_scrollClampingTurnOffDelay;
@property (readonly, weak, nonatomic) ICTextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (void)clamp;
- (id)clampedYValue;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(BOOL)arg2;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(BOOL)arg2 clampingTurnOffDelay:(double)arg3;
- (BOOL)isClamped;
- (void)mergeRelatedOperationsDidEnd:(id)arg1;
- (void)mergeRelatedOperationsWillBegin:(id)arg1;
- (void)setScrollClampingStack:(long long)arg1;
- (void)textStorageWillEndEditingNotification:(id)arg1;
- (void)topTextIndex:(unsigned long long *)arg1 topTextOffset:(double *)arg2 topTextFragmentHeight:(double *)arg3;
- (void)unclamp;
- (void)unclampWithMergeUpdates:(BOOL)arg1;

@end

