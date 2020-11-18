//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISInput.h>

@class UIGestureRecognizer;
@protocol ISGestureInputDelegate;

@interface ISGestureInput : ISInput
{
    struct {
        BOOL respondsToViewHostingGestureRecognizer;
        BOOL respondsToDelegateForGestureRecognizer;
        BOOL respondsToGestureRecognizerDidChange;
    } _delegateFlags;
    BOOL __needsUpdateGestureRecognizer;
    UIGestureRecognizer *_gestureRecognizer;
    id<ISGestureInputDelegate> _delegate;
}

@property (nonatomic, setter=_setNeedsUpdateGestureRecognizer:) BOOL _needsUpdateGestureRecognizer; // @synthesize _needsUpdateGestureRecognizer=__needsUpdateGestureRecognizer;
@property (weak, nonatomic) id<ISGestureInputDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;

- (void).cxx_destruct;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizerIfNeeded;
- (void)cancelGestureRecognizer;
- (void)dealloc;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (void)invalidateGestureRecognizer;
- (id)newGestureRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
