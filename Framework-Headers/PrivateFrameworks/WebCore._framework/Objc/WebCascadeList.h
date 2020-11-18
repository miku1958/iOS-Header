//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface WebCascadeList : NSArray
{
    struct WeakPtr<WebCore::FontCascade> _font;
    int _character;
    unsigned long long _count;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16> _fontDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithFont:(const struct FontCascade *)arg1 character:(int)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

