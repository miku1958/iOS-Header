//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout
{
    NSDictionary *_rects;
    struct CGSize _contentSize;
}

@property (readonly, nonatomic) struct CGSize calculatedContentSize; // @synthesize calculatedContentSize=_contentSize;

- (void).cxx_destruct;
- (void)_calculateSizes;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end
