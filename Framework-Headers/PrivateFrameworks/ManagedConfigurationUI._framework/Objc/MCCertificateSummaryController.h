//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, NSArray, NSDate, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface MCCertificateSummaryController : PSListController
{
    struct __SecTrust *_trust;
    NSArray *_properties;
    NSString *_displayName;
    NSString *_organizationName;
    NSString *_purpose;
    NSDate *_expiration;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    BOOL _backButtonWasHidden;
}

+ (id)_dateFormatter;
- (void).cxx_destruct;
- (void)_setTrust:(struct __SecTrust *)arg1;
- (id)_valueAtPath:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)dealloc;
- (void)hideActionButton;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
