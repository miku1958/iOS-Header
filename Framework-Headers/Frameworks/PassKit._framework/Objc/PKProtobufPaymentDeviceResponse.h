//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>
{
    unsigned int _defaultPaymentInstrumentIndex;
    int _nearby;
    NSMutableArray *_paymentInstruments;
    unsigned int _protocolVersion;
    NSMutableArray *_supportedSetupFeatures;
    BOOL _deviceDisabled;
    BOOL _locked;
    BOOL _supportsFaceID;
    BOOL _userDisabled;
    struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int nearby:1;
        unsigned int protocolVersion:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int supportsFaceID:1;
        unsigned int userDisabled:1;
    } _has;
}

@property (nonatomic) unsigned int defaultPaymentInstrumentIndex; // @synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex;
@property (nonatomic) BOOL deviceDisabled; // @synthesize deviceDisabled=_deviceDisabled;
@property (nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
@property (nonatomic) BOOL hasDeviceDisabled;
@property (nonatomic) BOOL hasLocked;
@property (nonatomic) BOOL hasNearby;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasSupportsFaceID;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL locked; // @synthesize locked=_locked;
@property (nonatomic) int nearby; // @synthesize nearby=_nearby;
@property (strong, nonatomic) NSMutableArray *paymentInstruments; // @synthesize paymentInstruments=_paymentInstruments;
@property (nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (strong, nonatomic) NSMutableArray *supportedSetupFeatures; // @synthesize supportedSetupFeatures=_supportedSetupFeatures;
@property (nonatomic) BOOL supportsFaceID; // @synthesize supportsFaceID=_supportsFaceID;
@property (nonatomic) BOOL userDisabled; // @synthesize userDisabled=_userDisabled;

+ (Class)paymentInstrumentsType;
+ (Class)supportedSetupFeaturesType;
- (void).cxx_destruct;
- (int)StringAsNearby:(id)arg1;
- (void)addPaymentInstruments:(id)arg1;
- (void)addSupportedSetupFeatures:(id)arg1;
- (void)clearPaymentInstruments;
- (void)clearSupportedSetupFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nearbyAsString:(int)arg1;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (BOOL)readFrom:(id)arg1;
- (id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedSetupFeaturesCount;
- (void)writeTo:(id)arg1;

@end

