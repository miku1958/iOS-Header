//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppConduit/NSCopying-Protocol.h>
#import <AppConduit/NSObject-Protocol.h>
#import <AppConduit/NSSecureCoding-Protocol.h>

@class LSApplicationProxy, NSArray, NSDictionary, NSString, NSUUID;

@protocol ACXSyncedApp <NSObject, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long applicationType;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) NSUUID *databaseUUID;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) unsigned long long sequenceNumber;

- (id)initWithApplicationProxy:(LSApplicationProxy *)arg1 databaseUUID:(NSUUID *)arg2 sequenceNumber:(unsigned long long)arg3;
- (NSDictionary *)serializeAsRemoteApplication;
@end

