//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIView;

@protocol UIDragDropSession <NSObject>

@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;

- (BOOL)canLoadObjectsOfClass:(Class)arg1;
- (BOOL)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end

