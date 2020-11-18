//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMSharedMessageSendingUtilities : NSObject
{
    long long _serviceAvailability;
}

@property long long serviceAvailability; // @synthesize serviceAvailability=_serviceAvailability;

+ (void)_setupAccountMonitor;
+ (void)initialize;
+ (id)sharedInstance;
- (BOOL)_canSendText;
- (BOOL)_hasSMSCapability;
- (BOOL)_isiMessageSupported;
- (id)_managedConfigAppWhitelist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
- (BOOL)canSendText;
- (BOOL)isMMSEnabled;
- (BOOL)isSupportedAttachmentUTI:(id)arg1;
- (BOOL)isiMessageEnabled;

@end

