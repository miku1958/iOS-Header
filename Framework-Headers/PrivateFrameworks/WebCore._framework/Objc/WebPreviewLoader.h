//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebPreviewLoader : NSObject
{
    struct WeakPtr<WebCore::ResourceLoader> _resourceLoader;
    struct ResourceResponse _response;
    struct RefPtr<WebCore::PreviewLoaderClient, WTF::DumbPtrTraits<WebCore::PreviewLoaderClient>> _client;
    struct unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter>> _converter;
    struct RetainPtr<NSMutableArray> _bufferedDataArray;
    BOOL _hasLoadedPreview;
    BOOL _hasProcessedResponse;
    struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer>> _bufferedData;
    long long _lengthReceived;
    BOOL _needsToCallDidFinishLoading;
    BOOL _shouldDecidePolicyBeforeLoading;
}

@property (readonly, nonatomic) BOOL shouldDecidePolicyBeforeLoading; // @synthesize shouldDecidePolicyBeforeLoading=_shouldDecidePolicyBeforeLoading;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_loadPreviewIfNeeded;
- (void)appendDataArray:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)failed;
- (void)finishedAppending;
- (id)initWithResourceLoader:(struct ResourceLoader *)arg1 resourceResponse:(const struct ResourceResponse *)arg2;

@end
