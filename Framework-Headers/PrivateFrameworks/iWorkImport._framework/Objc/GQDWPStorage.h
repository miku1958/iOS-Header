//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDWPStorage : NSObject
{
    GQDSStylesheet *mStylesheet;
    struct __CFArray *mBody;
    struct __CFArray *mAttachments;
}

- (struct __CFArray *)attachments;
- (void)dealloc;
- (id)stylesheet;

@end

