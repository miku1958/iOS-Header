//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/NSObject-Protocol.h>

@class CAMLWriter, NSString, NSURL;

@protocol CAMLWriterDelegate <NSObject>

@optional
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 IDForObject:(id)arg2;
- (NSURL *)CAMLWriter:(CAMLWriter *)arg1 URLForResource:(id)arg2;
- (BOOL)CAMLWriter:(CAMLWriter *)arg1 shouldEncodeObject:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 typeForObject:(id)arg2;
@end

