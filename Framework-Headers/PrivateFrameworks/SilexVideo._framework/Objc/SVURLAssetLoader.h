//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVURLAssetLoading-Protocol.h>

@class NSDictionary, NSString;
@protocol SVURLAssetFactory, SVVideoURLProviding;

@interface SVURLAssetLoader : NSObject <SVURLAssetLoading>
{
    id<SVURLAssetFactory> _URLAssetFactory;
    id<SVVideoURLProviding> _URLProvider;
    NSDictionary *_options;
}

@property (readonly, nonatomic) id<SVURLAssetFactory> URLAssetFactory; // @synthesize URLAssetFactory=_URLAssetFactory;
@property (readonly, nonatomic) id<SVVideoURLProviding> URLProvider; // @synthesize URLProvider=_URLProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)URLAssetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProvider:(id)arg2 options:(id)arg3;

@end

