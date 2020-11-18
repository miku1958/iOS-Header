//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDropSession-Protocol.h>
#import <UIKit/_UIDragDropSessionInternal-Protocol.h>

@class NSArray, NSProgress, NSString, _UIInternalDraggingSessionDestination;
@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal>
{
    NSArray *_items;
    id<UIDragSession> _localDragSession;
    unsigned long long _progressIndicatorStyle;
    _UIInternalDraggingSessionDestination *_sessionDestination;
}

@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) long long _dataOwner;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) id<UIDragSession> localDragSession; // @synthesize localDragSession=_localDragSession;
@property (readonly, nonatomic, getter=_operationMask) unsigned long long operationMask;
@property (readonly) NSProgress *progress;
@property (nonatomic) unsigned long long progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination; // @synthesize sessionDestination=_sessionDestination;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createItemsOfClass:(Class)arg1 synchronouslyIfPossible:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_draggingSession;
- (void)_itemsNeedUpdate:(id)arg1;
- (BOOL)canLoadObjectsOfClass:(Class)arg1;
- (BOOL)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (id)initWithSessionDestination:(id)arg1;
- (id)loadObjectsOfClass:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGPoint)locationInView:(id)arg1;

@end

