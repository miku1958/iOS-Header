//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class HUScrollGestureRecognitionResolver;

@interface HUQuickControlCollectionView : UICollectionView
{
    HUScrollGestureRecognitionResolver *_scrollGestureResolver;
}

@property (readonly, nonatomic) HUScrollGestureRecognitionResolver *scrollGestureResolver; // @synthesize scrollGestureResolver=_scrollGestureResolver;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

@end

