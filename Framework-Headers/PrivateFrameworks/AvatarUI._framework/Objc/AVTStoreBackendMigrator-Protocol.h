//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTStoreBackend, AVTStoreBackendMigratableSource;

@protocol AVTStoreBackendMigrator <NSObject>
- (BOOL)migrateContentFromSource:(id<AVTStoreBackendMigratableSource>)arg1 toDestination:(id<AVTStoreBackend>)arg2 error:(id *)arg3;
@end

