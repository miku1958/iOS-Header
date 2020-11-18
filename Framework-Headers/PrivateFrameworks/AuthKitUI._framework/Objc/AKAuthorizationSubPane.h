//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/AKAuthorizationSubPaneAdding-Protocol.h>

@class UIView, UIViewController;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding>
{
    UIViewController *_viewController;
    UIView *_internalView;
    double _internalCustomSpacingAfter;
}

@property (nonatomic) double customSpacingAfter;
@property (nonatomic) double internalCustomSpacingAfter; // @synthesize internalCustomSpacingAfter=_internalCustomSpacingAfter;
@property (readonly, nonatomic) UIView *internalView; // @synthesize internalView=_internalView;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end
