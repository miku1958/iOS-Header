//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAttestInternal/NSURLSessionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PinnedUrlDelegate : NSObject <NSURLSessionDelegate>
{
    NSString *m_host;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHost:(id)arg1;

@end

