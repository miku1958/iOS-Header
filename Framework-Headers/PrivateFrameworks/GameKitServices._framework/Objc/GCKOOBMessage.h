//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/NSCoding-Protocol.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

- (unsigned int)band;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)type;

@end

