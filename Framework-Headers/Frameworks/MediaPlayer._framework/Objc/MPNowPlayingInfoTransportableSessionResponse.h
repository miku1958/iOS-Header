//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject
{
    NSString *_identifier;
    NSString *_sessionType;
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;

+ (id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3;
- (void).cxx_destruct;
- (id)_init;

@end

