//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _MultiplatformDonationRecencyInfo : NSObject
{
    NSString *_remoteBundleIdentifier;
    NSString *_localBundleIdentifier;
    NSDate *_remoteDonationCreationDate;
    NSDate *_localDonationCreationDate;
}

@property (copy, nonatomic) NSString *localBundleIdentifier; // @synthesize localBundleIdentifier=_localBundleIdentifier;
@property (strong, nonatomic) NSDate *localDonationCreationDate; // @synthesize localDonationCreationDate=_localDonationCreationDate;
@property (copy, nonatomic) NSString *remoteBundleIdentifier; // @synthesize remoteBundleIdentifier=_remoteBundleIdentifier;
@property (strong, nonatomic) NSDate *remoteDonationCreationDate; // @synthesize remoteDonationCreationDate=_remoteDonationCreationDate;

- (void).cxx_destruct;
- (id)identifierForMostRecentData;

@end
