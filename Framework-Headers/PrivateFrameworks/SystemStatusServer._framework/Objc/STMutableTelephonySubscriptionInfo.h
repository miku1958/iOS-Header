//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/STTelephonySubscriptionInfo.h>

@class NSString;

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo
{
}

@property (copy, nonatomic) NSString *SIMLabel; // @dynamic SIMLabel;
@property (copy, nonatomic) NSString *SIMStatus; // @dynamic SIMStatus;
@property (nonatomic) unsigned long long callForwardingIndicator; // @dynamic callForwardingIndicator;
@property (nonatomic) unsigned long long cellularRegistrationStatus; // @dynamic cellularRegistrationStatus;
@property (nonatomic) unsigned long long dataConnectionType; // @dynamic dataConnectionType;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (copy, nonatomic) NSString *lastKnownNetworkCountryCode; // @dynamic lastKnownNetworkCountryCode;
@property (nonatomic) unsigned long long maxSignalStrengthBars; // @dynamic maxSignalStrengthBars;
@property (nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded; // @dynamic networkReselectionNeeded;
@property (copy, nonatomic) NSString *operatorName; // @dynamic operatorName;
@property (nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections; // @dynamic preferredForDataConnections;
@property (nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection; // @dynamic providingDataConnection;
@property (nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular; // @dynamic registeredWithoutCellular;
@property (nonatomic) long long registrationRejectionCauseCode; // @dynamic registrationRejectionCauseCode;
@property (nonatomic) unsigned long long registrationStatus; // @dynamic registrationStatus;
@property (copy, nonatomic) NSString *shortSIMLabel; // @dynamic shortSIMLabel;
@property (nonatomic) unsigned long long signalStrengthBars; // @dynamic signalStrengthBars;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

