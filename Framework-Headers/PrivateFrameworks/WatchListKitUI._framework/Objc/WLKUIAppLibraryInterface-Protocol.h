//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKitUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSString;

@protocol WLKUIAppLibraryInterface <JSExport>

@property (readonly, nonatomic) NSArray *installed;
@property (readonly, nonatomic) NSArray *subscribed;
@property (readonly, nonatomic) NSArray *test;

- (void)installAppForChannel:(NSString *)arg1:(JSValue *)arg2:(JSValue *)arg3:(JSValue *)arg4;
- (BOOL)isAppInstalled:(NSString *)arg1;
- (BOOL)isShowingInstaller;
- (void)presentPurchase:(NSDictionary *)arg1;
@end
