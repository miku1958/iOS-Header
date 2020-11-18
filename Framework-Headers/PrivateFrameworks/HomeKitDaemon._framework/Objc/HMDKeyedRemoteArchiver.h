//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : NSObject
{
    NSKeyedArchiver *_archiver;
    NSString *_transportType;
}

@property (strong, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
@property (strong, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)finishEncoding;
- (id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(BOOL)arg2;
- (id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(BOOL)arg2 remoteGateway:(BOOL)arg3;

@end

