//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject
{
    id<PXActionPerformerDelegate> _performerDelegate;
}

@property (weak, nonatomic) id<PXActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;

+ (CDUnknownBlockType)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)previewActionForActionType:(id)arg1;
- (id)previewActionGroupForActionType:(id)arg1;

@end

