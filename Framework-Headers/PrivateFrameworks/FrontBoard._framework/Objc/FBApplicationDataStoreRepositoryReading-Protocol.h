//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol FBApplicationDataStoreRepositoryReadingDelegate;

@protocol FBApplicationDataStoreRepositoryReading <NSObject>

@property (nonatomic) id<FBApplicationDataStoreRepositoryReadingDelegate> delegate;

- (NSArray *)applicationIdentifiersWithState;
- (BOOL)containsKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (NSArray *)keysForApplication:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (void)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withResult:(void (^)(id))arg3;
- (void)objectForKeys:(NSArray *)arg1 forAllApplicationsWithResult:(void (^)(id))arg2;
@end

