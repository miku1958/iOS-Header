//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKNetworkRequestRecord-Protocol.h>

@class NSData, NSString, NSURLRequest, NSURLResponse, _IKJSInspectorNetworkLoader;

@interface _IKJSInspectorNetworkRequestRecord : NSObject <IKNetworkRequestRecord>
{
    NSString *_identifier;
    _IKJSInspectorNetworkLoader *_loader;
    long long _resourceType;
    long long _initiatorType;
    NSURLRequest *_URLRequest;
    NSURLResponse *_URLResponse;
    NSData *_responseBodyData;
}

@property (copy, nonatomic, getter=urlRequest) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property (copy, nonatomic, getter=urlResponse) NSURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long initiatorType; // @synthesize initiatorType=_initiatorType;
@property (weak, nonatomic) _IKJSInspectorNetworkLoader *loader; // @synthesize loader=_loader;
@property (readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property (copy, nonatomic) NSData *responseBodyData; // @synthesize responseBodyData=_responseBodyData;
@property (readonly) Class superclass;

+ (long long)_protocolResourceTypeForType:(long long)arg1;
- (void).cxx_destruct;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;
- (void)didCompleteLoadingWithResponseBody:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
- (id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4;
- (void)willSendRequest:(id)arg1;

@end
