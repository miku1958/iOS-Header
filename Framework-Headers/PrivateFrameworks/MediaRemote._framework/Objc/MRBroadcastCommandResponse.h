//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MRBroadcastCommandResponse : NSObject <NSSecureCoding>
{
    NSArray *_commandHandlerStatuses;
    int _pid;
    NSData *_responseData;
    NSString *_bundleIdentifer;
}

@property (readonly, nonatomic) NSString *bundleIdentifer; // @synthesize bundleIdentifer=_bundleIdentifer;
@property (readonly, nonatomic) NSArray *commandHandlerStatuses;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 responseData:(id)arg3;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 statuses:(id)arg3;

@end
