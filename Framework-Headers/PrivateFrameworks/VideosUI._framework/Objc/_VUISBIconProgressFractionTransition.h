//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/_VUISBIconProgressTransition.h>

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressFractionTransition : _VUISBIconProgressTransition
{
    double _targetFraction;
}

+ (id)newTransitionToFraction:(double)arg1;
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (BOOL)isCompleteWithView:(id)arg1;
- (void)updateToFraction:(double)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;

@end
