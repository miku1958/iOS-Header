//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSString;

@protocol RTDataProviderProtocol <NSObject>
+ (NSString *)providerName;
- (void)populateDataProviderWithHandler:(void (^)(NSArray *, NSError *))arg1;

@optional
- (void)purge;
- (void)purgeWithHandler:(void (^)(NSError *))arg1;
- (void)refresh;
- (void)refreshWithHandler:(void (^)(NSError *))arg1;
@end
