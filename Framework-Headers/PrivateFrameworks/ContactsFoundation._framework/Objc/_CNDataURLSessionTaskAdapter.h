//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/NSURLSessionDataDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _onDataReceived;
    CDUnknownBlockType _onCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
@property (copy) CDUnknownBlockType onDataReceived; // @synthesize onDataReceived=_onDataReceived;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;

@end

