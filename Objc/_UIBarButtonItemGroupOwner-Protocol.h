//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIBarButtonItem, UIBarButtonItemGroup;

@protocol _UIBarButtonItemGroupOwner <NSObject>
- (void)_groupDidChangeGeometry:(UIBarButtonItemGroup *)arg1;
- (void)_groupDidChangePriority:(UIBarButtonItemGroup *)arg1;
- (void)_groupDidUpdateItems:(UIBarButtonItemGroup *)arg1 removedItems:(NSArray *)arg2;
- (void)_groupDidUpdateRepresentative:(UIBarButtonItemGroup *)arg1 fromRepresentative:(UIBarButtonItem *)arg2;
- (void)_groupDidUpdateVisibility:(UIBarButtonItemGroup *)arg1;
@end
