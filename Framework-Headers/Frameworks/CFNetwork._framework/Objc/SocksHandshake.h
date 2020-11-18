//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SocksHandshake : NSObject
{
    BOOL _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}

@property (strong) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property BOOL finished; // @synthesize finished=_finished;
@property (strong) NSString *host; // @synthesize host=_host;
@property unsigned short port; // @synthesize port=_port;

+ (id)socksHadshakeWithVersion:(int)arg1;
- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (BOOL)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
