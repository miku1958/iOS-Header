//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface PKPaletteAttributeViewController : UIViewController
{
    BOOL _didExperienceUserInteraction;
    BOOL _didSendDismissStatistics;
    NSString *_toolIdentifier;
}

@property (nonatomic) BOOL didExperienceUserInteraction; // @synthesize didExperienceUserInteraction=_didExperienceUserInteraction;
@property (nonatomic) BOOL didSendDismissStatistics; // @synthesize didSendDismissStatistics=_didSendDismissStatistics;
@property (strong, nonatomic) NSString *toolIdentifier; // @synthesize toolIdentifier=_toolIdentifier;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

