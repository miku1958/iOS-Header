//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

@class GEOStyleAttribute, NSObject, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MKSearchFoundationImage : SFImage
{
    NSObject<OS_dispatch_group> *_group;
    NSURL *_url;
    GEOStyleAttribute *_styleAttribute;
}

- (void).cxx_destruct;
- (id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

