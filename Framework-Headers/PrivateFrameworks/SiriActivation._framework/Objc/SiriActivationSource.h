//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSString;

@interface SiriActivationSource : NSObject
{
    BSServiceConnection *_connection;
    struct os_unfair_lock_s _lock;
    BOOL _active;
    BOOL _knowsIfActive;
    NSString *_identifier;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (oneway void)activeChangedTo:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isEnabled;

@end
