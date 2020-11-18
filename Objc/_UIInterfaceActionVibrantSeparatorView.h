//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIInterfaceActionVisualSectionSeparatorDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualSeparatorDisplaying-Protocol.h>

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionVibrantSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>
{
    double _horizontalLineLeadingInset;
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;
}

@property (nonatomic) double constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalLineLeadingInset; // @synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset;
@property (readonly, strong, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupEffectView;
- (void)_updateContentDirectionalInsets;
- (long long)constantSizedAxis;
- (id)init;
- (void)setConstantSizedAxis:(long long)arg1;
- (void)updateConstraints;

@end

