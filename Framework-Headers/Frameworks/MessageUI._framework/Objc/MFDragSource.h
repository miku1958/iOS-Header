//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/UIDragInteractionDelegate_Private-Protocol.h>

@class NSString, UIDragInteraction, UIView;
@protocol MFDragSourceDelegate;

@interface MFDragSource : NSObject <UIDragInteractionDelegate_Private>
{
    struct {
        BOOL respondsToTeamDataForItem;
        BOOL respondsToTargetedPreviewForItem;
        BOOL respondsToPreviewForItem;
        BOOL respondsToSuggestedNameForItem;
        BOOL respondsToLocalObjectForItem;
        BOOL respondsToDragWillEnd;
        BOOL respondsToAllowsMoveOperation;
        BOOL respondsToIsRestrictedToMail;
        BOOL respondsToDataOwner;
    } _delegateFlags;
    BOOL _allowsDragOverridingMasterSwitch;
    UIView *_sourceView;
    id<MFDragSourceDelegate> _delegate;
    UIDragInteraction *_dragInteraction;
}

@property (nonatomic) BOOL allowsDragOverridingMasterSwitch; // @synthesize allowsDragOverridingMasterSwitch=_allowsDragOverridingMasterSwitch;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFDragSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

@end

