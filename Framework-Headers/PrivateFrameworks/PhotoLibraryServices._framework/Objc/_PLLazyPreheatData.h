//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface _PLLazyPreheatData : NSData
{
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)arg1;
- (void)_loadData;
- (const void *)bytes;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (unsigned long long)length;

@end

