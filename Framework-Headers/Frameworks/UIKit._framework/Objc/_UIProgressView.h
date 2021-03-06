//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSProgress, _UICircleProgressView;

__attribute__((visibility("hidden")))
@interface _UIProgressView : UIView
{
    _UICircleProgressView *_progressView;
    NSProgress *_trackedProgress;
}

@property (strong, nonatomic) NSProgress *trackedProgress; // @synthesize trackedProgress=_trackedProgress;

- (void).cxx_destruct;
- (void)_updateProgressValue;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

