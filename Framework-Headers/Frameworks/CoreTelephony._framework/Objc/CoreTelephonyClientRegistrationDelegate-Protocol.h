//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTCellInfo, CTEnhancedDataLinkQualityMetric, CTEnhancedLinkQualityMetric, CTIMSRegistrationTransportInfo, CTNetworkList, CTRegistrationDisplayStatus, CTSignalStrengthInfo, CTVoiceLinkQualityMetric, CTXPCServiceSubscriptionContext, NSDictionary, NSNumber, NSString;

@protocol CoreTelephonyClientRegistrationDelegate <NSObject>

@optional
- (void)cellChanged:(CTXPCServiceSubscriptionContext *)arg1 cell:(NSDictionary *)arg2;
- (void)cellMonitorUpdate:(CTXPCServiceSubscriptionContext *)arg1 info:(CTCellInfo *)arg2;
- (void)customerServiceProfileChanged:(CTXPCServiceSubscriptionContext *)arg1 visible:(BOOL)arg2;
- (void)displayStatusChanged:(CTXPCServiceSubscriptionContext *)arg1 status:(CTRegistrationDisplayStatus *)arg2;
- (void)enhancedDataLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTEnhancedDataLinkQualityMetric *)arg2;
- (void)enhancedVoiceLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTEnhancedLinkQualityMetric *)arg2;
- (void)imsRegistrationChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(CTIMSRegistrationTransportInfo *)arg2;
- (void)networkListAvailable:(CTXPCServiceSubscriptionContext *)arg1 list:(CTNetworkList *)arg2;
- (void)networkReselectionNeeded:(CTXPCServiceSubscriptionContext *)arg1;
- (void)networkSelected:(CTXPCServiceSubscriptionContext *)arg1 success:(BOOL)arg2 mode:(NSString *)arg3;
- (void)operatorNameChanged:(CTXPCServiceSubscriptionContext *)arg1 name:(NSString *)arg2;
- (void)rejectCauseCodeChanged:(CTXPCServiceSubscriptionContext *)arg1 causeCode:(NSNumber *)arg2;
- (void)signalStrengthChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(CTSignalStrengthInfo *)arg2;
- (void)voiceLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTVoiceLinkQualityMetric *)arg2;
@end

