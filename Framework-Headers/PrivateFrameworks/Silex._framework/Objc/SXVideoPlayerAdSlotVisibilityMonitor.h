//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/SVVisibilityMonitor.h>

@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SVVisibilityMonitor
{
    SVKeyValueObserver *_observer;
}

@property (readonly, nonatomic) SVKeyValueObserver *observer; // @synthesize observer=_observer;

- (void).cxx_destruct;
- (id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2;

@end

