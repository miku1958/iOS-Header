//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSArray, NSDictionary, NSNumber, NSString, SKUIJSAppleAccount;

@protocol SKUIJSITunesStore <JSExport>

@property (nonatomic) long long applicationIconBadgeNumber;
@property (readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;

- (void)approveInPerson:(NSNumber *)arg1:(JSValue *)arg2;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (void)buy:(NSDictionary *)arg1;
- (void)clearToggleStateItems;
- (void)download:(NSDictionary *)arg1;
- (void)exit:(NSDictionary *)arg1;
- (void)findApps:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)findLibraryItems:(NSArray *)arg1:(JSValue *)arg2:(NSDictionary *)arg3;
- (void)findToggleStateForItem:(NSString *)arg1:(JSValue *)arg2;
- (void)getAdminStatus:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)getProfilePermissions:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)log:(NSString *)arg1;
- (void)resetStateForActiveDocument;
- (BOOL)resourceExists:(NSString *)arg1;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)updateToggleStateForItem:(NSString *)arg1 toggled:(BOOL)arg2:(JSValue *)arg3;
@end

