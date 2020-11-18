//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol IDSLinkDelegate;

@protocol IDSLink <NSObject>

@property (weak) id<IDSLinkDelegate> alternateDelegate;
@property (strong) NSString *cbuuid;
@property (weak) id<IDSLinkDelegate> delegate;
@property (strong) NSString *deviceUniqueID;
@property (readonly) unsigned long long headerOverhead;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state;

- (NSDictionary *)copyLinkStatsDict;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@optional
- (void)start;
@end
