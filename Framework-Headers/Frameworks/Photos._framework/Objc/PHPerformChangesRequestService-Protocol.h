//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSPersistentStoreCoordinator, NSString;

@protocol PHPerformChangesRequestService <NSObject>
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSString *)uuidForSaveToken:(NSString *)arg1;
@end
