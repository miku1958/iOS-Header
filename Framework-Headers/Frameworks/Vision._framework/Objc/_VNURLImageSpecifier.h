//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageSpecifier.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _VNURLImageSpecifier : VNImageSpecifier
{
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (id)url;

@end

