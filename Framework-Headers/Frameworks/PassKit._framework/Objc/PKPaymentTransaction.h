//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDecimalNumber, NSDictionary, NSOrderedSet, NSSet, NSString, NSTimeZone, NSUUID, PKAccountEvent, PKCurrencyAmount, PKMerchant, PKPaymentTransactionFees, PKPaymentTransactionForeignExchangeInformation, PKPaymentTransactionRewards;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    BOOL _enRoute;
    BOOL _shouldSuppressDate;
    BOOL _suppressNotifications;
    BOOL _deviceScoreIdentifiersRequired;
    BOOL _deviceScoreIdentifiersSubmitted;
    BOOL _isCloudKitArchived;
    BOOL _processedForLocation;
    BOOL _processedForMerchantCleanup;
    BOOL _requiresMerchantReprocessing;
    BOOL _processedForStations;
    BOOL _hasAssociatedPaymentApplication;
    BOOL _hasNotificationServiceData;
    BOOL _originatedByDevice;
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
    NSTimeZone *_timeZone;
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
    double _startStationLatitude;
    double _startStationLongitude;
    NSData *_endStationCode;
    NSString *_endStation;
    double _endStationLatitude;
    double _endStationLongitude;
    long long _adjustmentType;
    long long _adjustmentTypeReason;
    long long _peerPaymentType;
    NSString *_peerPaymentCounterpartHandle;
    NSString *_peerPaymentMemo;
    NSDate *_peerPaymentMessageReceivedDate;
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
    long long _secondaryFundingSourceType;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
    NSString *_merchantProvidedDescription;
    NSDecimalNumber *_rewardsTotalAmount;
    NSString *_rewardsTotalCurrencyCode;
    unsigned long long _rewardsEligibilityReason;
    PKPaymentTransactionRewards *_rewards;
    unsigned long long _cardType;
    NSString *_accountIdentifier;
    NSString *_lifecycleIdentifier;
    NSString *_authNetworkData;
    NSString *_clearingNetworkData;
    NSString *_cardIdentifier;
    NSString *_cardNumberSuffix;
    NSString *_referenceIdentifier;
    unsigned long long _suppressBehavior;
    long long _redemptionType;
    NSSet *_questions;
    NSOrderedSet *_servicingEvents;
    NSArray *_payments;
    PKAccountEvent *_redemptionEvent;
    NSDictionary *_metadata;
    NSDate *_lastMerchantReprocessingDate;
    NSString *_issueReportIdentifier;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSource;
    long long _transactionDeclinedReason;
    unsigned long long _updateReasons;
}

@property (strong, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property (nonatomic) long long adjustmentTypeReason; // @synthesize adjustmentTypeReason=_adjustmentTypeReason;
@property (strong, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property (copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) NSSet *answeredQuestionsOnThisDevice;
@property (copy, nonatomic) NSString *authNetworkData; // @synthesize authNetworkData=_authNetworkData;
@property (strong, nonatomic) NSString *cardIdentifier; // @synthesize cardIdentifier=_cardIdentifier;
@property (strong, nonatomic) NSString *cardNumberSuffix; // @synthesize cardNumberSuffix=_cardNumberSuffix;
@property (nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property (copy, nonatomic) NSString *clearingNetworkData; // @synthesize clearingNetworkData=_clearingNetworkData;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (nonatomic) BOOL deviceScoreIdentifiersRequired; // @synthesize deviceScoreIdentifiersRequired=_deviceScoreIdentifiersRequired;
@property (nonatomic) BOOL deviceScoreIdentifiersSubmitted; // @synthesize deviceScoreIdentifiersSubmitted=_deviceScoreIdentifiersSubmitted;
@property (readonly, weak, nonatomic) NSString *displayLocation;
@property (readonly, nonatomic) unsigned long long disputeStatus;
@property (readonly, nonatomic) unsigned long long disputeType;
@property (readonly, nonatomic) unsigned long long effectiveTransactionSource;
@property (nonatomic) BOOL enRoute; // @synthesize enRoute=_enRoute;
@property (copy, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property (copy, nonatomic) NSData *endStationCode; // @synthesize endStationCode=_endStationCode;
@property (nonatomic) double endStationLatitude; // @synthesize endStationLatitude=_endStationLatitude;
@property (strong, nonatomic) CLLocation *endStationLocation;
@property (nonatomic) double endStationLongitude; // @synthesize endStationLongitude=_endStationLongitude;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) PKPaymentTransactionFees *fees; // @synthesize fees=_fees;
@property (strong, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation; // @synthesize foreignExchangeInformation=_foreignExchangeInformation;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (nonatomic) BOOL hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property (readonly, nonatomic) BOOL hasBackingData;
@property (readonly, nonatomic) BOOL hasEffectiveTransactionSource;
@property (nonatomic) BOOL hasNotificationServiceData; // @synthesize hasNotificationServiceData=_hasNotificationServiceData;
@property (readonly, nonatomic) BOOL hasTransactionSource;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property (copy, nonatomic) NSString *issueReportIdentifier; // @synthesize issueReportIdentifier=_issueReportIdentifier;
@property (strong, nonatomic) NSDate *lastMerchantReprocessingDate; // @synthesize lastMerchantReprocessingDate=_lastMerchantReprocessingDate;
@property (copy, nonatomic) NSString *lifecycleIdentifier; // @synthesize lifecycleIdentifier=_lifecycleIdentifier;
@property (strong, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property (strong, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property (nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property (nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property (nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property (nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property (strong, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property (copy, nonatomic) NSString *merchantProvidedDescription; // @synthesize merchantProvidedDescription=_merchantProvidedDescription;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) BOOL originatedByDevice; // @synthesize originatedByDevice=_originatedByDevice;
@property (copy, nonatomic) NSString *paymentHash; // @synthesize paymentHash=_paymentHash;
@property (strong, nonatomic) NSArray *payments; // @synthesize payments=_payments;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle; // @synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle;
@property (copy, nonatomic) NSString *peerPaymentMemo; // @synthesize peerPaymentMemo=_peerPaymentMemo;
@property (copy, nonatomic) NSDate *peerPaymentMessageReceivedDate; // @synthesize peerPaymentMessageReceivedDate=_peerPaymentMessageReceivedDate;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property (readonly, nonatomic) CLLocation *preferredLocation;
@property (copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount; // @synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount;
@property (readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *primaryFundingSourceCurrencyCode; // @synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode;
@property (nonatomic) BOOL processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property (nonatomic) BOOL processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property (nonatomic) BOOL processedForStations; // @synthesize processedForStations=_processedForStations;
@property (strong, nonatomic) NSSet *questions; // @synthesize questions=_questions;
@property (strong, nonatomic) PKAccountEvent *redemptionEvent; // @synthesize redemptionEvent=_redemptionEvent;
@property (nonatomic) long long redemptionType; // @synthesize redemptionType=_redemptionType;
@property (copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property (nonatomic) BOOL requiresMerchantReprocessing; // @synthesize requiresMerchantReprocessing=_requiresMerchantReprocessing;
@property (strong, nonatomic) PKPaymentTransactionRewards *rewards; // @synthesize rewards=_rewards;
@property (nonatomic) unsigned long long rewardsEligibilityReason; // @synthesize rewardsEligibilityReason=_rewardsEligibilityReason;
@property (strong, nonatomic) NSDecimalNumber *rewardsTotalAmount; // @synthesize rewardsTotalAmount=_rewardsTotalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property (strong, nonatomic) NSString *rewardsTotalCurrencyCode; // @synthesize rewardsTotalCurrencyCode=_rewardsTotalCurrencyCode;
@property (copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount; // @synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount;
@property (readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode; // @synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode;
@property (copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix; // @synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix;
@property (copy, nonatomic) NSString *secondaryFundingSourceDescription; // @synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription;
@property (copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier; // @synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier;
@property (nonatomic) long long secondaryFundingSourceNetwork; // @synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork;
@property (nonatomic) long long secondaryFundingSourceType; // @synthesize secondaryFundingSourceType=_secondaryFundingSourceType;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (strong, nonatomic) NSOrderedSet *servicingEvents; // @synthesize servicingEvents=_servicingEvents;
@property (nonatomic) BOOL shouldSuppressDate; // @synthesize shouldSuppressDate=_shouldSuppressDate;
@property (copy, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property (copy, nonatomic) NSData *startStationCode; // @synthesize startStationCode=_startStationCode;
@property (nonatomic) double startStationLatitude; // @synthesize startStationLatitude=_startStationLatitude;
@property (strong, nonatomic) CLLocation *startStationLocation;
@property (nonatomic) double startStationLongitude; // @synthesize startStationLongitude=_startStationLongitude;
@property (copy, nonatomic) NSString *stationCodeProvider; // @synthesize stationCodeProvider=_stationCodeProvider;
@property (copy, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (readonly, nonatomic) BOOL supportsFuzzyMatching;
@property (nonatomic) unsigned long long suppressBehavior; // @synthesize suppressBehavior=_suppressBehavior;
@property (nonatomic) BOOL suppressNotifications; // @synthesize suppressNotifications=_suppressNotifications;
@property (nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property (nonatomic) long long transactionDeclinedReason; // @synthesize transactionDeclinedReason=_transactionDeclinedReason;
@property (nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property (nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property (copy, nonatomic) NSDate *transactionStatusChangedDate; // @synthesize transactionStatusChangedDate=_transactionStatusChangedDate;
@property (nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property (nonatomic) unsigned long long transitModifiers; // @synthesize transitModifiers=_transitModifiers;
@property (nonatomic) long long transitType; // @synthesize transitType=_transitType;
@property (readonly, nonatomic) NSSet *unansweredQuestions;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;
@property (readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;

+ (id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;
- (id)_latestDipusteEvent;
- (id)_transactionSourceString;
- (id)_transactionTypeString;
- (id)_transitSubtypeString;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (void)answeredQuestion:(unsigned long long)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedTransitTransactionMessage:(BOOL)arg1;
- (BOOL)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentTransaction:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (id)updateReasonsDescription;

@end

