//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)pathWithComponents:(id)arg1;
- (const unsigned short *)_fastCharacterContents;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (BOOL)isAbsolutePath;
- (BOOL)isEqualToString:(id)arg1;
- (id)lastPathComponent;
- (unsigned long long)length;
- (id)pathComponents;
- (id)pathExtension;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;

@end
