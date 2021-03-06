//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, PUAssetPickerActivityProgressViewController, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface PUAssetPickerActivityProgressController : NSObject
{
    PUAssetPickerActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_progressContainerView;
    BOOL _isShowing;
    NSString *_title;
    NSString *_message;
    CDUnknownBlockType _cancellationHandler;
    NSProgress *_progress;
}

@property (copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property (nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_setupAlertController;
- (void)hideAnimated:(BOOL)arg1;
- (id)init;
- (void)showAnimated:(BOOL)arg1 sourceViewController:(id)arg2;

@end

