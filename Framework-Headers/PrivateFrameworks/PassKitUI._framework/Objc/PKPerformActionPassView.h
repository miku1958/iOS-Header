//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPerformActionBackdropView.h>

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView : PKPerformActionBackdropView
{
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UIImageView *_passView;
}

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_loadSnapshotView;
- (struct CGSize)_passImageSize;
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)shakeImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)smallShakeImage;

@end

