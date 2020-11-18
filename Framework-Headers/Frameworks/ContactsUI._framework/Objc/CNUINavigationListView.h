//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, _CNUINavigationListViewPermissiveGestureRecognizerDelegate;
@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;

__attribute__((visibility("hidden")))
@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate>
{
    id<CNUINavigationListViewDataSource> _navigationListViewDataSource;
    id<CNUINavigationListViewDelegate> _navigationListViewDelegate;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    UIGestureRecognizer *_additionalSelectionGestureRecognizer;
    NSIndexPath *_trackedElementIndexPath;
    UISelectionFeedbackGenerator *_retargetBehavior;
    _CNUINavigationListViewPermissiveGestureRecognizerDelegate *_selectionGestureRecognizerDelegate;
}

@property (strong, nonatomic) UIGestureRecognizer *additionalSelectionGestureRecognizer; // @synthesize additionalSelectionGestureRecognizer=_additionalSelectionGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CNUINavigationListViewDataSource> navigationListViewDataSource; // @synthesize navigationListViewDataSource=_navigationListViewDataSource;
@property (weak, nonatomic) id<CNUINavigationListViewDelegate> navigationListViewDelegate; // @synthesize navigationListViewDelegate=_navigationListViewDelegate;
@property (strong, nonatomic) UISelectionFeedbackGenerator *retargetBehavior; // @synthesize retargetBehavior=_retargetBehavior;
@property (strong, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property (strong, nonatomic) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate; // @synthesize selectionGestureRecognizerDelegate=_selectionGestureRecognizerDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSIndexPath *trackedElementIndexPath; // @synthesize trackedElementIndexPath=_trackedElementIndexPath;

+ (BOOL)disableHeaderAccessibilityElements;
- (void).cxx_destruct;
- (void)clearAdditionalSelectionGestureRecognizer;
- (id)dequeueDetailNavigationListViewCell;
- (id)dequeueNavigationListViewCell;
- (id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1;
- (id)elementAtLocation:(struct CGPoint)arg1;
- (void)handlePanGestureRecognizerUpdate:(id)arg1;
- (void)handleSelectionGestureRecognizerUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (BOOL)location:(struct CGPoint)arg1 isInAccessoryControlTouchArea:(id)arg2;
- (void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint)arg1 trackedElementIndexPath:(id)arg2;
- (void)startTrackingElementAtIndexPath:(id)arg1;
- (void)startTrackingSelectionFromGestureRecognizer:(id)arg1;
- (void)stopTrackingElementAtIndexPath:(id)arg1;
- (void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(struct CGPoint)arg2;
- (void)willMoveToWindow:(id)arg1;

@end

