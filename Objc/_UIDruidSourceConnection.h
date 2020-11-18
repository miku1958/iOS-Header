//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_DUIClientSessionSource-Protocol.h>
#import <UIKit/_DUIClientSource-Protocol.h>

@class NSXPCConnection;
@protocol _DUIServerSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDruidSourceConnection : NSObject <_DUIClientSource, _DUIClientSessionSource>
{
    NSXPCConnection *_connection;
    id<_DUIServerSessionSource> _serverSession;
    BOOL _cancelled;
    CDUnknownBlockType _itemImageProviderBlock;
    CDUnknownBlockType _itemDetailProviderBlock;
    CDUnknownBlockType _itemUpdateBlock;
    CDUnknownBlockType _canHandOffCancelledItemsBlock;
    CDUnknownBlockType _handOffCancelledItemsBlock;
    CDUnknownBlockType _dragCompletionBlock;
    CDUnknownBlockType _dataTransferFinishedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType canHandOffCancelledItemsBlock; // @synthesize canHandOffCancelledItemsBlock=_canHandOffCancelledItemsBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) CDUnknownBlockType dataTransferFinishedBlock; // @synthesize dataTransferFinishedBlock=_dataTransferFinishedBlock;
@property (copy, nonatomic) CDUnknownBlockType dragCompletionBlock; // @synthesize dragCompletionBlock=_dragCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffCancelledItemsBlock; // @synthesize handOffCancelledItemsBlock=_handOffCancelledItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType itemDetailProviderBlock; // @synthesize itemDetailProviderBlock=_itemDetailProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemImageProviderBlock; // @synthesize itemImageProviderBlock=_itemImageProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemUpdateBlock; // @synthesize itemUpdateBlock=_itemUpdateBlock;

- (void).cxx_destruct;
- (void)_internalDragFailed;
- (id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
- (void)beginDragWithTouches:(id)arg1 touchRoutingPolicy:(id)arg2 items:(id)arg3 sourceDataOwner:(long long)arg4 accessibilityEndpoint:(id)arg5 centroid:(struct CGPoint)arg6 completion:(CDUnknownBlockType)arg7;
- (void)cancelDrag;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)dataTransferSessionFinished;
- (void)dirtyItems:(id)arg1;
- (void)dragDidExitApp;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
- (id)init;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)takeOutsideAppSourceOperationMask:(unsigned long long)arg1 prefersFullSizePreview:(BOOL)arg2;
- (oneway void)updateDetail:(id)arg1 forItemIndex:(unsigned long long)arg2;

@end

