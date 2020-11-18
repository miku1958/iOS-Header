//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEHotspotNetwork, NSArray, NSString;

@interface NEHotspotHelperCommand : NSObject
{
    struct __CNPluginCommand *_command;
}

@property struct __CNPluginCommand *command; // @synthesize command=_command;
@property (readonly) long long commandType;
@property (readonly) NSString *interfaceName;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (id)createResponse:(long long)arg1;
- (id)createTCPConnection:(id)arg1;
- (id)createUDPSession:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCommand:(struct __CNPluginCommand *)arg1;

@end

