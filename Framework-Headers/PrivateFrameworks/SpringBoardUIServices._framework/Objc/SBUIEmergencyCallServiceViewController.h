//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIEmergencyCallServiceInterface-Protocol.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>
{
    long long _backgroundStyle;
    UIColor *_tintColor;
}

@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)backgroundStyle:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)noteViewMovedOffscreenTemporarily;

@end
