//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController
{
    NSString *_licenseTextInfo;
    UITextView *_licenseTextView;
}

@property (strong, nonatomic) NSString *licenseTextInfo; // @synthesize licenseTextInfo=_licenseTextInfo;
@property (strong, nonatomic) UITextView *licenseTextView; // @synthesize licenseTextView=_licenseTextView;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithLicense:(id)arg1;
- (void)setLicenseText:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

