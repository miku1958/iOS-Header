//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCPeerIDInternal : NSObject
{
    NSString *_idString;
    unsigned long long _pid64;
    NSString *_displayName;
}

@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSString *idString; // @synthesize idString=_idString;
@property (readonly, nonatomic) unsigned long long pid64; // @synthesize pid64=_pid64;

- (void)dealloc;
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;

@end

