//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSSet, SKUILibraryItem, SKUILibraryItemState;

@protocol SKUILibraryInterface <NSObject>
- (void)enumerateStatesForLibraryItems:(NSSet *)arg1 usingBlock:(void (^)(SKUILibraryItem *, SKUILibraryItemState *, BOOL *))arg2;
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;

@optional
- (NSSet *)exposedPlatformItemKinds;
- (BOOL)performActionForLibraryItem:(SKUILibraryItem *)arg1;
- (void)removeMediaItemsForLibraryItems:(NSArray *)arg1;
- (SKUILibraryItemState *)stateForLibraryItemAfterLibraryIntegration:(SKUILibraryItem *)arg1;
@end

