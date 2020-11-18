//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>

@class NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>
{
    BOOL _allowNilDesiredKeys;
}

@property (nonatomic) BOOL allowNilDesiredKeys; // @synthesize allowNilDesiredKeys=_allowNilDesiredKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)init;
- (id)initAllowingNilDesiredKeys:(BOOL)arg1;

@end
