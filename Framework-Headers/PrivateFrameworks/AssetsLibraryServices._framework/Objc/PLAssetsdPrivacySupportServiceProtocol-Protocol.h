//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSDictionary;

@protocol PLAssetsdPrivacySupportServiceProtocol <NSObject>
- (void)presentLimitedLibraryPickerReprompt:(void (^)(BOOL))arg1;
- (void)setClientPrivacyOptions:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
@end
