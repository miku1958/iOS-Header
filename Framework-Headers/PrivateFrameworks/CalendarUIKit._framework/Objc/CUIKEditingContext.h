//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKEditingContextGroup, CUIKEditingManager, NSArray;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate, CUIKEditingContextObserver, CUIKUndoDelegate;

@interface CUIKEditingContext : NSObject
{
    BOOL _isActive;
    BOOL _isOpen;
    CUIKEditingContextGroup *_group;
    CUIKEditingManager *_editingManager;
    unsigned long long _interfaceType;
    id<CUIKDecisionDelegate> _decisionDelegate;
    id<CUIKUndoDelegate> _undoDelegate;
    id<CUIKCommitDelegate> _commitDelegate;
    id<CUIKEditingContextObserver> _observer;
    NSArray *_objectsBeingEdited;
    NSArray *_pendingObserverUpdates;
    NSArray *_pendingGroupUpdates;
}

@property (weak) id<CUIKCommitDelegate> commitDelegate; // @synthesize commitDelegate=_commitDelegate;
@property (weak) id<CUIKDecisionDelegate> decisionDelegate; // @synthesize decisionDelegate=_decisionDelegate;
@property (weak) CUIKEditingManager *editingManager; // @synthesize editingManager=_editingManager;
@property (weak) CUIKEditingContextGroup *group; // @synthesize group=_group;
@property unsigned long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property BOOL isActive; // @synthesize isActive=_isActive;
@property BOOL isOpen; // @synthesize isOpen=_isOpen;
@property (strong) NSArray *objectsBeingEdited; // @synthesize objectsBeingEdited=_objectsBeingEdited;
@property (weak) id<CUIKEditingContextObserver> observer; // @synthesize observer=_observer;
@property (strong) NSArray *pendingGroupUpdates; // @synthesize pendingGroupUpdates=_pendingGroupUpdates;
@property (strong) NSArray *pendingObserverUpdates; // @synthesize pendingObserverUpdates=_pendingObserverUpdates;
@property (weak) id<CUIKUndoDelegate> undoDelegate; // @synthesize undoDelegate=_undoDelegate;

- (void).cxx_destruct;

@end
