//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSDictionary;
@protocol DNDSSyncServiceDelegate;

@protocol DNDSSyncService <NSObject>

@property (weak, nonatomic) id<DNDSSyncServiceDelegate> delegate;

- (void)resume;
- (void)sendMessage:(NSDictionary *)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
@end
