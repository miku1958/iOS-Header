//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkTransaction : NSObject
{
    RPCompanionLinkClient *_client;
    NSString *_identifier;
    NSString *_label;
}

@property (strong, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;

- (void).cxx_destruct;
- (void)invalidate;

@end

