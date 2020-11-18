//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicContextualAlertAction.h>

@interface MusicContextualLibraryUpdateAlertAction : MusicContextualAlertAction
{
    BOOL _isAddAction;
    BOOL _isDeleteLibraryUpdate;
    BOOL _isKeepLocalAction;
}

@property (readonly, nonatomic) BOOL isAddAction; // @synthesize isAddAction=_isAddAction;
@property (readonly, nonatomic) BOOL isDeleteLibraryUpdate; // @synthesize isDeleteLibraryUpdate=_isDeleteLibraryUpdate;
@property (readonly, nonatomic) BOOL isKeepLocalAction; // @synthesize isKeepLocalAction=_isKeepLocalAction;

+ (void)_showDeleteConfirmationActionAlertControllerWithTitle:(id)arg1 deleteActionTitle:(id)arg2 additionalPresentationHandler:(CDUnknownBlockType)arg3 deletionHandler:(CDUnknownBlockType)arg4 didDismissHandler:(CDUnknownBlockType)arg5;
+ (void)getContextualLibraryAddRemoveAction:(id *)arg1 keepLocalAction:(id *)arg2 forEntityValueContext:(id)arg3 overrideItemEntityProvider:(id)arg4 shouldDismissHandler:(CDUnknownBlockType)arg5 additionalPresentationHandler:(CDUnknownBlockType)arg6 didDismissHandler:(CDUnknownBlockType)arg7;
+ (id)notificationTokenForOverrideItemEntityProvider:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
