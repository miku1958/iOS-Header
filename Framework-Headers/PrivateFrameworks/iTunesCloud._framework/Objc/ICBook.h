//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface ICBook : NSObject <NSSecureCoding>
{
    BOOL _vppLicensed;
    unsigned long long _purchaseHistoryID;
    unsigned long long _storeID;
    NSString *_title;
    NSString *_author;
    NSString *_genre;
    NSDate *_datePurchased;
    NSURL *_artworkURL;
    NSString *_redownloadParameters;
    NSString *_vppOrganizationID;
    NSString *_vppOrganizationDisplayName;
}

@property (copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property (copy, nonatomic) NSString *author; // @synthesize author=_author;
@property (copy, nonatomic) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (nonatomic) unsigned long long purchaseHistoryID; // @synthesize purchaseHistoryID=_purchaseHistoryID;
@property (copy, nonatomic) NSString *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property (nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic, getter=isVPPLicensed) BOOL vppLicensed; // @synthesize vppLicensed=_vppLicensed;
@property (copy, nonatomic) NSString *vppOrganizationDisplayName; // @synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName;
@property (copy, nonatomic) NSString *vppOrganizationID; // @synthesize vppOrganizationID=_vppOrganizationID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

