//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMLWriterDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>
{
    NSString *_resource_dir;
    int _serial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (id)initWithResourceDir:(id)arg1;

@end

