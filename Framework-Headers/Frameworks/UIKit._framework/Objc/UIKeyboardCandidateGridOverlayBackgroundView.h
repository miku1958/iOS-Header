//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView
{
    double _rowHeight;
    unsigned long long _highlightedRowIndex;
}

@property (nonatomic) unsigned long long highlightedRowIndex; // @synthesize highlightedRowIndex=_highlightedRowIndex;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

+ (struct CGColor *)backgroundColor;
+ (id)collectionViewKind;
+ (id)reuseIdentifier;
- (void)applyLayoutAttributes:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

