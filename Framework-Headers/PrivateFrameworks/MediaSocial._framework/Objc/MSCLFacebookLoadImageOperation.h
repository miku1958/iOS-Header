//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIImageDataConsumer;
@protocol OS_dispatch_queue;

@interface MSCLFacebookLoadImageOperation : NSOperation
{
    NSString *_accessToken;
    SKUIImageDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct CGSize _imagePixelSize;
    NSString *_objectIdentifier;
    CDUnknownBlockType _outputBlock;
}

@property (copy) NSString *accessToken;
@property (strong) SKUIImageDataConsumer *dataConsumer;
@property struct CGSize imagePixelSize;
@property (copy) NSString *objectIdentifier;
@property (copy) CDUnknownBlockType outputBlock;

- (void).cxx_destruct;
- (id)_getImageWithURL:(id)arg1 error:(id *)arg2;
- (id)_newFacebookRequest;
- (id)init;
- (void)main;

@end
