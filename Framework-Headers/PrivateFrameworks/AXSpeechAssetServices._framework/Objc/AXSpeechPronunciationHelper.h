//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechAssetServices/AXUIClientDelegate-Protocol.h>

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate>
{
    BOOL _inSession;
    CDUnknownBlockType _resultCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetUpdaterClient;
- (float)audioLevel;
- (void)cancelPronunciationSession;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)startPronunciationSession:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (void)stopPronunciationSession;
- (BOOL)supportsPronunciationSessions;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;

@end

