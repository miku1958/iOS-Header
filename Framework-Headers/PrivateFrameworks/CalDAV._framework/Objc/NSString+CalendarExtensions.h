//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
- (id)appendSlashIfNeeded;
- (id)quote;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFinalComma;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFirstComma;
- (id)trimWhiteSpace;
- (id)unquote;
@end
