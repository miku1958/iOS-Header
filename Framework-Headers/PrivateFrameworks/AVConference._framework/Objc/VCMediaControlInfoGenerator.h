//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaControlInfoDelegate-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate>
{
    unsigned int _type;
    struct __CFDictionary *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;
    unsigned char _version;
    unsigned char _fecFeedbackVersion;
    unsigned int _optionBitmap;
    struct _opaque_pthread_rwlock_t _callbackDictLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned char fecFeedbackVersion; // @synthesize fecFeedbackVersion=_fecFeedbackVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // @synthesize type=_type;
@property (readonly) unsigned char version; // @synthesize version=_version;

- (int)addMediaControlInfoOption:(unsigned int)arg1;
- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void *)arg1;
- (void)disposeControlInfo:(id)arg1;
- (unsigned long long)feedbackSize;
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;
- (void *)newControlInfo;
- (id)newControlInfoFromPool;
- (void *)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (void *)newMediaControlInfo;
- (void *)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (void)passMediaControlInfo:(id)arg1 isFillBlobCallback:(BOOL)arg2;
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;

@end
