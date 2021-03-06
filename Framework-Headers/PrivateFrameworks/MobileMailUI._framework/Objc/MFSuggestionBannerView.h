//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFMessageHeaderViewBlock.h>

@class NSArray, SGBanner;

@interface MFSuggestionBannerView : MFMessageHeaderViewBlock
{
    SGBanner *_banner;
    NSArray *_bannerConstraints;
}

@property (strong, nonatomic) SGBanner *banner; // @synthesize banner=_banner;
@property (strong, nonatomic) NSArray *bannerConstraints; // @synthesize bannerConstraints=_bannerConstraints;

- (void).cxx_destruct;
- (id)_constraintsForEdges:(unsigned long long)arg1 banner:(id)arg2 useLayoutMarginsGuide:(BOOL)arg3;
- (void)commonInitWithBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 banner:(id)arg2;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)arg1;
- (void)updateConstraints;
- (void)willMoveToSuperview:(id)arg1;

@end

