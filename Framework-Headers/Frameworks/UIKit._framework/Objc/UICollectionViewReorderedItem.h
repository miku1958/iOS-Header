//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewCell;

__attribute__((visibility("hidden")))
@interface UICollectionViewReorderedItem : NSObject
{
    UICollectionViewCell *_cell;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_targetIndexPath;
}

@property (readonly, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property (strong, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;

- (void).cxx_destruct;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;

@end

