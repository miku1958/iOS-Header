//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXIPCServerClientRegistration : NSObject
{
    unsigned int _port;
    NSString *_identifier;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned int port; // @synthesize port=_port;

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;

@end

