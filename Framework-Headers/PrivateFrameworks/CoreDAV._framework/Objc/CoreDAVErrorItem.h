//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren *_validSyncToken;
    CoreDAVItemWithNoChildren *_noUIDConflict;
    CoreDAVItemWithNoChildren *_validAddressData;
    CoreDAVItemWithNoChildren *_maxResourceSize;
    CoreDAVItemWithNoChildren *_uid;
    CoreDAVItemWithNoChildren *_ctagOkay;
    CoreDAVItemWithNoChildren *_maxImageSize;
    CoreDAVItemWithNoChildren *_invalidImageType;
    CoreDAVItemWithNoChildren *_imageError;
    CoreDAVItemWithNoChildren *_guardianRestricted;
    CoreDAVItemWithNoChildren *_maxAttendees;
    CoreDAVItemWithNoChildren *_quotaExceeded;
    CoreDAVItemWithNoChildren *_maxResources;
    CoreDAVItemWithNoChildren *_validTimezone;
    CoreDAVItemWithNoChildren *_validSplit;
    CoreDAVLeafItem *_status;
}

@property (strong, nonatomic) CoreDAVItemWithNoChildren *ctagOkay; // @synthesize ctagOkay=_ctagOkay;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *guardianRestricted; // @synthesize guardianRestricted=_guardianRestricted;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *imageError; // @synthesize imageError=_imageError;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *invalidImageType; // @synthesize invalidImageType=_invalidImageType;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *maxAttendees; // @synthesize maxAttendees=_maxAttendees;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *maxResources; // @synthesize maxResources=_maxResources;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict; // @synthesize noUIDConflict=_noUIDConflict;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits; // @synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded; // @synthesize quotaExceeded=_quotaExceeded;
@property (strong, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *uid; // @synthesize uid=_uid;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *validAddressData; // @synthesize validAddressData=_validAddressData;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *validSplit; // @synthesize validSplit=_validSplit;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *validSyncToken; // @synthesize validSyncToken=_validSyncToken;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *validTimezone; // @synthesize validTimezone=_validTimezone;

+ (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

