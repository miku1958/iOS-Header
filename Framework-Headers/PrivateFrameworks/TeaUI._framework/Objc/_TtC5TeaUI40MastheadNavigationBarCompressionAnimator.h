//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI40MastheadNavigationBarCompressionAnimator : NSObject
{
    MISSING_TYPE *barCompressionAnimator;
    MISSING_TYPE *scrollView;
}

@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic) double topOffset;

- (void).cxx_destruct;
- (BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
- (id)init;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (void)reloadWithTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(BOOL)arg1;
- (void)updateWithPercentage:(double)arg1;

@end
