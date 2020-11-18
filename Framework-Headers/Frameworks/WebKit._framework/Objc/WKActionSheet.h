//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol WKActionSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheet : UIAlertController
{
    id<WKActionSheetDelegate> _sheetDelegate;
    unsigned long long _arrowDirections;
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;
}

@property (nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property (nonatomic) id<WKActionSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didRotateAndLayout;
- (void)dealloc;
- (void)didRotate;
- (void)doneWithSheet;
- (id)init;
- (BOOL)presentSheet;
- (BOOL)presentSheetFromRect:(struct CGRect)arg1;
- (void)updateSheetPosition;
- (void)willRotate;

@end

