//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint
{
}

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSString *port;

+ (unsigned int)endpointType;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;

@end
