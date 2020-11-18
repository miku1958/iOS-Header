//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString, SLMicroBlogStatus;

@protocol SLMicroBlogSheetDelegate

@property (copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock;

- (void)beginPotentialLocationUse;
- (void)deferExpensiveOperations;
- (void)endPotentialLocationUse;
- (void)fetchCurrentImageLimits:(void (^)(NSNumber *, NSError *))arg1;
- (void)fetchCurrentUrlLimits:(void (^)(long long, long long, NSError *))arg1;
- (void)fetchGeotagStatus:(void (^)(int, NSError *))arg1;
- (void)fetchProfileImageDataForScreenName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchSessionInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)logDidSendStatusWithText:(NSString *)arg1 attachments:(NSArray *)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4;
- (void)recordsMatchingPrefixString:(NSString *)arg1 completion:(BOOL (^)(NSArray *, NSError *))arg2;
- (void)sendStatus:(SLMicroBlogStatus *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (NSString *)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(NSString *)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)showSettingsIfNeeded;
- (void)stopDeferringExpensiveOperations;

@optional
- (NSData *)cachedProfileImageDataForScreenName:(NSString *)arg1;
- (long long)characterCountForText:(NSString *)arg1 shortenedURLCost:(long long)arg2;
- (BOOL)countMediaAttachmentsTowardCharacterCount;
- (void)ensureUserRecordStore;
@end
