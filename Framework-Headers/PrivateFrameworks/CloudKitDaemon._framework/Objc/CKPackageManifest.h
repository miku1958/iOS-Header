//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKPackageManifest : NSObject
{
}

+ (id)packageWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (BOOL)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id *)arg3;
+ (BOOL)writePackage:(id)arg1 toFile:(id)arg2 error:(id *)arg3;

@end

