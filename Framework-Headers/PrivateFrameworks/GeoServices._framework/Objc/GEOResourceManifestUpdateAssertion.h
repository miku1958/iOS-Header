//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject
{
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)_connectToGeod;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithReason:(id)arg1;

@end

