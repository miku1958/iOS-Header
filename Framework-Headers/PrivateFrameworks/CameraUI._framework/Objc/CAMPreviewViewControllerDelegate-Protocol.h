//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPreviewViewController, UIGestureRecognizer;

@protocol CAMPreviewViewControllerDelegate <NSObject>
- (BOOL)previewViewController:(CAMPreviewViewController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)previewViewControllerDidChangeFocusOrExposureLocked:(CAMPreviewViewController *)arg1 shouldAnimate:(BOOL)arg2;
@end

