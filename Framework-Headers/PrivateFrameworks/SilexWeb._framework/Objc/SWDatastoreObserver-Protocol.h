//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@class SWDatastore;
@protocol SWDatastoreManager, SWSession;

@protocol SWDatastoreObserver <NSObject>
- (void)datastoreManager:(id<SWDatastoreManager>)arg1 didChangeFromDatastore:(SWDatastore *)arg2 originatingSession:(id<SWSession>)arg3;
@end
