//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFService;
@protocol OS_dispatch_queue;

@interface RPAppSignInService : NSObject
{
    BOOL _activateCalled;
    SFService *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _flags;
    NSString *_appName;
    NSString *_appBundleID;
    NSArray *_associatedDomains;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property (copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (id)description;
- (id)init;
- (void)invalidate;

@end
