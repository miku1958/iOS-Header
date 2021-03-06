//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStoreBackendMigrator-Protocol.h>

@class AVTCoreEnvironment, NSString;
@protocol AVTUILogger;

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator>
{
    id<AVTUILogger> _logger;
    AVTCoreEnvironment *_environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)arg1;
- (BOOL)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
- (id)updatedRecordsForMigratingRecords:(id)arg1 source:(id)arg2 destinationBackend:(id)arg3 error:(id *)arg4;

@end

