//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebTextIteratorPrivate : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator>> _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _upconvertedText;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

