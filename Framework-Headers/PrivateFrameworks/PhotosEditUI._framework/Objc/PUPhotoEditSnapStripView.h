//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PUStripViewInternal;

@interface PUPhotoEditSnapStripView : UIView
{
    PUStripViewInternal *_stripView;
    NSArray *_indicatorInfos;
}

@property (copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;

- (void).cxx_destruct;
- (void)_updateStripView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

