//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_DUIClientDestination-Protocol.h>
#import <UIKitCore/_DUIClientSessionDestination-Protocol.h>
#import <UIKitCore/_UIDruidDestinationConnection-Protocol.h>

@class NSXPCConnection;
@protocol _DUIServerSessionDestination;

__attribute__((visibility("hidden")))
@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection>
{
    NSXPCConnection *_connection;
    id<_DUIServerSessionDestination> _serverSession;
    unsigned int _sessionIdentifier;
    CDUnknownBlockType _connectionBlock;
    CDUnknownBlockType _dragEndBlock;
    CDUnknownBlockType _dropPerformBlock;
    CDUnknownBlockType _handOffDroppedItemsBlock;
    CDUnknownBlockType _itemDetailProviderBlock;
    CDUnknownBlockType _itemImageProviderBlock;
    CDUnknownBlockType _itemsAddedBlock;
    CDUnknownBlockType _itemUpdateBlock;
    long long _state;
}

@property (copy, nonatomic) CDUnknownBlockType connectionBlock; // @synthesize connectionBlock=_connectionBlock;
@property (copy, nonatomic) CDUnknownBlockType dragEndBlock; // @synthesize dragEndBlock=_dragEndBlock;
@property (copy, nonatomic) CDUnknownBlockType dropPerformBlock; // @synthesize dropPerformBlock=_dropPerformBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffDroppedItemsBlock; // @synthesize handOffDroppedItemsBlock=_handOffDroppedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType itemDetailProviderBlock; // @synthesize itemDetailProviderBlock=_itemDetailProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemImageProviderBlock; // @synthesize itemImageProviderBlock=_itemImageProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemUpdateBlock; // @synthesize itemUpdateBlock=_itemUpdateBlock;
@property (copy, nonatomic) CDUnknownBlockType itemsAddedBlock; // @synthesize itemsAddedBlock=_itemsAddedBlock;
@property (readonly, nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (oneway void)addedItemsWithDetails:(id)arg1 itemCollection:(id)arg2;
- (void)dirtyItems:(id)arg1;
- (oneway void)dragEnded;
- (void)enableKeyboardIfNeeded;
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
- (id)initWithSessionIdentifier:(unsigned int)arg1;
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sawDragEndEvent;
- (void)takePotentialDrop:(id)arg1;
- (oneway void)updateDetail:(id)arg1 forItemIndex:(unsigned long long)arg2;

@end

