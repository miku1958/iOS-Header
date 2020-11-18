//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject
{
    NSObject<OS_nw_channel> *_kernelChannel;
    struct nw_protocol *_protocol;
    struct nw_protocol *_defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}

@property struct nw_protocol *defaultInputProtocol; // @synthesize defaultInputProtocol=_defaultInputProtocol;
@property (strong) NSObject<OS_nw_channel> *kernelChannel; // @synthesize kernelChannel=_kernelChannel;
@property struct nw_protocol *protocol; // @synthesize protocol=_protocol;
@property (strong) NSMutableDictionary *userChannels; // @synthesize userChannels=_userChannels;

- (void).cxx_destruct;
- (void)dealloc;

@end
