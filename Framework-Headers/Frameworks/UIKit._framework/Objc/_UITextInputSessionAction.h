//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UITextInputSessionBeganAction, _UITextInputSessionDeletionAction, _UITextInputSessionInsertionAction, _UITextInputSessionRedoAction, _UITextInputSessionSelectionAction, _UITextInputSessionUndoAction;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAction : NSObject
{
    long long _source;
    struct _NSRange _relativeRangeBefore;
}

@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) struct _NSRange relativeRangeBefore; // @synthesize relativeRangeBefore=_relativeRangeBefore;
@property (nonatomic) long long source; // @synthesize source=_source;

- (long long)mergeActionIfPossible:(id)arg1;

@end

