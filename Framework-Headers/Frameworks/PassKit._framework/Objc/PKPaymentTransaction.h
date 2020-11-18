//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSDecimalNumber, NSDictionary, NSString, NSUUID, PKCurrencyAmount, PKMerchant, PKPaymentTransactionFees, PKPaymentTransactionForeignExchangeInformation;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    BOOL _enRoute;
    BOOL _deviceScoreIdentifiersRequired;
    BOOL _deviceScoreIdentifiersSubmitted;
    BOOL _isCloudKitArchived;
    BOOL _processedForLocation;
    BOOL _processedForMerchantCleanup;
    BOOL _processedForStations;
    BOOL _hasAssociatedPaymentApplication;
    BOOL _hasNotificationServiceData;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_paymentHash;
    NSDecimalNumber *_amount;
    NSDecimalNumber *_subtotalAmount;
    NSString *_currencyCode;
    NSDate *_transactionDate;
    NSDate *_transactionStatusChangedDate;
    NSDate *_expirationDate;
    PKMerchant *_merchant;
    NSString *_locality;
    NSString *_administrativeArea;
    NSDate *_locationDate;
    double _locationLatitude;
    double _locationLongitude;
    double _locationAltitude;
    double _locationHorizontalAccuracy;
    double _locationVerticalAccuracy;
    long long _transitType;
    unsigned long long _transitModifiers;
    NSString *_stationCodeProvider;
    NSData *_startStationCode;
    NSString *_startStation;
    NSData *_endStationCode;
    NSString *_endStation;
    long long _adjustmentType;
    long long _peerPaymentType;
    NSString *_peerPaymentCounterpartHandle;
    NSString *_peerPaymentMemo;
    PKPaymentTransactionForeignExchangeInformation *_foreignExchangeInformation;
    PKPaymentTransactionFees *_fees;
    NSDecimalNumber *_primaryFundingSourceAmount;
    NSString *_primaryFundingSourceCurrencyCode;
    NSDecimalNumber *_secondaryFundingSourceAmount;
    NSString *_secondaryFundingSourceCurrencyCode;
    long long _secondaryFundingSourceNetwork;
    NSString *_secondaryFundingSourceDPANSuffix;
    NSString *_secondaryFundingSourceFPANIdentifier;
    NSString *_secondaryFundingSourceDescription;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
    NSDictionary *_metadata;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSource;
    unsigned long long _updateReasons;
}

@property (nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property (strong, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property (copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (nonatomic) BOOL deviceScoreIdentifiersRequired; // @synthesize deviceScoreIdentifiersRequired=_deviceScoreIdentifiersRequired;
@property (nonatomic) BOOL deviceScoreIdentifiersSubmitted; // @synthesize deviceScoreIdentifiersSubmitted=_deviceScoreIdentifiersSubmitted;
@property (readonly, weak, nonatomic) NSString *displayLocation;
@property (nonatomic) BOOL enRoute; // @synthesize enRoute=_enRoute;
@property (copy, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property (copy, nonatomic) NSData *endStationCode; // @synthesize endStationCode=_endStationCode;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) PKPaymentTransactionFees *fees; // @synthesize fees=_fees;
@property (strong, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation; // @synthesize foreignExchangeInformation=_foreignExchangeInformation;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (nonatomic) BOOL hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property (readonly, nonatomic) BOOL hasBackingData;
@property (nonatomic) BOOL hasNotificationServiceData; // @synthesize hasNotificationServiceData=_hasNotificationServiceData;
@property (readonly, nonatomic) BOOL hasTransactionSource;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property (strong, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property (strong, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property (nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property (nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property (nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property (nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property (strong, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (copy, nonatomic) NSString *paymentHash; // @synthesize paymentHash=_paymentHash;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle; // @synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle;
@property (copy, nonatomic) NSString *peerPaymentMemo; // @synthesize peerPaymentMemo=_peerPaymentMemo;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property (copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount; // @synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount;
@property (readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *primaryFundingSourceCurrencyCode; // @synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode;
@property (nonatomic) BOOL processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property (nonatomic) BOOL processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property (nonatomic) BOOL processedForStations; // @synthesize processedForStations=_processedForStations;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount; // @synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount;
@property (readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode; // @synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode;
@property (copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix; // @synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix;
@property (copy, nonatomic) NSString *secondaryFundingSourceDescription; // @synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription;
@property (copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier; // @synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier;
@property (nonatomic) long long secondaryFundingSourceNetwork; // @synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (copy, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property (copy, nonatomic) NSData *startStationCode; // @synthesize startStationCode=_startStationCode;
@property (copy, nonatomic) NSString *stationCodeProvider; // @synthesize stationCodeProvider=_stationCodeProvider;
@property (copy, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property (copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property (nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property (nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property (copy, nonatomic) NSDate *transactionStatusChangedDate; // @synthesize transactionStatusChangedDate=_transactionStatusChangedDate;
@property (nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property (nonatomic) unsigned long long transitModifiers; // @synthesize transitModifiers=_transitModifiers;
@property (nonatomic) long long transitType; // @synthesize transitType=_transitType;
@property (readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;

+ (id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;
- (id)_transactionSourceString;
- (id)_transactionTypeString;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentTransaction:(id)arg1;
- (id)recordTypesAndNames;
- (id)updateReasonsDescription;

@end

