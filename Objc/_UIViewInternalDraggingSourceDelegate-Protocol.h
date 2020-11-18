//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIView, _UIInternalDraggingSessionSource;

@protocol _UIViewInternalDraggingSourceDelegate <NSObject>
- (BOOL)_canDragFromView:(UIView *)arg1;
- (long long)_dataOwnerOfDragFromView:(UIView *)arg1;
- (NSArray *)_itemsToDragFromView:(UIView *)arg1;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (void)_view:(UIView *)arg1 willBeginDraggingWithSession:(_UIInternalDraggingSessionSource *)arg2;
- (void)_viewFailedToDrag:(UIView *)arg1;
- (BOOL)_viewSupportsSystemDrag:(UIView *)arg1;
@end

