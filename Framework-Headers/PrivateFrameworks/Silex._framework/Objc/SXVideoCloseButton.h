//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXMaterialButton.h>

#import <Silex/SXVideoControlItem-Protocol.h>

@class NSString;

@interface SXVideoCloseButton : SXMaterialButton <SXVideoControlItem>
{
    BOOL hideable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideable; // @synthesize hideable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAutoAppearance;

- (id)accessibilityLabel;
- (void)hide:(BOOL)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (BOOL)isVisible;

@end

