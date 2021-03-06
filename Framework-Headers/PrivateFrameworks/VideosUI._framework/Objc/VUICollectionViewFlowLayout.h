//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface VUICollectionViewFlowLayout : UICollectionViewFlowLayout
{
    BOOL _heterogeneous;
}

@property (nonatomic, getter=isHeterogeneous) BOOL heterogeneous; // @synthesize heterogeneous=_heterogeneous;

- (double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2;
- (long long)developmentLayoutDirection;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;

@end

