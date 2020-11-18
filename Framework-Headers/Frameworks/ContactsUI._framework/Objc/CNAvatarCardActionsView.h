//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNAvatarCardActionsTableView, CNQuickActionsManager, NSArray, NSIndexPath, NSString, UIGestureRecognizer, UISelectionFeedbackGenerator;
@protocol CNAvatarCardActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionsView : UIView <UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _actionsReversed;
    BOOL _bypassActionValidation;
    BOOL _dismissesBeforePerforming;
    BOOL _expanded;
    NSArray *_contacts;
    NSArray *_actionCategories;
    id<CNAvatarCardActionsViewDelegate> _delegate;
    CNQuickActionsManager *_actionsManager;
    NSArray *_actions;
    CNAvatarCardActionsTableView *_tableView;
    NSIndexPath *_highlightedIndexPath;
    UIGestureRecognizer *_rolloverGestureRecognizer;
    UIGestureRecognizer *_selectionGestureRecognizer;
    UISelectionFeedbackGenerator *_retargetBehavior;
    struct CGPoint _initialLocation;
    struct CGRect _actionsImageFrame;
}

@property (copy, nonatomic) NSArray *actionCategories; // @synthesize actionCategories=_actionCategories;
@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (nonatomic) struct CGRect actionsImageFrame; // @synthesize actionsImageFrame=_actionsImageFrame;
@property (strong, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property (nonatomic) BOOL actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property (nonatomic) BOOL bypassActionValidation; // @synthesize bypassActionValidation=_bypassActionValidation;
@property (strong, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNAvatarCardActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissesBeforePerforming; // @synthesize dismissesBeforePerforming=_dismissesBeforePerforming;
@property (nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property (nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property (readonly, nonatomic, getter=isPerformingAction) BOOL performingAction;
@property (strong, nonatomic) UISelectionFeedbackGenerator *retargetBehavior; // @synthesize retargetBehavior=_retargetBehavior;
@property (strong, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // @synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer;
@property (strong, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property (readonly) Class superclass;
@property (strong, nonatomic) CNAvatarCardActionsTableView *tableView; // @synthesize tableView=_tableView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)_actionAtIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 forAction:(id)arg2;
- (void)_dismissCardAnimated:(BOOL)arg1;
- (id)_effectiveManagerActions;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_indexPathForGestureRecognizer:(id)arg1;
- (void)_performActionAtIndexPath:(id)arg1;
- (void)_setHighlightedIndexPath:(id)arg1 isChange:(BOOL)arg2;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_updateActionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateAllSeparators;
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(BOOL)arg5;
- (void)_updateWithActions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)performHighlightedAction;
- (void)refreshActions;
- (void)reloadData;
- (void)reloadDataWithBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)resetWithBlock:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateRollover:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
