//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary;
@protocol AFServiceHelper;

@protocol AFServiceCommand <NSObject>

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id<AFServiceHelper>)arg2;
@end

