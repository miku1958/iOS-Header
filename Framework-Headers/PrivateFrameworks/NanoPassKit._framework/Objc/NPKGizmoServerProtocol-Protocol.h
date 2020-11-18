//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSNumber, NSString, PKFelicaAppletHistory, PKFelicaTransitAppletState, PKPaymentApplication;

@protocol NPKGizmoServerProtocol <NSObject>
- (void)addPassData:(NSData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)boostPriorityUntilPassDBAvailable:(void (^)(void))arg1;
- (void)deletePassWithID:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)fetchDiffForPassWithID:(NSString *)arg1 reply:(void (^)(PKDiff *))arg2;
- (void)fetchPassDescriptionsWithReply:(void (^)(NSArray *, BOOL))arg1;
- (void)fetchPassWithID:(NSString *)arg1 reply:(void (^)(PKPass *))arg2;
- (void)fetchPreferredPaymentApplicationAIDForPaymentPassWithID:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)fetchPrerenderedPassImageWithID:(NSString *)arg1 width:(NSNumber *)arg2 height:(NSNumber *)arg3 compact:(NSNumber *)arg4 reply:(void (^)(NSData *))arg5;
- (void)fetchRelevantPassTuplesWithReply:(void (^)(NSArray *))arg1;
- (void)fetchSecureElementIdentifiers:(void (^)(NSArray *))arg1;
- (void)handleAddedValue:(NSDecimalNumber *)arg1 forPassUniqueID:(NSString *)arg2;
- (void)handleEndedServiceModeRequest;
- (void)handlePaymentTransactions:(NSArray *)arg1 forPassUniqueIDs:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)handleValueAddedServiceTransactions:(NSArray *)arg1 forPassUniqueIDs:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)markAsHavingReceivedLocation;
- (void)noteWebServiceUpdateNeededWithCompletion:(void (^)(void))arg1;
- (void)processFelicaTransitAppletState:(PKFelicaTransitAppletState *)arg1 forPassUniqueID:(NSString *)arg2;
- (void)processFelicaTransitHistory:(PKFelicaAppletHistory *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 withPassUniqueIdentifier:(NSString *)arg3 transactionDate:(NSDate *)arg4;
- (void)requestPeerAccountTermsAndConditionsAcceptance;
- (void)setExpressTransitUniqueID:(NSString *)arg1 applicationIdentifier:(NSString *)arg2 completion:(void (^)(unsigned long long, NSString *))arg3;
- (void)setNeedsRelevancyInformation:(BOOL)arg1;
- (void)setPreferredPaymentApplicationAID:(NSString *)arg1 forPaymentPassWithID:(NSString *)arg2;
@end

