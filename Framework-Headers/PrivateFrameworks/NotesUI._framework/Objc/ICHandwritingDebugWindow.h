//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIView;
@protocol ICHandwritingDebugDelegate;

@interface ICHandwritingDebugWindow : UIWindow
{
    BOOL _draggingWindow;
    BOOL _resizingWindow;
    UIView *_resizeTriangle;
    struct CGPoint _initialTouchLocation;
}

@property (nonatomic, getter=isDraggingWindow) BOOL draggingWindow; // @synthesize draggingWindow=_draggingWindow;
@property (weak, nonatomic) id<ICHandwritingDebugDelegate> handwritingDebugDelegate;
@property (nonatomic) struct CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property (strong, nonatomic) UIView *resizeTriangle; // @synthesize resizeTriangle=_resizeTriangle;
@property (nonatomic, getter=isResizingWindow) BOOL resizingWindow; // @synthesize resizingWindow=_resizingWindow;

+ (struct CGRect)preferredFrame;
+ (void)savePreferredFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)handwritingDebugViewController;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)navigationController;
- (void)refresh;
- (void)sharedInit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateResizeTriangleFrame;

@end

