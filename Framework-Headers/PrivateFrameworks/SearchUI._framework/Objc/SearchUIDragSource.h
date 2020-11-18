//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/UIDragInteractionDelegate-Protocol.h>
#import <SearchUI/UIDragInteractionDelegate_Private-Protocol.h>

@class NSString, SearchUIDropTarget, UIView;
@protocol SearchUIDragObject;

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>
{
    id<SearchUIDragObject> _dragObject;
    UIView *_overrideDragPreviewView;
    UIView *_dragSourceView;
    SearchUIDropTarget *_dropTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) id<SearchUIDragObject> dragObject; // @synthesize dragObject=_dragObject;
@property (weak) UIView *dragSourceView; // @synthesize dragSourceView=_dragSourceView;
@property (strong) SearchUIDropTarget *dropTarget; // @synthesize dropTarget=_dropTarget;
@property (readonly) unsigned long long hash;
@property (strong) UIView *overrideDragPreviewView; // @synthesize overrideDragPreviewView=_overrideDragPreviewView;
@property (readonly) Class superclass;

+ (id)dragSourceForView:(id)arg1 dragObject:(id)arg2;
+ (BOOL)draggingSupported;
- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (BOOL)_shouldPerformHitTestingForDragSessionInView:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragParametersForPreviewView:(id)arg1;
- (id)initWithView:(id)arg1 dragObject:(id)arg2;
- (BOOL)isMailDrag;

@end

