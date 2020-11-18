//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FSNode, NSDate, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDatabase : NSObject
{
    struct __CSStore *store;
    struct LSSchema schema;
    FSNode *node;
    unsigned int uid;
    NSObject<OS_dispatch_queue> *accessQueue;
    unsigned int needsUpdate:1;
    unsigned int isForcedForXCTesting:1;
    unsigned int isForcedForRemoteUpdates:1;
}

@property (nonatomic) BOOL URLTypesChanged;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue;
@property (nonatomic) BOOL applicationsChanged;
@property (readonly, nonatomic) NSUUID *cacheGUID;
@property (readonly, nonatomic) NSDate *dateInitialized;
@property (nonatomic) BOOL documentTypesChanged;
@property (readonly, nonatomic) FSNode *node; // @synthesize node;
@property (nonatomic, getter=arePrefsLoaded) BOOL prefsLoaded;
@property (readonly, nonatomic) struct LSSchema *schema;
@property (nonatomic, getter=isSeeded) BOOL seeded;
@property (readonly, nonatomic) NSString *seededModelCode;
@property (readonly, nonatomic) NSString *seededSystemVersion;
@property (nonatomic, getter=isSeedingComplete) BOOL seedingComplete;
@property (readonly, nonatomic) struct __CSStore *store; // @synthesize store;
@property (nonatomic) BOOL typeDeclarationsChanged;
@property (readonly, nonatomic) unsigned int userID; // @synthesize userID=uid;

+ (id)headerTableName;
+ (unsigned int)sessionStatus;
+ (void)setSeedingInProgress:(BOOL)arg1;
- (void).cxx_destruct;
- (id)_init;
- (void)applicationWasInstalled:(unsigned int)arg1;
- (void)applicationWillBeUninstalled:(unsigned int)arg1;
- (void)claimDidChange:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)getCacheGUIDBytes:(unsigned char [16])arg1;
- (id)init;
- (void)registerCanonicalNames;
- (void)registerCanonicalNamesFromStringLocalizer:(id)arg1;

@end
