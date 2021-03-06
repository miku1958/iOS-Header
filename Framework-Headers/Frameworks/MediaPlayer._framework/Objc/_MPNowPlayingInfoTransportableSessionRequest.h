//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPNowPlayingInfoTransportableSessionRequest-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest>
{
    NSString *_identifier;
    NSString *_preferredSessionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *preferredSessionType; // @synthesize preferredSessionType=_preferredSessionType;
@property (readonly) Class superclass;

+ (id)requestWithIdentifier:(id)arg1 preferredSessionType:(id)arg2;
- (void).cxx_destruct;

@end

