//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQDWPTextLabel : NSObject
{
    struct __CFString *mFormat;
    int mLabelType;
    int mFirst;
}

- (void)dealloc;
- (int)first;
- (struct __CFString *)format;
- (int)labelType;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

