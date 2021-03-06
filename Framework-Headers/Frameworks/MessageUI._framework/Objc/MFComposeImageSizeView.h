//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMailComposeHeaderView.h>

@class NSMutableArray, UISegmentedControl;
@protocol MFComposeImageSizeViewDelegate;

@interface MFComposeImageSizeView : MFMailComposeHeaderView
{
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_visibleScales;
}

@property (weak, nonatomic) id<MFComposeImageSizeViewDelegate> delegate; // @dynamic delegate;

- (void).cxx_destruct;
- (unsigned long long)_insertIndexForScale:(unsigned long long)arg1;
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeSizeDescriptionForScale:(unsigned long long)arg1;
- (void)segmentedControlChanged;
- (void)setScale:(unsigned long long)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;

@end

