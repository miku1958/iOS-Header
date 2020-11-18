//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppNavigationController.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, VUIDocumentUIConfiguration;

__attribute__((visibility("hidden")))
@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    UITapGestureRecognizer *_gesture;
    VUIDocumentUIConfiguration *_configuration;
}

@property (strong, nonatomic) VUIDocumentUIConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
