//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface APXPCListenerManager : NSObject <NSXPCListenerDelegate>
{
    NSMutableDictionary *_delegates;
    NSMutableArray *_listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMutableDictionary *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property (readonly) Class superclass;

+ (void)addDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
