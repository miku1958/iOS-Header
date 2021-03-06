//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKFullScreenEffect, NSMutableArray;

@interface CKMomentCollectionViewCell : UICollectionViewCell
{
    CKFullScreenEffect *_effect;
    NSMutableArray *_effectViews;
}

@property (strong, nonatomic) CKFullScreenEffect *effect; // @synthesize effect=_effect;
@property (strong, nonatomic) NSMutableArray *effectViews; // @synthesize effectViews=_effectViews;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)addEffectView:(id)arg1;
- (void)animate;
- (void)prepareForReuse;
- (void)setupEffectIfNeeded;
- (void)stopAnimation;

@end

