//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, _UICollectionViewPlaceholderContext;

@protocol _UICollectionViewPlaceholderContextDelegate <NSObject>
- (BOOL)placeholderContext:(_UICollectionViewPlaceholderContext *)arg1 didCommitInsertionWithDataSourceUpdates:(void (^)(NSIndexPath *))arg2;
- (NSIndexPath *)placeholderContextDidDismiss:(_UICollectionViewPlaceholderContext *)arg1;
- (void)placeholderContextNeedsCellUpdate:(_UICollectionViewPlaceholderContext *)arg1;
@end

