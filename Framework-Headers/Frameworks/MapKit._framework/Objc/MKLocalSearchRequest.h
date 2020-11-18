//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class CLLocation, NSArray, NSString, _MKLocalSearchExternalTransitLookupParameters, _MKLocalSearchMerchantParameters;
@protocol GEOCompletionItem;

@interface MKLocalSearchRequest : NSObject <NSCopying>
{
    NSString *_naturalLanguageQuery;
    BOOL _hasRegion;
    CDStruct_b7cb895d _region;
    BOOL _allowPhoneNumberLookupUsingCellular;
    BOOL _hasSentFeedbackForCompletion;
    int _resultProviderID;
    id<GEOCompletionItem> _geoCompletionItem;
    CLLocation *_deviceLocation;
    _MKLocalSearchMerchantParameters *_merchantParameters;
    _MKLocalSearchExternalTransitLookupParameters *_externalTransitLookupParameters;
    NSArray *_phoneNumbers;
    NSArray *_muids;
    NSString *_contactsDataString;
    NSString *_canonicalSearchString;
}

@property (readonly, nonatomic) BOOL _hasRegion; // @synthesize _hasRegion;
@property (nonatomic, getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:) BOOL allowPhoneNumberLookupUsingCellular; // @synthesize allowPhoneNumberLookupUsingCellular=_allowPhoneNumberLookupUsingCellular;
@property (strong, nonatomic, getter=_canonicalSearchString, setter=_setCanonicalSearchString:) NSString *canonicalSearchString; // @synthesize canonicalSearchString=_canonicalSearchString;
@property (strong, nonatomic, getter=_contactsDataString, setter=_setContactsDataString:) NSString *contactsDataString; // @synthesize contactsDataString=_contactsDataString;
@property (strong, nonatomic, getter=_deviceLocation, setter=_setDeviceLocation:) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property (strong, nonatomic, getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters; // @synthesize externalTransitLookupParameters=_externalTransitLookupParameters;
@property (readonly, nonatomic) id<GEOCompletionItem> geoCompletionItem; // @synthesize geoCompletionItem=_geoCompletionItem;
@property (nonatomic) BOOL hasSentFeedbackForCompletion; // @synthesize hasSentFeedbackForCompletion=_hasSentFeedbackForCompletion;
@property (strong, nonatomic, getter=_merchantParameters, setter=_setMerchantParameters:) _MKLocalSearchMerchantParameters *merchantParameters; // @synthesize merchantParameters=_merchantParameters;
@property (strong, nonatomic, getter=_muids, setter=_setMuids:) NSArray *muids; // @synthesize muids=_muids;
@property (copy, nonatomic) NSString *naturalLanguageQuery; // @synthesize naturalLanguageQuery=_naturalLanguageQuery;
@property (strong, nonatomic, getter=_phoneNumbers, setter=_setPhoneNumbers:) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property (nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property (nonatomic, getter=_resultProviderID, setter=_setResultProviderID:) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;

+ (id)searchRequestWithCompletion:(id)arg1;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCompletion:(id)arg1;
- (id)initWithMapsURL:(id)arg1;

@end

