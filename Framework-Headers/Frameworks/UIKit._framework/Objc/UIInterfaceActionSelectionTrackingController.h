//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusedInterfaceActionPressDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSPointerArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIView, _UIInterfaceActionSelectByPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate>
{
    BOOL _scrubbingEnabled;
    BOOL _selectByPressGestureEnabled;
    BOOL _selectionFeedbackEnabled;
    UIView *_trackableContainerView;
    UIScrollView *_actionsScrollView;
    NSArray *_representationViews;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    _UIInterfaceActionSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognizer;
    NSMutableSet *_viewsRequiringSelectionGestureDisabling;
    _UIInterfaceActionSelectByPressGestureRecognizer *_selectByPressGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionRetargetFeedbackGenerator;
    NSPointerArray *_weakCooperatingSelectionTrackingControllers;
    id _scrollViewWillBeginDraggingNotificationToken;
    id _scrollViewDidEndDraggingNotificationToken;
    id _scrollViewDidEndDeceleratingNotificationToken;
    struct CGPoint _actionSelectionInitialLocationInContainerView;
}

@property (readonly, nonatomic) struct CGPoint actionSelectionInitialLocationInContainerView; // @synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView;
@property (weak, nonatomic) UIScrollView *actionsScrollView; // @synthesize actionsScrollView=_actionsScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *representationViews; // @synthesize representationViews=_representationViews;
@property (strong, nonatomic) id scrollViewDidEndDeceleratingNotificationToken; // @synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken;
@property (strong, nonatomic) id scrollViewDidEndDraggingNotificationToken; // @synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken;
@property (strong, nonatomic) id scrollViewWillBeginDraggingNotificationToken; // @synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken;
@property (nonatomic) BOOL scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property (nonatomic) BOOL selectByPressGestureEnabled; // @synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled;
@property (strong, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer; // @synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer;
@property (readonly, nonatomic) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // @synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer;
@property (nonatomic) BOOL selectionFeedbackEnabled; // @synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled;
@property (readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property (strong, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator; // @synthesize selectionRetargetFeedbackGenerator=_selectionRetargetFeedbackGenerator;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property (weak, nonatomic) UIView *trackableContainerView; // @synthesize trackableContainerView=_trackableContainerView;
@property (readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling; // @synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling;
@property (strong, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers; // @synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers;

- (void).cxx_destruct;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (id)_allGestureRecognizers;
- (BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;
- (void)_clearSystemProvidedGestureRecognizer;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;
- (void)_initializeSelectionGestureRecognizer;
- (id)_interfaceActionOfFocusedRepresentationView;
- (void)_invokeHandlerForInterfaceAction:(id)arg1;
- (BOOL)_isPresentedAndVisible;
- (void)_noteScrollView:(id)arg1 isUserScrolling:(BOOL)arg2;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_registerForScrollViewNotifications;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;
- (void)_unregisterForScrollViewNotifications;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)focusedInterfaceAction;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePressedFocusedInterfaceAction:(id)arg1;
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;

@end
