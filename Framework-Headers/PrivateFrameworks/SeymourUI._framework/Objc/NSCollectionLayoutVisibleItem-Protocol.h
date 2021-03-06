//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourUI/NSObject-Protocol.h>
#import <SeymourUI/UIDynamicItem-Protocol.h>

@class NSIndexPath, NSString;

@protocol NSCollectionLayoutVisibleItem <NSObject, UIDynamicItem>

@property (nonatomic) double alpha;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic) long long zIndex;

- (BOOL)isHidden;
@end

