//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSLookupResponse.h>

@interface SSLookupResponse (MPStoreOfferCMC)

@property (readonly, nonatomic) BOOL mpIsPersonalizedOffer;

+ (BOOL)mpFakeCompletionDataForBuys;
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1;
+ (BOOL)mpShowBuysWithNoCompletionOffer;
+ (BOOL)mpVerboseCMCLogging;
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1;
@end

