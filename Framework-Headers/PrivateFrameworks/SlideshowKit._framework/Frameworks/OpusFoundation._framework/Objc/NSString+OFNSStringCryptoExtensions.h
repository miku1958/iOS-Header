//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (OFNSStringCryptoExtensions)
+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)generateUUID;
+ (id)mimeBoundary;
+ (id)mimeCloser;
+ (id)mimePart:(id)arg1 forName:(id)arg2;
+ (id)multipartMIMEContentType;
+ (id)normalizeString:(id)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)upperBoundString:(id)arg1;
- (id)firstline;
- (id)hmacSha1Hash:(id)arg1;
- (id)javaScriptEscapedString;
- (id)md5Hash;
- (id)md5HashString;
- (id)pathRelativeTo:(id)arg1;
- (id)sha1HashData;
- (id)sha1HashString;
- (id)stringByAddingPercentEscapes;
- (id)stringByAddingPercentEscapesForURLPath;
- (id)stringByCapitalizingFirstCharacter;
- (id)stringByDeletingTrailingSlash;
- (id)stringByReplacingPercentEscapes;
@end

