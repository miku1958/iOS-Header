//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncTokenStore-Protocol.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
+ (void)persistToken:(id)arg1 forKey:(id)arg2;
+ (id)tokenForKey:(id)arg1;
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
- (void)persistToken:(id)arg1 forKey:(id)arg2;
- (id)tokenForKey:(id)arg1;

@end

