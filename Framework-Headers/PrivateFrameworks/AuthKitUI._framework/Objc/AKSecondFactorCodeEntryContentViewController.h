//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKJiggling-Protocol.h>

@class AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <AKJiggling>
{
    AKCodeEntryView *_codeGeneratorView;
    AKBasicLoginContentViewController *_titleHeaderViewController;
    AKAppleIDAuthenticationContext *_authenticationContext;
    NSArray *_activeConstraints;
}

@property (strong, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property (strong, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (strong, nonatomic) AKCodeEntryView *codeGeneratorView; // @synthesize codeGeneratorView=_codeGeneratorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *reason;
@property (readonly) Class superclass;
@property (strong, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController; // @synthesize titleHeaderViewController=_titleHeaderViewController;

- (void).cxx_destruct;
- (void)_configureCodeGenView;
- (void)_configureTitleHeaderView;
- (void)_updateFontContstraints:(id)arg1;
- (void)dealloc;
- (void)jiggleAView;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;

@end

