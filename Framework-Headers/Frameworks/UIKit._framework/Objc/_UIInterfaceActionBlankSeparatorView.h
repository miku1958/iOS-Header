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
@interface _UIInterfaceActionBlankSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>
{
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;
}

@property (nonatomic) double constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)setConstantSizedAxis:(long long)arg1;
- (void)updateConstraints;

@end

