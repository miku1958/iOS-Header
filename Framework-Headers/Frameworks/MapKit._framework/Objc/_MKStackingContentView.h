//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUIViewControllerRootView.h>

#import <MapKit/MKVibrantGroup-Protocol.h>

@class NSLayoutConstraint, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _MKStackingContentView : _MKUIViewControllerRootView <MKVibrantGroup>
{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_topView;
    UIView *_bottomView;
}

@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (strong, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *topView; // @synthesize topView=_topView;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;
- (void)updateConstraints;
- (id)vibrancyGroupName;

@end

