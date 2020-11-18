//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSData, NSSet, NSString, PKDisplayProfile;

@protocol PDPassLibraryExportedInterface <PDXPCServiceExportedInterface>
- (void)addPassesWithData:(NSSet *)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)canAddFelicaPassWithHandler:(void (^)(BOOL))arg1;
- (void)canAddPassesOfType:(unsigned long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)countPassesOfType:(unsigned long long)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)defaultPaymentPassWithHandler:(void (^)(PKPaymentPass *))arg1;
- (void)expressTransitPassWithHandler:(void (^)(PKPass *))arg1;
- (void)getContentForUniqueID:(NSString *)arg1 handler:(void (^)(PKContent *))arg2;
- (void)getDataForBundleResourceNamed:(NSString *)arg1 withExtension:(NSString *)arg2 objectUniqueIdentifier:(NSString *)arg3 handler:(void (^)(NSData *))arg4;
- (void)getImageSetForUniqueID:(NSString *)arg1 ofType:(long long)arg2 displayProfile:(PKDisplayProfile *)arg3 handler:(void (^)(PKImageSet *))arg4;
- (void)getManifestHashAndSettingsForPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(NSData *, unsigned long long))arg3;
- (void)getPassWithPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)getPassWithUniqueID:(NSString *)arg1 handler:(void (^)(PKPass *))arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(BOOL)arg2 withHandler:(void (^)(NSSet *, PKCatalog *))arg3;
- (void)getPassesOfType:(unsigned long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)getPassesWithHandler:(void (^)(NSSet *))arg1;
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)isPaymentPassActivationAvailableWithHandler:(void (^)(BOOL))arg1;
- (void)migrateDataWithHandler:(void (^)(BOOL))arg1;
- (void)passWithDPANIdentifier:(NSString *)arg1 handler:(void (^)(PKPaymentPass *))arg2;
- (void)passWithFPANIdentifier:(NSString *)arg1 handler:(void (^)(PKPaymentPass *))arg2;
- (void)peerPaymentPassUniqueIDWithHandler:(void (^)(NSString *))arg1;
- (void)removePassWithUniqueID:(NSString *)arg1 diagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)removePassesWithUniqueIDs:(NSArray *)arg1 diagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)replacePassWithPassData:(NSData *)arg1 handler:(void (^)(BOOL))arg2;
- (void)sortedTransitPassesForAppletDataFormat:(NSString *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forPassWithUniqueID:(NSString *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)supportedTransitPartnersForDigitalIssuance:(void (^)(NSArray *))arg1;
@end

