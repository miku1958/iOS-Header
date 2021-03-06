//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController
{
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

@property (strong, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
@property (strong, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property (strong, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;

- (void).cxx_destruct;
- (void)_setup;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

