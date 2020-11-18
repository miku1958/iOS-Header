//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/CAMLWriterDelegate-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>
{
    NSString *_resource_dir;
    int _serial;
    NSString *_image_format;
    NSDictionary *_image_encode_options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *image_encode_options; // @synthesize image_encode_options=_image_encode_options;
@property (copy) NSString *image_format; // @synthesize image_format=_image_format;
@property (readonly) Class superclass;

- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (void)dealloc;
- (id)initWithResourceDir:(id)arg1;

@end
