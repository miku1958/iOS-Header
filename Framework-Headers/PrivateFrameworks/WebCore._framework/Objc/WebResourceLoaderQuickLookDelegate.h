//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSURLConnectionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate>
{
    struct RefPtr<WebCore::ResourceLoader> _resourceLoader;
    BOOL _hasSentDidReceiveResponse;
    BOOL _hasFailed;
    struct QuickLookHandle *_quickLookHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct QuickLookHandle *quickLookHandle; // @synthesize quickLookHandle=_quickLookHandle;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_sendDidReceiveResponseIfNecessary;
- (void)clearHandle;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithResourceLoader:(PassRefPtr_f165d04b)arg1;

@end

