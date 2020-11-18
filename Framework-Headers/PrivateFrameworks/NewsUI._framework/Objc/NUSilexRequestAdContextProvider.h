//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class NSString, SXAdRequest;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider>
{
    SXAdRequest *_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXAdRequest *request; // @synthesize request=_request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)creativeTypeFromBannerType:(unsigned long long)arg1;
- (id)initWithAdRequest:(id)arg1;

@end

