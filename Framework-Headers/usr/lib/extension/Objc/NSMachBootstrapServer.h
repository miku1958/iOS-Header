//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer
{
}

+ (id)sharedInstance;
- (id)portForName:(id)arg1;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)registerPort:(id)arg1 name:(id)arg2;
- (BOOL)removePortForName:(id)arg1;
- (id)servicePortWithName:(id)arg1;

@end
