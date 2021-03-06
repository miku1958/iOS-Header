//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDQueryServerClientState : NSObject <NSCopying>
{
    unsigned int _applicationState;
}

@property (readonly, nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithApplicationState:(unsigned int)arg1;

@end

