//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject
{
    NSString *_string;
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
}

@property (readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_string;

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

