//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/LSOpenResourceOperationDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDraggingPolicyHandling-Protocol.h>

@class NSMapTable, NSString;

@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling>
{
    NSMapTable *_sourceURLsByOperationMapTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestSupportedUTIForDragItem:(id)arg1 supportedTypes:(id)arg2;
- (id)_currentDraggingIconViewInView:(id)arg1 forLocation:(struct CGPoint)arg2;
- (void)_removeAnySourceURLForOperation:(id)arg1;
- (BOOL)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2;
- (long long)dragPlacementForDropSession:(id)arg1 iconListView:(id)arg2 point:(struct CGPoint)arg3 icon:(id)arg4 options:(unsigned long long)arg5;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (id)init;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;

@end

