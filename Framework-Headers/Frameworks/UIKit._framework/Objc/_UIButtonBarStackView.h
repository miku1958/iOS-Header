//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStackView.h>

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonBarStackView : UIStackView <UIPointerInteractionDelegate>
{
    _UIButtonBar *_buttonBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)init;
- (id)initWithButtonBar:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

