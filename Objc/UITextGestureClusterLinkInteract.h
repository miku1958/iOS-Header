//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterLinkInteract : UITextGestureCluster
{
    BOOL _isTryingToHighlightLink;
}

- (void)_resetForLink;
- (void)cancelInteractionWithLink;
- (BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (BOOL)tapOnLinkWithGesture:(id)arg1;

@end

