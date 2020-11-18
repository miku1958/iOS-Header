//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, _UIDraggingSession;
@protocol UICoordinateSpace;

@protocol _UIDraggingInfo <NSObject>

@property (readonly, nonatomic) unsigned long long draggingSourceOperationMask;
@property (readonly, nonatomic) _UIDraggingSession *localDraggingSession;
@property (nonatomic) long long numberOfValidItemsForDrop;

- (struct CGPoint)draggingLocationInCoordinateSpace:(id<UICoordinateSpace>)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(NSArray *)arg2 usingBlock:(void (^)(_UIDraggingItem *, long long, BOOL *))arg3;
@end

