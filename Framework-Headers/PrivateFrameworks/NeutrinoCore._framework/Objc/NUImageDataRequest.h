//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSDictionary, NSString;

@interface NUImageDataRequest : NUImageRenderRequest
{
    NSString *_dataExtractor;
    NSDictionary *_options;
}

@property (copy) NSString *dataExtractor; // @synthesize dataExtractor=_dataExtractor;
@property (readonly) NSDictionary *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;

@end

