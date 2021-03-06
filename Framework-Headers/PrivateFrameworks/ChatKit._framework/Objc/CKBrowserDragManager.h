//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKBrowserDragViewControllerDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKBrowserDragViewController, NSString, UILongPressGestureRecognizer, UIView, UIViewController, UIWindow;
@protocol CKBrowserDragControllerDelegate, CKBrowserDragControllerTranscriptDelegate;

@interface CKBrowserDragManager : NSObject <CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate>
{
    id<CKBrowserDragControllerDelegate> _delegate;
    id<CKBrowserDragControllerTranscriptDelegate> _transcriptDelegate;
    id _currentItem;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UIView *_targetView;
    CKBrowserDragViewController *_dragViewController;
    UIWindow *_dragWindow;
    UIViewController *_presentingViewController;
    struct CGPoint _locationInView;
}

@property (strong, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBrowserDragControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKBrowserDragViewController *dragViewController; // @synthesize dragViewController=_dragViewController;
@property (strong, nonatomic) UIWindow *dragWindow; // @synthesize dragWindow=_dragWindow;
@property (strong, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint locationInView; // @synthesize locationInView=_locationInView;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property (weak, nonatomic) id<CKBrowserDragControllerTranscriptDelegate> transcriptDelegate; // @synthesize transcriptDelegate=_transcriptDelegate;

- (void).cxx_destruct;
- (void)beginDraggingItem:(id)arg1 withAnimatedDragImage:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)beginDraggingItem:(id)arg1 withDragImage:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)browserDragViewController:(id)arg1 dragEndedWithTarget:(id)arg2;
- (void)browserDragViewController:(id)arg1 draggedWithTarget:(id)arg2;
- (id)browserDragViewControllerTargetView:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTargetView:(id)arg1;
- (void)setPlusButtonHidden:(BOOL)arg1;
- (void)tapRecognized:(id)arg1;
- (BOOL)usesSeparateDragWindow;

@end

