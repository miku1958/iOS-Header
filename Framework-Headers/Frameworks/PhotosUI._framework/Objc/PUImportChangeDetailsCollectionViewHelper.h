//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface PUImportChangeDetailsCollectionViewHelper : NSObject
{
    UICollectionView *_collectionView;
}

@property (weak, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;

- (void).cxx_destruct;
- (void)applyChangeDetails:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCollectionView:(id)arg1;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 changeHistory:(id)arg3 animated:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

