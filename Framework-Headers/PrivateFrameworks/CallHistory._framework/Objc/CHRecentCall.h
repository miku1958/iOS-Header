//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizable.h>

#import <CallHistory/NSCopying-Protocol.h>
#import <CallHistory/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSValue;
@protocol CHPhoneBookManagerProtocol;

@interface CHRecentCall : CHSynchronizable <NSSecureCoding, NSCopying>
{
    BOOL _read;
    BOOL _callerIdIsBlocked;
    BOOL _multiCall;
    BOOL _answered;
    BOOL _mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callType;
    unsigned int _callStatus;
    unsigned int _callCategory;
    NSString *_callerNetworkName;
    long long _handleType;
    NSString *_uniqueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSString *_serviceProvider;
    NSDate *_date;
    double _duration;
    NSNumber *_bytesOfDataUsed;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    unsigned long long _unreadCount;
    NSValue *_addressBookRecordRef;
    NSString *_clientAddressBookRecordId;
    long long _mediaType;
    long long _ttyType;
    NSString *_callerName;
    NSMutableArray *_callOccurrences;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_callerIdFormatted;
    id<CHPhoneBookManagerProtocol> _phoneBookManager;
}

@property (copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property (copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property (copy) NSValue *addressBookRecordRef; // @synthesize addressBookRecordRef=_addressBookRecordRef;
@property BOOL answered; // @synthesize answered=_answered;
@property (copy) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property (nonatomic) unsigned int callCategory; // @synthesize callCategory=_callCategory;
@property (strong, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property (nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property (copy) NSString *callerId; // @synthesize callerId=_callerId;
@property (nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
@property (copy, nonatomic, getter=callerIdForDisplay) NSString *callerIdFormatted; // @synthesize callerIdFormatted=_callerIdFormatted;
@property BOOL callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property (copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property (copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property (copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property (copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property (copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property (copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property (copy) NSString *clientAddressBookRecordId; // @synthesize clientAddressBookRecordId=_clientAddressBookRecordId;
@property (copy) NSDate *date; // @synthesize date=_date;
@property (copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property (copy) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property double duration; // @synthesize duration=_duration;
@property (nonatomic) long long handleType; // @synthesize handleType=_handleType;
@property (copy) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property (copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property (copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property BOOL mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property BOOL multiCall; // @synthesize multiCall=_multiCall;
@property (strong) id<CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property (nonatomic) BOOL read; // @synthesize read=_read;
@property (copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property (nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property (copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;

+ (id)callCategoryAsString:(unsigned int)arg1;
+ (id)callHandleTypeAsString:(long long)arg1;
+ (id)callMediaTypeAsString:(long long)arg1;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTTYTypeAsString:(long long)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (unsigned int)categoryForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
+ (long long)handleTypeForCallerId:(id)arg1;
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;
+ (id)serviceProviderForCallType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (id)addressBookCallerIDMultiValueIdSync;
- (void)addressBookChanged;
- (id)addressBookRecordIdSync;
- (id)addressBookRecordRefSync;
- (id)callOccurrencesAsStringSync;
- (id)callOccurrencesSync;
- (id)callerIdForDisplaySync;
- (BOOL)callerIdIsEmailAddress;
- (BOOL)callerIdIsEmailAddressSync;
- (id)callerIdLabelSync;
- (id)callerIdLocationSync;
- (id)callerIdSubStringForDisplay;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)callerNameSync;
- (BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createOccurrenceArraySync;
- (void)dealloc;
- (id)description;
- (id)descriptionInDepth;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAndSetAddressBookIdsSync;
- (void)fixCallTypeInfo;
- (id)getLocalizedStringSync:(id)arg1;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (long long)handleTypeSync;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (BOOL)isAddressBookContactASuggestion;
- (BOOL)isAddressBookContactASuggestionSync;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (void)registerForCurrentLocaleDidChangeNotification;
- (BOOL)representsCallAtDate:(id)arg1;
- (void)updateTTYAndMediaType;

@end

