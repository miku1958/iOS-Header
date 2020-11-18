//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSDecimalNumber, NSNumber, NSString;

@interface PKFelicaPassProperties : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _shinkansenTicketActive;
    BOOL _greenCarTicketUsed;
    BOOL _blacklisted;
    BOOL _inStation;
    BOOL _inShinkansenStation;
    BOOL _hasGreenCarTicket;
    BOOL _hasShinkansenTicket;
    NSString *_currencyCode;
    NSString *_appletFormat;
    NSDecimalNumber *_transitBalance;
    NSDateComponents *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSString *_shinkansenOriginStation;
    NSString *_shinkansenDestinationStation;
    NSDateComponents *_shinkansenDepartureTime;
    NSDateComponents *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSString *_shinkansenSecondaryOriginStation;
    NSString *_shinkansenSecondaryDestinationStation;
    NSDateComponents *_shinkansenSecondaryDepartureTime;
    NSDateComponents *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSString *_greenCarOriginStation;
    NSString *_greenCarDestinationStation;
    NSDateComponents *_greenCarValidityStartDate;
}

@property (copy, nonatomic) NSString *appletFormat; // @synthesize appletFormat=_appletFormat;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (copy, nonatomic) NSString *greenCarDestinationStation; // @synthesize greenCarDestinationStation=_greenCarDestinationStation;
@property (copy, nonatomic) NSString *greenCarOriginStation; // @synthesize greenCarOriginStation=_greenCarOriginStation;
@property (nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate; // @synthesize greenCarValidityStartDate=_greenCarValidityStartDate;
@property (nonatomic) BOOL hasGreenCarTicket; // @synthesize hasGreenCarTicket=_hasGreenCarTicket;
@property (nonatomic) BOOL hasShinkansenTicket; // @synthesize hasShinkansenTicket=_hasShinkansenTicket;
@property (nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation; // @synthesize inShinkansenStation=_inShinkansenStation;
@property (nonatomic, getter=isInStation) BOOL inStation; // @synthesize inStation=_inStation;
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime; // @synthesize shinkansenArrivalTime=_shinkansenArrivalTime;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber; // @synthesize shinkansenCarNumber=_shinkansenCarNumber;
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime; // @synthesize shinkansenDepartureTime=_shinkansenDepartureTime;
@property (copy, nonatomic) NSString *shinkansenDestinationStation; // @synthesize shinkansenDestinationStation=_shinkansenDestinationStation;
@property (copy, nonatomic) NSString *shinkansenOriginStation; // @synthesize shinkansenOriginStation=_shinkansenOriginStation;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber; // @synthesize shinkansenSeatNumber=_shinkansenSeatNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow; // @synthesize shinkansenSeatRow=_shinkansenSeatRow;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime; // @synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // @synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime; // @synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation; // @synthesize shinkansenSecondaryDestinationStation=_shinkansenSecondaryDestinationStation;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation; // @synthesize shinkansenSecondaryOriginStation=_shinkansenSecondaryOriginStation;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // @synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // @synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName; // @synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName;
@property (nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
@property (copy, nonatomic) NSString *shinkansenTrainName; // @synthesize shinkansenTrainName=_shinkansenTrainName;
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate; // @synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm; // @synthesize shinkansenValidityTerm=_shinkansenValidityTerm;
@property (copy, nonatomic) NSDecimalNumber *transitBalance; // @synthesize transitBalance=_transitBalance;

+ (id)passPropertiesForPass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_stringForRow:(id)arg1 seat:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decimalTransitBalance;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (id)displayableTransitBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2;

@end

